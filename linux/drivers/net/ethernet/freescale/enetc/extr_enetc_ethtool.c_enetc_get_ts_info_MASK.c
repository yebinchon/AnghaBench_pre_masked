
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ts_info {int phc_index; int so_timestamping; int tx_types; int rx_filters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_10,
        struct ethtool_ts_info *VAR_11)
{
 int *VAR_12;

 VAR_12 = FUNC_0(VAR_9);
 if (VAR_12) {
  VAR_11->phc_index = *VAR_12;
  FUNC_1(VAR_9);
 } else {
  VAR_11->phc_index = -1;
 }
 VAR_11->so_timestamping = VAR_6 |
    VAR_7;

 return 0;
}
