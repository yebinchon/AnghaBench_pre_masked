
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int t; } ;
struct TYPE_10__ {TYPE_3__ ft; } ;
struct TYPE_11__ {TYPE_4__ ttc; } ;
struct TYPE_7__ {int num_channels; } ;
struct TYPE_8__ {TYPE_1__ params; } ;
struct mlx5e_priv {int netdev; TYPE_6__* direct_tir; TYPE_5__ fs; TYPE_2__ channels; } ;
struct mlx5_flow_destination {int tir_num; int type; int ft; } ;
struct ethtool_channels {int combined_count; } ;
struct TYPE_12__ {int tirn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*,struct ethtool_channels*) ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5_flow_destination*) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
      struct ethtool_channels *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_2(VAR_2);
 u16 VAR_5 = VAR_4->channels.params.num_channels;
 u32 VAR_6 = VAR_3->combined_count;
 struct mlx5_flow_destination VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_4, VAR_3);
 if (VAR_8)
  return VAR_8;

 if (VAR_5 == 1 && VAR_6 > 1) {
  VAR_7.type = VAR_0;
  VAR_7.ft = VAR_4->fs.ttc.ft.t;
 } else if (VAR_6 == 1 && VAR_5 > 1) {
  VAR_7.type = VAR_1;
  VAR_7.tir_num = VAR_4->direct_tir[0].tirn;
 } else {
  return 0;
 }

 VAR_8 = FUNC_1(VAR_4, &VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_4->netdev, "Failed to update vport rx rule, when going from (%d) channels to (%d) channels\n",
       VAR_5, VAR_6);
  return VAR_8;
 }

 return 0;
}
