
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_volume_desc {int mode; struct ubi_volume* vol; } ;
struct ubi_volume {int upd_buf; scalar_t__ changing_leb; int vol_id; TYPE_1__* ubi; int upd_bytes; int upd_received; scalar_t__ updating; } ;
struct inode {int dummy; } ;
struct file {struct ubi_volume_desc* private_data; } ;
struct TYPE_2__ {int ubi_num; } ;


 int FUNC_0 (char*,int ,int ,int ,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ubi_volume_desc*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct ubi_volume_desc *VAR_2 = VAR_1->private_data;
 struct ubi_volume *VAR_3 = VAR_2->vol;

 FUNC_0("release device %d, volume %d, mode %d",
  VAR_3->ubi->ubi_num, VAR_3->vol_id, VAR_2->mode);

 if (VAR_3->updating) {
  FUNC_3(VAR_3->ubi, "update of volume %d not finished, volume is damaged",
    VAR_3->vol_id);
  FUNC_1(!VAR_3->changing_leb);
  VAR_3->updating = 0;
  FUNC_4(VAR_3->upd_buf);
 } else if (VAR_3->changing_leb) {
  FUNC_0("only %lld of %lld bytes received for atomic LEB change for volume %d:%d, cancel",
   VAR_3->upd_received, VAR_3->upd_bytes, VAR_3->ubi->ubi_num,
   VAR_3->vol_id);
  VAR_3->changing_leb = 0;
  FUNC_4(VAR_3->upd_buf);
 }

 FUNC_2(VAR_2);
 return 0;
}
