
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sz_m1; } ;
struct mlx5_wq_ll {scalar_t__ cur_sz; TYPE_1__ fbc; } ;



__attribute__((used)) static inline int FUNC_0(struct mlx5_wq_ll *VAR_0)
{
 return VAR_0->cur_sz == VAR_0->fbc.sz_m1;
}
