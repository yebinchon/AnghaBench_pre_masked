
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ep93xx_priv {int * res; int * base_addr; } ;


 int FUNC_0 (struct ep93xx_priv*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ep93xx_priv* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct net_device *VAR_1;
 struct ep93xx_priv *VAR_2;

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 == ((void*)0))
  return 0;

 VAR_2 = FUNC_4(VAR_1);


 FUNC_7(VAR_1);
 FUNC_0(VAR_2);

 if (VAR_2->base_addr != ((void*)0))
  FUNC_2(VAR_2->base_addr);

 if (VAR_2->res != ((void*)0)) {
  FUNC_6(VAR_2->res);
  FUNC_3(VAR_2->res);
 }

 FUNC_1(VAR_1);

 return 0;
}
