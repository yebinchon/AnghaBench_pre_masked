
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rtl8169_private {struct rtl8169_counters* counters; } ;
struct rtl8169_counters {int tx_underun; int tx_aborted; int rx_multicast; int rx_broadcast; int rx_unicast; int tx_multi_collision; int tx_one_collision; int align_errors; int rx_missed; int rx_errors; int tx_errors; int rx_packets; int tx_packets; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct rtl8169_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct rtl8169_private*) ;
 struct device* FUNC_9 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_0,
          struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct rtl8169_private *VAR_3 = FUNC_4(VAR_0);
 struct device *VAR_4 = FUNC_9(VAR_3);
 struct rtl8169_counters *VAR_5 = VAR_3->counters;

 FUNC_0();

 FUNC_6(VAR_4);

 if (FUNC_5(VAR_4))
  FUNC_8(VAR_3);

 FUNC_7(VAR_4);

 VAR_2[0] = FUNC_3(VAR_5->tx_packets);
 VAR_2[1] = FUNC_3(VAR_5->rx_packets);
 VAR_2[2] = FUNC_3(VAR_5->tx_errors);
 VAR_2[3] = FUNC_2(VAR_5->rx_errors);
 VAR_2[4] = FUNC_1(VAR_5->rx_missed);
 VAR_2[5] = FUNC_1(VAR_5->align_errors);
 VAR_2[6] = FUNC_2(VAR_5->tx_one_collision);
 VAR_2[7] = FUNC_2(VAR_5->tx_multi_collision);
 VAR_2[8] = FUNC_3(VAR_5->rx_unicast);
 VAR_2[9] = FUNC_3(VAR_5->rx_broadcast);
 VAR_2[10] = FUNC_2(VAR_5->rx_multicast);
 VAR_2[11] = FUNC_1(VAR_5->tx_aborted);
 VAR_2[12] = FUNC_1(VAR_5->tx_underun);
}
