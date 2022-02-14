
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx5e_rq_param {int rqc; } ;
struct mlx5e_params {int rq_wq_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(struct mlx5e_params *VAR_2,
          struct mlx5e_rq_param *VAR_3)
{
 switch (VAR_2->rq_wq_type) {
 case 128:
  return FUNC_1(VAR_1) +
   FUNC_0(VAR_3->rqc);
 default:
  return VAR_0;
 }
}
