
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct platform_device*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_1(VAR_1);
 struct resource *VAR_3;

 FUNC_5(VAR_2);
 VAR_3 = FUNC_2(VAR_1, VAR_0, 0);
 if (VAR_3)
  FUNC_3(VAR_3->start, FUNC_4(VAR_3));
 FUNC_0(VAR_2);
 return 0;
}
