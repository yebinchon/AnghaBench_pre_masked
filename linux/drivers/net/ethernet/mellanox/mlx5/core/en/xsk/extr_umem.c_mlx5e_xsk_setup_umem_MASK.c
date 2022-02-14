
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct xdp_umem {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_params {int dummy; } ;
struct TYPE_2__ {struct mlx5e_params params; } ;
struct mlx5e_priv {TYPE_1__ channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_params*,int ,int ,int *) ;
 int FUNC_1 (struct mlx5e_priv*,int ) ;
 int FUNC_2 (struct mlx5e_priv*,struct xdp_umem*,int ) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct net_device *VAR_2, struct xdp_umem *VAR_3, u16 VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_3(VAR_2);
 struct mlx5e_params *VAR_6 = &VAR_5->channels.params;
 u16 VAR_7;

 if (FUNC_4(!FUNC_0(VAR_6, VAR_4, VAR_1, &VAR_7)))
  return -VAR_0;

 return VAR_3 ? FUNC_2(VAR_5, VAR_3, VAR_7) :
        FUNC_1(VAR_5, VAR_7);
}
