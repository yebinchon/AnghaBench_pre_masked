
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_wdt {int clock; int wdt_device; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct s3c2410_wdt* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct s3c2410_wdt*) ;
 int FUNC_3 (struct s3c2410_wdt*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 int VAR_1;
 struct s3c2410_wdt *VAR_2 = FUNC_1(VAR_0);

 VAR_1 = FUNC_3(VAR_2, 1);
 if (VAR_1 < 0)
  return VAR_1;

 FUNC_4(&VAR_2->wdt_device);

 FUNC_2(VAR_2);

 FUNC_0(VAR_2->clock);

 return 0;
}
