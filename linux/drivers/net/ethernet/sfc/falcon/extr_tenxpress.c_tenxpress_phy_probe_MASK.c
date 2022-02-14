
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tenxpress_phy_data {int phy_mode; } ;
struct TYPE_2__ {int mode_support; int mmds; } ;
struct ef4_nic {int loopback_modes; int link_advertising; TYPE_1__ mdio; int phy_mode; struct tenxpress_phy_data* phy_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct tenxpress_phy_data* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct ef4_nic *VAR_9)
{
 struct tenxpress_phy_data *VAR_10;


 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_3;
 VAR_9->phy_data = VAR_10;
 VAR_10->phy_mode = VAR_9->phy_mode;

 VAR_9->mdio.mmds = VAR_8;
 VAR_9->mdio.mode_support = VAR_6;

 VAR_9->loopback_modes = VAR_7 | VAR_4;

 VAR_9->link_advertising = (VAR_2 | VAR_1 |
     VAR_0);

 return 0;
}
