
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int chip_port; int ocelot; int phy; } ;
struct net_device {int * phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ocelot_port*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct ocelot_port *VAR_4 = FUNC_0(VAR_3);

 FUNC_3(VAR_4->phy);

 VAR_3->phydev = ((void*)0);

 FUNC_1(VAR_4, 0, VAR_0);
 FUNC_2(VAR_4->ocelot, 0, VAR_2,
    VAR_1, VAR_4->chip_port);
 return 0;
}
