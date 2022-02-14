
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct xdp_umem {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_xsk_param {scalar_t__ chunk_size; } ;
struct mlx5e_params {int sw_mtu; } ;
struct TYPE_2__ {scalar_t__ num_channels; int xsk; } ;
struct mlx5e_channels {TYPE_1__ params; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5e_params*,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct xdp_umem*,struct mlx5e_xsk_param*) ;
 scalar_t__ FUNC_3 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_4 (struct mlx5e_params*,struct mlx5e_xsk_param*,struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 struct xdp_umem* FUNC_6 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_7 (struct net_device*,char*,int ,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_8(struct net_device *VAR_0,
       struct mlx5e_channels *VAR_1,
       struct mlx5e_params *VAR_2,
       struct mlx5_core_dev *VAR_3)
{
 u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->params.num_channels; VAR_4++) {
  struct xdp_umem *VAR_5 = FUNC_6(&VAR_1->params, VAR_1->params.xsk, VAR_4);
  struct mlx5e_xsk_param VAR_6;

  if (!VAR_5)
   continue;

  FUNC_2(VAR_5, &VAR_6);

  if (!FUNC_4(VAR_2, &VAR_6, VAR_3)) {
   u32 VAR_7 = FUNC_3(VAR_2, &VAR_6);
   int VAR_8, VAR_9, VAR_10;





   VAR_8 = FUNC_0(VAR_2, VAR_6.chunk_size - VAR_7);
   VAR_9 = FUNC_5(VAR_2, &VAR_6);
   VAR_10 = FUNC_1(VAR_8, VAR_9);

   FUNC_7(VAR_0, "MTU %d is too big for an XSK running on channel %hu. Try MTU <= %d\n",
       VAR_2->sw_mtu, VAR_4, VAR_10);
   return 0;
  }
 }

 return 1;
}
