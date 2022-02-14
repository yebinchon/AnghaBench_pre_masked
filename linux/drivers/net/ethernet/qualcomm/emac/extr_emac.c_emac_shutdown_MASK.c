
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct net_device {int flags; } ;
struct emac_adapter {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int *) ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct emac_adapter*) ;
 struct emac_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(&VAR_1->dev);
 struct emac_adapter *VAR_3 = FUNC_3(VAR_2);

 if (VAR_2->flags & VAR_0) {

  FUNC_2(VAR_3);


  FUNC_1(VAR_3);
 }
}
