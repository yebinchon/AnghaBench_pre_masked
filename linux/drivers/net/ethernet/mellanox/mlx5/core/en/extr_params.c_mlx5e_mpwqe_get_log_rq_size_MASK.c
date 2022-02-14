
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_params {scalar_t__ log_rq_mtu_frames; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;

u8 FUNC_1(struct mlx5e_params *VAR_1,
          struct mlx5e_xsk_param *VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_1, VAR_2);


 if (VAR_1->log_rq_mtu_frames <
     VAR_3 + VAR_0)
  return VAR_0;

 return VAR_1->log_rq_mtu_frames - VAR_3;
}
