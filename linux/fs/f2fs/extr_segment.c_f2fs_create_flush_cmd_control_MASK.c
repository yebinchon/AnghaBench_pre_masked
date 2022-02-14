
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct flush_cmd_control {scalar_t__ f2fs_issue_flush; int issue_list; int flush_wait_queue; int queued_flush; int issued_flush; } ;
struct f2fs_sb_info {TYPE_2__* sb; } ;
typedef int dev_t ;
struct TYPE_6__ {struct flush_cmd_control* fcc_info; } ;
struct TYPE_5__ {TYPE_1__* s_bdev; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_3__* FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (int *,int ) ;
 struct flush_cmd_control* FUNC_6 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ,struct f2fs_sb_info*,char*,int ,int ) ;
 int FUNC_10 (struct flush_cmd_control*) ;
 int FUNC_11 (struct f2fs_sb_info*,int ) ;

int FUNC_12(struct f2fs_sb_info *VAR_4)
{
 dev_t VAR_5 = VAR_4->sb->s_bdev->bd_dev;
 struct flush_cmd_control *VAR_6;
 int VAR_7 = 0;

 if (FUNC_4(VAR_4)->fcc_info) {
  VAR_6 = FUNC_4(VAR_4)->fcc_info;
  if (VAR_6->f2fs_issue_flush)
   return VAR_7;
  goto init_thread;
 }

 VAR_6 = FUNC_6(VAR_4, sizeof(struct flush_cmd_control), VAR_2);
 if (!VAR_6)
  return -VAR_0;
 FUNC_5(&VAR_6->issued_flush, 0);
 FUNC_5(&VAR_6->queued_flush, 0);
 FUNC_8(&VAR_6->flush_wait_queue);
 FUNC_7(&VAR_6->issue_list);
 FUNC_4(VAR_4)->fcc_info = VAR_6;
 if (!FUNC_11(VAR_4, VAR_1))
  return VAR_7;

init_thread:
 VAR_6->f2fs_issue_flush = FUNC_9(VAR_3, VAR_4,
    "f2fs_flush-%u:%u", FUNC_1(VAR_5), FUNC_2(VAR_5));
 if (FUNC_0(VAR_6->f2fs_issue_flush)) {
  VAR_7 = FUNC_3(VAR_6->f2fs_issue_flush);
  FUNC_10(VAR_6);
  FUNC_4(VAR_4)->fcc_info = ((void*)0);
  return VAR_7;
 }

 return VAR_7;
}
