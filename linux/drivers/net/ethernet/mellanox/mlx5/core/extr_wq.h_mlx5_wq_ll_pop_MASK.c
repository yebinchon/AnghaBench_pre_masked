
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wq_ll {int cur_sz; int * tail_next; } ;
typedef int __be16 ;



__attribute__((used)) static inline void FUNC_0(struct mlx5_wq_ll *VAR_0, __be16 VAR_1,
      __be16 *VAR_2)
{
 *VAR_0->tail_next = VAR_1;
 VAR_0->tail_next = VAR_2;
 VAR_0->cur_sz--;
}
