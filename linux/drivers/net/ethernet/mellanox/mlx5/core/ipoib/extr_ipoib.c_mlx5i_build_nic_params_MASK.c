
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_params {int lro_en; int tunneled_offload_en; scalar_t__ hard_mtu; int log_rq_mtu_frames; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_params*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5e_params*) ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5e_params*) ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_dev *VAR_5,
       struct mlx5e_params *VAR_6)
{

 FUNC_0(VAR_6, VAR_1, 0);
 FUNC_3(VAR_5, VAR_6);
 FUNC_2(VAR_5, VAR_6);


 VAR_6->log_rq_mtu_frames = FUNC_1() ?
  VAR_0 :
  VAR_2;

 VAR_6->lro_en = 0;
 VAR_6->hard_mtu = VAR_3 + VAR_4;
 VAR_6->tunneled_offload_en = 0;
}
