
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xdp_mpwqe {scalar_t__ ds_count; scalar_t__ inline_on; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(struct mlx5e_xdp_mpwqe *VAR_2)
{
 return VAR_2->inline_on &&
        VAR_2->ds_count + VAR_0 > VAR_1;
}
