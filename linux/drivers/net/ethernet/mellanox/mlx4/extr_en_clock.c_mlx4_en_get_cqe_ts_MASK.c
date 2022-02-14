
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_ts_cqe {int timestamp_hi; int timestamp_lo; } ;
struct mlx4_cqe {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

u64 FUNC_2(struct mlx4_cqe *VAR_0)
{
 u64 VAR_1, VAR_2;
 struct mlx4_ts_cqe *VAR_3 = (struct mlx4_ts_cqe *)VAR_0;

 VAR_2 = (u64)FUNC_0(VAR_3->timestamp_lo);
 VAR_1 = ((u64)FUNC_1(VAR_3->timestamp_hi) + !VAR_2) << 16;

 return VAR_1 | VAR_2;
}
