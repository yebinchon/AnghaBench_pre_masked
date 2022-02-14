
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlan_priv {scalar_t__ tx_list; scalar_t__ rx_list; int tx_busy_count; int rx_eoc_count; } ;
struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; int base_addr; int name; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (struct net_device*,int ) ;

__attribute__((used)) static struct net_device_stats *FUNC_6(struct net_device *VAR_8)
{
 struct tlan_priv *VAR_9 = FUNC_1(VAR_8);
 int VAR_10;


 FUNC_5(VAR_8, VAR_6);

 FUNC_0(VAR_2, "RECEIVE:  %s EOC count = %d\n", VAR_8->name,
   VAR_9->rx_eoc_count);
 FUNC_0(VAR_3, "TRANSMIT:  %s Busy count = %d\n", VAR_8->name,
   VAR_9->tx_busy_count);
 if (VAR_7 & VAR_0) {
  FUNC_3(VAR_8->base_addr);
  FUNC_2(VAR_8);
 }
 if (VAR_7 & VAR_1) {
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   FUNC_4(VAR_9->rx_list + VAR_10, "RX", VAR_10);
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   FUNC_4(VAR_9->tx_list + VAR_10, "TX", VAR_10);
 }

 return &VAR_8->stats;

}
