
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {scalar_t__ l_blocking; int l_level; int l_requested; int l_action; int l_name; int l_pending_gen; int l_unlock_action; int l_ex_holders; int l_ro_holders; int l_flags; int l_type; int l_mask_waiters; int l_blocked_list; int l_lock; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ocfs2_lock_res*,int ) ;
 unsigned int FUNC_5 (struct ocfs2_lock_res*) ;
 int FUNC_6 (int ,char*,int ,int,int,scalar_t__,...) ;

__attribute__((used)) static unsigned int FUNC_7(struct ocfs2_lock_res *VAR_5,
           int VAR_6)
{
 FUNC_2(&VAR_5->l_lock);

 FUNC_1(VAR_5->l_blocking <= VAR_0);

 if (VAR_5->l_level <= VAR_6) {
  FUNC_6(VAR_2, "lockres %s, lvl %d <= %d, blcklst %d, mask %d, "
       "type %d, flags 0x%lx, hold %d %d, act %d %d, req %d, "
       "block %d, pgen %d\n", VAR_5->l_name, VAR_5->l_level,
       VAR_6, FUNC_3(&VAR_5->l_blocked_list),
       FUNC_3(&VAR_5->l_mask_waiters), VAR_5->l_type,
       VAR_5->l_flags, VAR_5->l_ro_holders,
       VAR_5->l_ex_holders, VAR_5->l_action,
       VAR_5->l_unlock_action, VAR_5->l_requested,
       VAR_5->l_blocking, VAR_5->l_pending_gen);
  FUNC_0();
 }

 FUNC_6(VAR_1, "lockres %s, level %d => %d, blocking %d\n",
      VAR_5->l_name, VAR_5->l_level, VAR_6, VAR_5->l_blocking);

 VAR_5->l_action = VAR_3;
 VAR_5->l_requested = VAR_6;
 FUNC_4(VAR_5, VAR_4);
 return FUNC_5(VAR_5);
}
