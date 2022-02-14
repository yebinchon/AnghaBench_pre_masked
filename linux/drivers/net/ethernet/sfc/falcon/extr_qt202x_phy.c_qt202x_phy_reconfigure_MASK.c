
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qt202x_phy_data {int phy_mode; } ;
struct TYPE_2__ {int prtad; } ;
struct ef4_nic {scalar_t__ phy_type; int phy_mode; scalar_t__ loopback_mode; TYPE_1__ mdio; struct qt202x_phy_data* phy_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int,int) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_5(struct ef4_nic *VAR_8)
{
 struct qt202x_phy_data *VAR_9 = VAR_8->phy_data;

 if (VAR_8->phy_type == VAR_5) {
  int VAR_10 = FUNC_3(VAR_8);
  if (VAR_10)
   return VAR_10;






  FUNC_2(
   &VAR_8->mdio, VAR_8->mdio.prtad, VAR_2,
   VAR_6, 1 << VAR_7,
   VAR_8->phy_mode & VAR_4 ||
   VAR_8->phy_mode & VAR_3 ||
   VAR_8->loopback_mode == VAR_0 ||
   VAR_8->loopback_mode == VAR_1);
 } else {

  if (!(VAR_8->phy_mode & VAR_4) &&
      (VAR_9->phy_mode & VAR_4))
   FUNC_4(VAR_8);

  FUNC_1(VAR_8);
 }

 FUNC_0(VAR_8);

 VAR_9->phy_mode = VAR_8->phy_mode;

 return 0;
}
