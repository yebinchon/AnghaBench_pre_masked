
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5_wq_cyc {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_wq_cyc*,scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_1(struct mlx5_wq_cyc *VAR_0, u16 VAR_1, u16 VAR_2, u16 VAR_3)
{
 return (FUNC_0(VAR_0, VAR_1 - VAR_2) >= VAR_3) || (VAR_1 == VAR_2);
}
