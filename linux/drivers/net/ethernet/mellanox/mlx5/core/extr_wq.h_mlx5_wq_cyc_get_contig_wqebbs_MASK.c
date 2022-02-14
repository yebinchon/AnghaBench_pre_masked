
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5_wq_cyc {int fbc; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct mlx5_wq_cyc *VAR_0, u16 VAR_1)
{
 return FUNC_0(&VAR_0->fbc, VAR_1) - VAR_1 + 1;
}
