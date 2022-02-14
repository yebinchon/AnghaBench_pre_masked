
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {int net; struct ax88172a_private* driver_priv; } ;
struct ax88172a_private {TYPE_1__* mdio; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_0)
{
 struct ax88172a_private *VAR_1 = VAR_0->driver_priv;

 FUNC_2(VAR_0->net, "deregistering mdio bus %s\n", VAR_1->mdio->id);
 FUNC_1(VAR_1->mdio);
 FUNC_0(VAR_1->mdio);
}
