
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct discard_cmd_control {int dummy; } ;
struct discard_cmd {int error; int len; int start; int lstart; int ref; int lock; scalar_t__ bio_ref; int bdev; } ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct discard_cmd_control*,struct discard_cmd*) ;
 int FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct f2fs_sb_info *VAR_2,
       struct discard_cmd *VAR_3)
{
 struct discard_cmd_control *VAR_4 = FUNC_0(VAR_2)->dcc_info;
 unsigned long VAR_5;

 FUNC_6(VAR_3->bdev, VAR_3->start, VAR_3->len);

 FUNC_4(&VAR_3->lock, VAR_5);
 if (VAR_3->bio_ref) {
  FUNC_5(&VAR_3->lock, VAR_5);
  return;
 }
 FUNC_5(&VAR_3->lock, VAR_5);

 FUNC_2(VAR_2, VAR_3->ref);

 if (VAR_3->error == -VAR_0)
  VAR_3->error = 0;

 if (VAR_3->error)
  FUNC_3(
   "%sF2FS-fs: Issue discard(%u, %u, %u) failed, ret: %d",
   VAR_1, VAR_3->lstart, VAR_3->start, VAR_3->len, VAR_3->error);
 FUNC_1(VAR_4, VAR_3);
}
