
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5e_xsk_param {scalar_t__ headroom; } ;
struct mlx5e_params {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;

u16 FUNC_1(struct mlx5e_params *VAR_3,
     struct mlx5e_xsk_param *VAR_4)
{
 u16 VAR_5 = VAR_1;

 if (FUNC_0(VAR_3, VAR_4)) {
  VAR_5 += VAR_2;
  if (VAR_4)
   VAR_5 += VAR_4->headroom;
 } else {
  VAR_5 += VAR_0;
 }

 return VAR_5;
}
