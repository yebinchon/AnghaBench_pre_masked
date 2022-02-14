
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_debug_toss_dentry; int ls_debug_all_dentry; int ls_debug_locks_dentry; int ls_debug_waiters_dentry; int ls_debug_rsb_dentry; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct dlm_ls *VAR_0)
{
 FUNC_0(VAR_0->ls_debug_rsb_dentry);
 FUNC_0(VAR_0->ls_debug_waiters_dentry);
 FUNC_0(VAR_0->ls_debug_locks_dentry);
 FUNC_0(VAR_0->ls_debug_all_dentry);
 FUNC_0(VAR_0->ls_debug_toss_dentry);
}
