
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_lock; int l_holders; } ;
struct ocfs2_lock_holder {int oh_list; int oh_owner_pid; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline void FUNC_6(struct ocfs2_lock_res *VAR_1,
       struct ocfs2_lock_holder *VAR_2)
{
 FUNC_0(&VAR_2->oh_list);
 VAR_2->oh_owner_pid = FUNC_1(FUNC_5(VAR_0));

 FUNC_3(&VAR_1->l_lock);
 FUNC_2(&VAR_2->oh_list, &VAR_1->l_holders);
 FUNC_4(&VAR_1->l_lock);
}
