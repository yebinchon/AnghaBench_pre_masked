
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int tally ;
struct tally_counter {int tx_underrun; int tx_aborted; int rx_multicast; int rx_broadcast; int rx_unicast; int tx_multi_collision; int tx_one_collision; int align_errors; int rx_missed; int rx_errors; int tx_errors; int rx_packets; int tx_packets; } ;
struct r8152 {int intf; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r8152*,int ,int,struct tally_counter*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct r8152* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2,
          struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct r8152 *VAR_5 = FUNC_4(VAR_2);
 struct tally_counter VAR_6;

 if (FUNC_5(VAR_5->intf) < 0)
  return;

 FUNC_0(VAR_5, VAR_1, sizeof(VAR_6), &VAR_6, VAR_0);

 FUNC_6(VAR_5->intf);

 VAR_4[0] = FUNC_3(VAR_6.tx_packets);
 VAR_4[1] = FUNC_3(VAR_6.rx_packets);
 VAR_4[2] = FUNC_3(VAR_6.tx_errors);
 VAR_4[3] = FUNC_2(VAR_6.rx_errors);
 VAR_4[4] = FUNC_1(VAR_6.rx_missed);
 VAR_4[5] = FUNC_1(VAR_6.align_errors);
 VAR_4[6] = FUNC_2(VAR_6.tx_one_collision);
 VAR_4[7] = FUNC_2(VAR_6.tx_multi_collision);
 VAR_4[8] = FUNC_3(VAR_6.rx_unicast);
 VAR_4[9] = FUNC_3(VAR_6.rx_broadcast);
 VAR_4[10] = FUNC_2(VAR_6.rx_multicast);
 VAR_4[11] = FUNC_1(VAR_6.tx_aborted);
 VAR_4[12] = FUNC_1(VAR_6.tx_underrun);
}
