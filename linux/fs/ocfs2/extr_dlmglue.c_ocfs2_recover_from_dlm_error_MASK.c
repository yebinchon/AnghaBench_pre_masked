
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_event; int l_lock; int l_unlock_action; int l_action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ocfs2_lock_res*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct ocfs2_lock_res *VAR_4,
      int VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(&VAR_4->l_lock, VAR_6);
 FUNC_0(VAR_4, VAR_1);
 FUNC_0(VAR_4, VAR_2);
 if (VAR_5)
  VAR_4->l_action = VAR_0;
 else
  VAR_4->l_unlock_action = VAR_3;
 FUNC_2(&VAR_4->l_lock, VAR_6);

 FUNC_3(&VAR_4->l_event);
}
