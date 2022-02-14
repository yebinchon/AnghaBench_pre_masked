
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct mlx5e_xsk {int dummy; } ;
struct mlx5e_rss_params {int dummy; } ;
struct mlx5e_params {int num_tc; int rx_cqe_compress_def; scalar_t__ rq_wq_type; int lro_en; struct mlx5e_xsk* xsk; int tunneled_offload_en; void* num_channels; int tx_min_inline_mode; void* tx_dim_enabled; void* rx_dim_enabled; int lro_timeout; int log_sq_size; int hard_mtu; void* sw_mtu; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlx5e_params*,int ,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 void* FUNC_2 (struct mlx5_core_dev*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct mlx5_core_dev*,int *) ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5e_params*) ;
 int FUNC_6 (struct mlx5e_rss_params*,void*) ;
 int FUNC_7 (struct mlx5_core_dev*,int ) ;
 int FUNC_8 (struct mlx5_core_dev*,struct mlx5e_params*,int *) ;
 int FUNC_9 (struct mlx5e_params*,int ) ;
 int FUNC_10 (struct mlx5e_params*,int ) ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int VAR_14 ;

void FUNC_13(struct mlx5_core_dev *VAR_15,
       struct mlx5e_xsk *VAR_16,
       struct mlx5e_rss_params *VAR_17,
       struct mlx5e_params *VAR_18,
       u16 VAR_19, u16 VAR_20)
{
 u8 VAR_21;

 VAR_18->sw_mtu = VAR_20;
 VAR_18->hard_mtu = VAR_1;
 VAR_18->num_channels = VAR_19;
 VAR_18->num_tc = 1;


 VAR_18->log_sq_size = FUNC_3() ?
  VAR_3 :
  VAR_2;


 FUNC_0(VAR_18, VAR_6,
   FUNC_1(VAR_15, VAR_13));


 VAR_18->rx_cqe_compress_def = 0;
 if (FUNC_2(VAR_15, VAR_12) &&
     FUNC_2(VAR_15, VAR_14))
  VAR_18->rx_cqe_compress_def = FUNC_12(VAR_15);

 FUNC_0(VAR_18, VAR_4, VAR_18->rx_cqe_compress_def);
 FUNC_0(VAR_18, VAR_5, 0);


 FUNC_5(VAR_15, VAR_18);




 if (VAR_18->rq_wq_type == VAR_9) {

  if (!FUNC_8(VAR_15, VAR_18, ((void*)0)))
   VAR_18->lro_en = !FUNC_12(VAR_15);
 }
 VAR_18->lro_timeout = FUNC_7(VAR_15, VAR_0);


 VAR_21 = FUNC_2(VAR_15, VAR_11) ?
   VAR_7 :
   VAR_8;
 VAR_18->rx_dim_enabled = FUNC_2(VAR_15, VAR_10);
 VAR_18->tx_dim_enabled = FUNC_2(VAR_15, VAR_10);
 FUNC_9(VAR_18, VAR_21);
 FUNC_10(VAR_18, VAR_8);


 FUNC_4(VAR_15, &VAR_18->tx_min_inline_mode);


 FUNC_6(VAR_17, VAR_18->num_channels);
 VAR_18->tunneled_offload_en =
  FUNC_11(VAR_15);


 VAR_18->xsk = VAR_16;
}
