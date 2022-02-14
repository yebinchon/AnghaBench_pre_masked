
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_lock; } ;
struct ocfs2_lock_holder {int oh_owner_pid; int oh_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct ocfs2_lock_res *VAR_0,
           struct ocfs2_lock_holder *VAR_1)
{
 FUNC_2(&VAR_0->l_lock);
 FUNC_0(&VAR_1->oh_list);
 FUNC_3(&VAR_0->l_lock);

 FUNC_1(VAR_1->oh_owner_pid);
}
