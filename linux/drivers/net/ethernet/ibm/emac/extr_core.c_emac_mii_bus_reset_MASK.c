
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int priv; } ;
struct emac_instance {int dummy; } ;


 int FUNC_0 (struct emac_instance*) ;
 struct emac_instance* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0)
{
 struct emac_instance *VAR_1 = FUNC_1(VAR_0->priv);

 return FUNC_0(VAR_1);
}
