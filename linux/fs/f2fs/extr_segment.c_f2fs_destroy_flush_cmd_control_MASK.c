
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct flush_cmd_control {struct task_struct* f2fs_issue_flush; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {struct flush_cmd_control* fcc_info; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct flush_cmd_control*) ;

void FUNC_3(struct f2fs_sb_info *VAR_0, bool VAR_1)
{
 struct flush_cmd_control *VAR_2 = FUNC_0(VAR_0)->fcc_info;

 if (VAR_2 && VAR_2->f2fs_issue_flush) {
  struct task_struct *VAR_3 = VAR_2->f2fs_issue_flush;

  VAR_2->f2fs_issue_flush = ((void*)0);
  FUNC_1(VAR_3);
 }
 if (VAR_1) {
  FUNC_2(VAR_2);
  FUNC_0(VAR_0)->fcc_info = ((void*)0);
 }
}
