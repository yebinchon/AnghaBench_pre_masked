
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlxsw_sp_ptp_state {TYPE_4__* mlxsw_sp; int unmatched_lock; int unmatched_ht; } ;
struct mlxsw_sp_ptp_port_dir_stats {int timestamps; int packets; } ;
struct TYPE_6__ {struct mlxsw_sp_ptp_port_dir_stats tx_gcd; struct mlxsw_sp_ptp_port_dir_stats rx_gcd; } ;
struct TYPE_7__ {TYPE_2__ stats; } ;
struct mlxsw_sp_port {TYPE_3__ ptp; } ;
struct TYPE_5__ {size_t local_port; scalar_t__ ingress; } ;
struct mlxsw_sp1_ptp_unmatched {scalar_t__ skb; TYPE_1__ key; int ht_node; } ;
struct TYPE_8__ {struct mlxsw_sp_port** ports; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,struct mlxsw_sp1_ptp_unmatched*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct mlxsw_sp_ptp_state *VAR_1,
       struct mlxsw_sp1_ptp_unmatched *VAR_2)
{
 struct mlxsw_sp_ptp_port_dir_stats *VAR_3;
 struct mlxsw_sp_port *VAR_4;
 int VAR_5;
 FUNC_0();

 FUNC_4(&VAR_1->unmatched_lock);
 VAR_5 = FUNC_3(&VAR_1->unmatched_ht, &VAR_2->ht_node,
         VAR_0);
 FUNC_5(&VAR_1->unmatched_lock);

 if (VAR_5)

  goto out;

 VAR_4 = VAR_1->mlxsw_sp->ports[VAR_2->key.local_port];
 if (VAR_4) {
  VAR_3 = VAR_2->key.ingress ?
   &VAR_4->ptp.stats.rx_gcd :
   &VAR_4->ptp.stats.tx_gcd;
  if (VAR_2->skb)
   VAR_3->packets++;
  else
   VAR_3->timestamps++;
 }







 FUNC_2(VAR_1->mlxsw_sp, VAR_2);

out:
 FUNC_1();
}
