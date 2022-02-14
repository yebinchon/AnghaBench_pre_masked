
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct dmfe_board_info {int wol_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dmfe_board_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_6,
    struct ethtool_wolinfo *VAR_7)
{
 struct dmfe_board_info *VAR_8 = FUNC_0(VAR_6);

 if (VAR_7->wolopts & (VAR_5 | VAR_4 | VAR_2 |
       VAR_1 | VAR_3))
     return -VAR_0;

 VAR_8->wol_mode = VAR_7->wolopts;
 return 0;
}
