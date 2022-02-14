
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int log_sz; } ;
struct mlx5_cqwq {TYPE_1__ fbc; } ;



__attribute__((used)) static inline u32 FUNC_0(struct mlx5_cqwq *VAR_0, u32 VAR_1)
{
 return VAR_1 >> VAR_0->fbc.log_sz;
}
