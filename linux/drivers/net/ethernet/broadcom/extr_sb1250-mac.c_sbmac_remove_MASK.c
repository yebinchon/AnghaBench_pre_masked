
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {int sbm_base; int mii_bus; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sbmac_softc* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct sbmac_softc*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct sbmac_softc *VAR_2 = FUNC_4(VAR_1);

 FUNC_7(VAR_1);
 FUNC_6(VAR_2);
 FUNC_3(VAR_2->mii_bus);
 FUNC_2(VAR_2->mii_bus);
 FUNC_1(VAR_2->sbm_base);
 FUNC_0(VAR_1);

 return 0;
}
