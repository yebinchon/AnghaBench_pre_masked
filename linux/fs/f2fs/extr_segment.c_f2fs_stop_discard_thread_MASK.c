
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct discard_cmd_control {struct task_struct* f2fs_issue_discard; } ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct task_struct*) ;

void FUNC_2(struct f2fs_sb_info *VAR_0)
{
 struct discard_cmd_control *VAR_1 = FUNC_0(VAR_0)->dcc_info;

 if (VAR_1 && VAR_1->f2fs_issue_discard) {
  struct task_struct *VAR_2 = VAR_1->f2fs_issue_discard;

  VAR_1->f2fs_issue_discard = ((void*)0);
  FUNC_1(VAR_2);
 }
}
