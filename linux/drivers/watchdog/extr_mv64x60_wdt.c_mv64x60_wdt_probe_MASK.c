
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct mv64x60_wdt_pdata {int timeout; int bus_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mv64x60_wdt_pdata* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (int) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct mv64x60_wdt_pdata *VAR_7 = FUNC_0(&VAR_6->dev);
 struct resource *VAR_8;
 int VAR_9 = 10;

 VAR_3 = 133;
 if (VAR_7) {
  VAR_9 = VAR_7->timeout;
  VAR_3 = VAR_7->bus_clk;
 }





 VAR_3++;
 VAR_3 *= 1000000;

 VAR_8 = FUNC_5(VAR_6, VAR_2, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_6->dev, VAR_8->start, FUNC_6(VAR_8));
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 FUNC_4(VAR_9);

 FUNC_3();

 return FUNC_2(&VAR_4);
}
