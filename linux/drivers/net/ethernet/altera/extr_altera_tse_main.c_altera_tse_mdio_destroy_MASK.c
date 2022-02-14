
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct altera_tse_private {TYPE_1__* mdio; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 struct altera_tse_private* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct altera_tse_private*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct altera_tse_private *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->mdio == ((void*)0))
  return;

 if (FUNC_4(VAR_1))
  FUNC_2(VAR_0, "MDIO bus %s: removed\n",
       VAR_1->mdio->id);

 FUNC_1(VAR_1->mdio);
 FUNC_0(VAR_1->mdio);
 VAR_1->mdio = ((void*)0);
}
