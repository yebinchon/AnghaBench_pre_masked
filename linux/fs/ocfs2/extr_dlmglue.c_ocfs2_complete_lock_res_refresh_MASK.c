
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_event; int l_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_lock_res*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct ocfs2_lock_res *VAR_2,
         int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_2->l_lock, VAR_4);
 FUNC_0(VAR_2, VAR_1);
 if (!VAR_3)
  FUNC_0(VAR_2, VAR_0);
 FUNC_2(&VAR_2->l_lock, VAR_4);

 FUNC_3(&VAR_2->l_event);
}
