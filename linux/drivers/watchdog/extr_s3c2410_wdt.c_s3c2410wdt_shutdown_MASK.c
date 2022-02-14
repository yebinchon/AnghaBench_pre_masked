
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_wdt {int wdt_device; } ;
struct platform_device {int dummy; } ;


 struct s3c2410_wdt* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct s3c2410_wdt*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct s3c2410_wdt *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, 1);

 FUNC_2(&VAR_1->wdt_device);
}
