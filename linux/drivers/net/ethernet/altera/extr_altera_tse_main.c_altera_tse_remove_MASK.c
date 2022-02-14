
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct net_device {scalar_t__ phydev; } ;
struct altera_tse_private {TYPE_1__* device; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct altera_tse_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 struct net_device* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int *) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct altera_tse_private *VAR_2 = FUNC_2(VAR_1);

 if (VAR_1->phydev) {
  FUNC_5(VAR_1->phydev);

  if (FUNC_4(VAR_2->device->of_node))
   FUNC_3(VAR_2->device->of_node);
 }

 FUNC_7(VAR_0, ((void*)0));
 FUNC_0(VAR_1);
 FUNC_8(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}
