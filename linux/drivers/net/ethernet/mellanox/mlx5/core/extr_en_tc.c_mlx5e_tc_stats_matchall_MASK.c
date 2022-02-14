
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct tc_cls_matchall_offload {int stats; } ;
struct rtnl_link_stats64 {scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;
struct mlx5e_rep_priv {struct rtnl_link_stats64 prev_vf_vport_stats; } ;
struct TYPE_2__ {struct rtnl_link_stats64 vf_vport; } ;
struct mlx5e_priv {TYPE_1__ stats; struct mlx5e_rep_priv* ppriv; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;

void FUNC_1(struct mlx5e_priv *VAR_1,
        struct tc_cls_matchall_offload *VAR_2)
{
 struct mlx5e_rep_priv *VAR_3 = VAR_1->ppriv;
 struct rtnl_link_stats64 VAR_4;
 u64 VAR_5;
 u64 VAR_6;

 VAR_4 = VAR_1->stats.vf_vport;
 VAR_6 = VAR_4.rx_packets - VAR_3->prev_vf_vport_stats.rx_packets;
 VAR_5 = VAR_4.rx_bytes - VAR_3->prev_vf_vport_stats.rx_bytes;
 VAR_3->prev_vf_vport_stats = VAR_4;
 FUNC_0(&VAR_2->stats, VAR_6, VAR_5, VAR_0);
}
