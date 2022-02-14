
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_lock; } ;


 int FUNC_0 (struct ocfs2_lock_res*,unsigned int,struct ocfs2_super*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_lock_res *VAR_0,
      unsigned int VAR_1,
      struct ocfs2_super *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->l_lock, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->l_lock, VAR_3);
}
