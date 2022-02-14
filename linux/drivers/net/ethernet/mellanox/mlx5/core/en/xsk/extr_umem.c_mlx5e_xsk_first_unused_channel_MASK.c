
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5e_xsk {scalar_t__ refcnt; } ;
struct mlx5e_params {scalar_t__ num_channels; } ;


 scalar_t__ FUNC_0 (struct mlx5e_params*,struct mlx5e_xsk*,scalar_t__) ;

u16 FUNC_1(struct mlx5e_params *VAR_0, struct mlx5e_xsk *VAR_1)
{
 u16 VAR_2 = VAR_1->refcnt ? VAR_0->num_channels : 0;

 while (VAR_2) {
  if (FUNC_0(VAR_0, VAR_1, VAR_2 - 1))
   break;
  --VAR_2;
 }

 return VAR_2;
}
