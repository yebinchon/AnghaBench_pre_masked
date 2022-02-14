
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int log_stride; } ;
struct mlx5_cqwq {TYPE_1__ fbc; } ;
struct mlx5_cqe64 {int dummy; } ;


 struct mlx5_cqe64* FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline struct mlx5_cqe64 *FUNC_1(struct mlx5_cqwq *VAR_0, u32 VAR_1)
{
 struct mlx5_cqe64 *VAR_2 = FUNC_0(&VAR_0->fbc, VAR_1);


 VAR_2 += VAR_0->fbc.log_stride == 7;

 return VAR_2;
}
