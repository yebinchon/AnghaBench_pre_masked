
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {scalar_t__ len; int cb; } ;
struct net_device {int dummy; } ;
struct mlxsw_tx_info {int is_emad; int local_port; } ;
struct mlxsw_sp_port_pcpu_stats {int syncp; int tx_bytes; int tx_packets; } ;
struct mlxsw_sp_port {TYPE_1__* pcpu_stats; int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct mlxsw_skb_cb {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int tx_dropped; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,struct sk_buff*,struct mlxsw_tx_info const*) ;
 scalar_t__ FUNC_5 (int ,struct mlxsw_tx_info const*) ;
 int FUNC_6 (struct sk_buff*,struct mlxsw_tx_info const*) ;
 struct mlxsw_sp_port* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (int ) ;
 struct mlxsw_sp_port_pcpu_stats* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_15(struct sk_buff *VAR_3,
          struct net_device *VAR_4)
{
 struct mlxsw_sp_port *VAR_5 = FUNC_7(VAR_4);
 struct mlxsw_sp *VAR_6 = VAR_5->mlxsw_sp;
 struct mlxsw_sp_port_pcpu_stats *VAR_7;
 const struct mlxsw_tx_info VAR_8 = {
  .local_port = VAR_5->local_port,
  .is_emad = 0,
 };
 u64 VAR_9;
 int VAR_10;

 FUNC_3(VAR_3->cb, 0, sizeof(struct mlxsw_skb_cb));

 if (FUNC_5(VAR_6->core, &VAR_8))
  return VAR_1;

 if (FUNC_14(FUNC_8(VAR_3) < VAR_0)) {
  struct sk_buff *VAR_11 = VAR_3;

  VAR_3 = FUNC_9(VAR_3, VAR_0);
  if (!VAR_3) {
   FUNC_10(VAR_5->pcpu_stats->tx_dropped);
   FUNC_1(VAR_11);
   return VAR_2;
  }
  FUNC_0(VAR_11);
 }

 if (FUNC_2(VAR_3)) {
  FUNC_10(VAR_5->pcpu_stats->tx_dropped);
  return VAR_2;
 }

 FUNC_6(VAR_3, &VAR_8);



 VAR_9 = VAR_3->len - VAR_0;




 VAR_10 = FUNC_4(VAR_6->core, VAR_3, &VAR_8);

 if (!VAR_10) {
  VAR_7 = FUNC_11(VAR_5->pcpu_stats);
  FUNC_12(&VAR_7->syncp);
  VAR_7->tx_packets++;
  VAR_7->tx_bytes += VAR_9;
  FUNC_13(&VAR_7->syncp);
 } else {
  FUNC_10(VAR_5->pcpu_stats->tx_dropped);
  FUNC_1(VAR_3);
 }
 return VAR_2;
}
