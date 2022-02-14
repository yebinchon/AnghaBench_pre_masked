
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igc_adapter {unsigned int rss_queues; } ;
struct ethtool_channels {unsigned int combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct igc_adapter*) ;
 int FUNC_1 (struct igc_adapter*) ;
 int FUNC_2 (struct igc_adapter*,unsigned int) ;
 struct igc_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
       struct ethtool_channels *VAR_3)
{
 struct igc_adapter *VAR_4 = FUNC_3(VAR_2);
 unsigned int VAR_5 = VAR_3->combined_count;
 unsigned int VAR_6 = 0;


 if (!VAR_5 || VAR_3->rx_count || VAR_3->tx_count)
  return -VAR_0;


 if (VAR_3->other_count != VAR_1)
  return -VAR_0;


 VAR_6 = FUNC_0(VAR_4);
 if (VAR_5 > VAR_6)
  return -VAR_0;

 if (VAR_5 != VAR_4->rss_queues) {
  VAR_4->rss_queues = VAR_5;
  FUNC_2(VAR_4, VAR_6);




  return FUNC_1(VAR_4);
 }

 return 0;
}
