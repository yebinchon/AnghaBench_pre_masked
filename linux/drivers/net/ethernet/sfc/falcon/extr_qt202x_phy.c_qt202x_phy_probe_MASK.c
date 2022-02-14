
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qt202x_phy_data {int bug17190_in_bad_state; scalar_t__ bug17190_timer; int phy_mode; } ;
struct TYPE_2__ {int mode_support; int mmds; } ;
struct ef4_nic {int loopback_modes; TYPE_1__ mdio; int phy_mode; struct qt202x_phy_data* phy_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qt202x_phy_data* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct ef4_nic *VAR_7)
{
 struct qt202x_phy_data *VAR_8;

 VAR_8 = FUNC_0(sizeof(struct qt202x_phy_data), VAR_2);
 if (!VAR_8)
  return -VAR_0;
 VAR_7->phy_data = VAR_8;
 VAR_8->phy_mode = VAR_7->phy_mode;
 VAR_8->bug17190_in_bad_state = 0;
 VAR_8->bug17190_timer = 0;

 VAR_7->mdio.mmds = VAR_6;
 VAR_7->mdio.mode_support = VAR_4 | VAR_3;
 VAR_7->loopback_modes = VAR_5 | VAR_1;
 return 0;
}
