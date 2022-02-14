
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_pcpu_stats {unsigned int tx_bytes; int syncp; int tx_packets; } ;
struct sk_buff {unsigned int len; } ;
struct net_device {int dummy; } ;
struct macvlan_dev {TYPE_1__* pcpu_stats; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int tx_dropped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct macvlan_dev*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 struct macvlan_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 struct vlan_pcpu_stats* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_2,
          struct net_device *VAR_3)
{
 struct macvlan_dev *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5 = VAR_2->len;
 int VAR_6;

 if (FUNC_9(FUNC_4(VAR_3)))
  return FUNC_1(VAR_4, VAR_2);

 VAR_6 = FUNC_2(VAR_2, VAR_3);

 if (FUNC_0(VAR_6 == VAR_1 || VAR_6 == VAR_0)) {
  struct vlan_pcpu_stats *VAR_7;

  VAR_7 = FUNC_6(VAR_4->pcpu_stats);
  FUNC_7(&VAR_7->syncp);
  VAR_7->tx_packets++;
  VAR_7->tx_bytes += VAR_5;
  FUNC_8(&VAR_7->syncp);
 } else {
  FUNC_5(VAR_4->pcpu_stats->tx_dropped);
 }
 return VAR_6;
}
