
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct TYPE_4__ {struct rtnl_link_stats64 vf_vport; } ;
struct mlx5e_priv {TYPE_1__ stats; struct mlx5e_rep_priv* ppriv; TYPE_2__* mdev; } ;
struct mlx5_eswitch_rep {int vport; } ;
struct mlx5_eswitch {int dummy; } ;
struct ifla_vf_stats {int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct TYPE_6__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_5__ {TYPE_3__ priv; } ;


 int FUNC_0 (struct mlx5_eswitch*,int ,struct ifla_vf_stats*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_0)
{
 struct mlx5_eswitch *VAR_1 = VAR_0->mdev->priv.eswitch;
 struct mlx5e_rep_priv *VAR_2 = VAR_0->ppriv;
 struct mlx5_eswitch_rep *VAR_3 = VAR_2->rep;
 struct rtnl_link_stats64 *VAR_4;
 struct ifla_vf_stats VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_3->vport, &VAR_5);
 if (VAR_6) {
  FUNC_1("vport %d error %d reading stats\n", VAR_3->vport, VAR_6);
  return;
 }

 VAR_4 = &VAR_0->stats.vf_vport;

 VAR_4->rx_packets = VAR_5.tx_packets;
 VAR_4->rx_bytes = VAR_5.tx_bytes;
 VAR_4->tx_packets = VAR_5.rx_packets;
 VAR_4->tx_bytes = VAR_5.rx_bytes;
}
