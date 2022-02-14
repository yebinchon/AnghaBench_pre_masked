
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_2 (struct device*,char const*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, int VAR_2, int VAR_3,
 const char *VAR_4, struct gpio_desc **VAR_5)
{
 struct gpio_desc *VAR_6;

 *VAR_5 = ((void*)0);

 VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_2, VAR_0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 *VAR_5 = VAR_6;
 return 0;
}
