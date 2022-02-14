
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_flags; int l_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct ocfs2_lock_res *VAR_0,
     int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(&VAR_0->l_lock, VAR_2);
 VAR_3 = VAR_0->l_flags & VAR_1;
 FUNC_1(&VAR_0->l_lock, VAR_2);

 return VAR_3;
}
