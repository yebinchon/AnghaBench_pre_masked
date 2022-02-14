
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mlx5_cqwq {int dummy; } ;
struct mlx5_cqe64 {scalar_t__ op_own; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mlx5_cqwq*) ;
 struct mlx5_cqe64* FUNC_2 (struct mlx5_cqwq*,int ) ;
 int FUNC_3 (struct mlx5_cqwq*) ;

__attribute__((used)) static inline struct mlx5_cqe64 *FUNC_4(struct mlx5_cqwq *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1);
 struct mlx5_cqe64 *VAR_3 = FUNC_2(VAR_1, VAR_2);
 u8 VAR_4 = VAR_3->op_own & VAR_0;
 u8 VAR_5 = FUNC_3(VAR_1) & 1;

 if (VAR_4 != VAR_5)
  return ((void*)0);


 FUNC_0();

 return VAR_3;
}
