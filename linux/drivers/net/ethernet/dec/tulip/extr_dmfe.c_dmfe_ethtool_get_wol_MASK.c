
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;
struct dmfe_board_info {int wol_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dmfe_board_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
     struct ethtool_wolinfo *VAR_3)
{
 struct dmfe_board_info *VAR_4 = FUNC_0(VAR_2);

 VAR_3->supported = VAR_1 | VAR_0;
 VAR_3->wolopts = VAR_4->wol_mode;
}
