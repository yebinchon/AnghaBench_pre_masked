
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubiblock {scalar_t__ refcnt; int dev_mutex; int * desc; int vol_id; int ubi_num; int gd; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct ubiblock* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct block_device *VAR_3, fmode_t VAR_4)
{
 struct ubiblock *VAR_5 = VAR_3->bd_disk->private_data;
 int VAR_6;

 FUNC_4(&VAR_5->dev_mutex);
 if (VAR_5->refcnt > 0) {




  goto out_done;
 }






 if (VAR_4 & VAR_1) {
  VAR_6 = -VAR_0;
  goto out_unlock;
 }

 VAR_5->desc = FUNC_6(VAR_5->ubi_num, VAR_5->vol_id, VAR_2);
 if (FUNC_0(VAR_5->desc)) {
  FUNC_2(FUNC_3(VAR_5->gd), "failed to open ubi volume %d_%d",
   VAR_5->ubi_num, VAR_5->vol_id);
  VAR_6 = FUNC_1(VAR_5->desc);
  VAR_5->desc = ((void*)0);
  goto out_unlock;
 }

out_done:
 VAR_5->refcnt++;
 FUNC_5(&VAR_5->dev_mutex);
 return 0;

out_unlock:
 FUNC_5(&VAR_5->dev_mutex);
 return VAR_6;
}
