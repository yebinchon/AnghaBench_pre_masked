
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uli526x_board_info {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int FUNC_0 (struct uli526x_board_info*,struct ethtool_link_ksettings*) ;
 struct uli526x_board_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         struct ethtool_link_ksettings *VAR_1)
{
 struct uli526x_board_info *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1);

 return 0;
}
