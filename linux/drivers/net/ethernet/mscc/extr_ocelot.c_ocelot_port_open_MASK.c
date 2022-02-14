
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int phy; int phy_mode; scalar_t__ serdes; int chip_port; struct ocelot* ocelot; } ;
struct ocelot {int dummy; } ;
struct net_device {int phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ocelot_port* FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct ocelot*,int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,int ,int *,int ) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct ocelot_port *VAR_6 = FUNC_2(VAR_5);
 struct ocelot *VAR_7 = VAR_6->ocelot;
 int VAR_8;




 FUNC_3(VAR_7, VAR_1 |
    VAR_2 |
    FUNC_0(VAR_6->chip_port),
    VAR_0, VAR_6->chip_port);

 if (VAR_6->serdes) {
  VAR_8 = FUNC_6(VAR_6->serdes, VAR_3,
           VAR_6->phy_mode);
  if (VAR_8) {
   FUNC_1(VAR_5, "Could not set mode of SerDes\n");
   return VAR_8;
  }
 }

 VAR_8 = FUNC_5(VAR_5, VAR_6->phy, &VAR_4,
     VAR_6->phy_mode);
 if (VAR_8) {
  FUNC_1(VAR_5, "Could not attach to PHY\n");
  return VAR_8;
 }

 VAR_5->phydev = VAR_6->phy;

 FUNC_4(VAR_6->phy);
 FUNC_7(VAR_6->phy);
 return 0;
}
