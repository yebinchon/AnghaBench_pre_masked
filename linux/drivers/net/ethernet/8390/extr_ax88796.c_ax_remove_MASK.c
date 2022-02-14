
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ei_device {int mem; } ;
struct ax_device {int map2; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct ei_device* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct resource*) ;
 struct ax_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_3(VAR_1);
 struct ei_device *VAR_3 = FUNC_2(VAR_2);
 struct ax_device *VAR_4 = FUNC_8(VAR_2);
 struct resource *VAR_5;

 FUNC_9(VAR_2);

 FUNC_1(VAR_3->mem);
 VAR_5 = FUNC_4(VAR_1, VAR_0, 0);
 FUNC_6(VAR_5->start, FUNC_7(VAR_5));

 if (VAR_4->map2) {
  FUNC_1(VAR_4->map2);
  VAR_5 = FUNC_4(VAR_1, VAR_0, 1);
  FUNC_6(VAR_5->start, FUNC_7(VAR_5));
 }

 FUNC_5(VAR_1, ((void*)0));
 FUNC_0(VAR_2);

 return 0;
}
