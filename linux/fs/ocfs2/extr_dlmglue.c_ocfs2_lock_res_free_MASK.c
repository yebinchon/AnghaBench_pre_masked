
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_flags; int l_lksb; int l_ex_holders; int l_name; int l_ro_holders; int l_lock; int l_mask_waiters; int l_blocked_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,char*,int ,...) ;
 int FUNC_3 (struct ocfs2_lock_res*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ocfs2_lock_res *VAR_1)
{
 if (!(VAR_1->l_flags & VAR_0))
  return;

 FUNC_3(VAR_1);

 FUNC_2(!FUNC_0(&VAR_1->l_blocked_list),
   "Lockres %s is on the blocked list\n",
   VAR_1->l_name);
 FUNC_2(!FUNC_0(&VAR_1->l_mask_waiters),
   "Lockres %s has mask waiters pending\n",
   VAR_1->l_name);
 FUNC_2(FUNC_4(&VAR_1->l_lock),
   "Lockres %s is locked\n",
   VAR_1->l_name);
 FUNC_2(VAR_1->l_ro_holders,
   "Lockres %s has %u ro holders\n",
   VAR_1->l_name, VAR_1->l_ro_holders);
 FUNC_2(VAR_1->l_ex_holders,
   "Lockres %s has %u ex holders\n",
   VAR_1->l_name, VAR_1->l_ex_holders);


 FUNC_1(&VAR_1->l_lksb, 0, sizeof(VAR_1->l_lksb));

 VAR_1->l_flags = 0UL;
}
