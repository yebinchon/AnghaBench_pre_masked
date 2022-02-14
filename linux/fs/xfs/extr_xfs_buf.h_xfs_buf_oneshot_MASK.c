
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_lru_ref; int b_lru; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct xfs_buf *VAR_0)
{
 if (!FUNC_2(&VAR_0->b_lru) || FUNC_0(&VAR_0->b_lru_ref) > 1)
  return;
 FUNC_1(&VAR_0->b_lru_ref, 0);
}
