
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_params {scalar_t__ rq_wq_type; int log_rq_mtu_frames; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5e_params*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int,int ,int ,int ) ;
 int FUNC_4 (struct mlx5e_params*,int *) ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5e_params*,int *) ;

void FUNC_6(struct mlx5_core_dev *VAR_4,
          struct mlx5e_params *VAR_5)
{
 VAR_5->log_rq_mtu_frames = FUNC_2() ?
  VAR_1 :
  VAR_0;

 FUNC_3(VAR_4, "MLX5E: StrdRq(%d) RqSz(%ld) StrdSz(%ld) RxCqeCmprss(%d)\n",
         VAR_5->rq_wq_type == VAR_3,
         VAR_5->rq_wq_type == VAR_3 ?
         FUNC_0(FUNC_4(VAR_5, ((void*)0))) :
         FUNC_0(VAR_5->log_rq_mtu_frames),
         FUNC_0(FUNC_5(VAR_4, VAR_5, ((void*)0))),
         FUNC_1(VAR_5, VAR_2));
}
