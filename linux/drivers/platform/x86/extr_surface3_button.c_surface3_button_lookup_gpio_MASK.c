
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_3 (struct device*,int *,int,int ) ;
 int FUNC_4 (struct gpio_desc*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, int VAR_2)
{
 struct gpio_desc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1, ((void*)0), VAR_2, VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3);

 FUNC_4(VAR_3);

 return VAR_4;
}
