
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct arizona_ldo1 {scalar_t__ ena_gpiod; } ;


 int FUNC_0 (scalar_t__) ;
 struct arizona_ldo1* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct arizona_ldo1 *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->ena_gpiod)
  FUNC_0(VAR_1->ena_gpiod);

 return 0;
}
