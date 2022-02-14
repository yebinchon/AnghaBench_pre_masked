
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_gpio {int domain; int chip; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct pm8xxx_gpio* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct pm8xxx_gpio *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->chip);
 FUNC_1(VAR_1->domain);

 return 0;
}
