
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mii_bus {int priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (struct mii_bus*) ;
 struct mii_bus* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct mii_bus *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1->priv);
 FUNC_1(VAR_1);

 return 0;
}
