
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {size_t queue_mapping; } ;
struct net_device {int dummy; } ;
struct enetc_ndev_priv {int active_offloads; struct enetc_bdr** tx_ring; } ;
struct enetc_bdr {int index; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct enetc_bdr*) ;
 int FUNC_3 (struct enetc_bdr*,struct sk_buff*,int ) ;
 struct enetc_ndev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

netdev_tx_t FUNC_9(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct enetc_ndev_priv *VAR_6 = FUNC_4(VAR_5);
 struct enetc_bdr *VAR_7;
 int VAR_8;

 VAR_7 = VAR_6->tx_ring[VAR_4->queue_mapping];

 if (FUNC_8(FUNC_7(VAR_4)->nr_frags > VAR_0))
  if (FUNC_8(FUNC_6(VAR_4)))
   goto drop_packet_err;

 VAR_8 = FUNC_7(VAR_4)->nr_frags + 1;
 if (FUNC_2(VAR_7) < FUNC_0(VAR_8)) {
  FUNC_5(VAR_5, VAR_7->index);
  return VAR_2;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_4, VAR_6->active_offloads);
 if (FUNC_8(!VAR_8))
  goto drop_packet_err;

 if (FUNC_2(VAR_7) < VAR_1)
  FUNC_5(VAR_5, VAR_7->index);

 return VAR_3;

drop_packet_err:
 FUNC_1(VAR_4);
 return VAR_3;
}
