
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; struct ax88172a_private* driver_priv; } ;
struct ax88172a_private {scalar_t__ phydev; int phy_name; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_0)
{
 struct ax88172a_private *VAR_1 = VAR_0->driver_priv;

 FUNC_0(VAR_0->net, "Stopping interface\n");

 if (VAR_1->phydev) {
  FUNC_1(VAR_0->net, "Disconnecting from phy %s\n",
       VAR_1->phy_name);
  FUNC_3(VAR_1->phydev);
  FUNC_2(VAR_1->phydev);
 }

 return 0;
}
