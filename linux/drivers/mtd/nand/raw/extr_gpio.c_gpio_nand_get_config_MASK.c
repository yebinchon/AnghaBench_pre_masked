
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_nand_platdata {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device const*) ;
 int FUNC_1 (struct device const*,struct gpio_nand_platdata*) ;
 int FUNC_2 (struct gpio_nand_platdata*,scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_3(const struct device *VAR_1,
           struct gpio_nand_platdata *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!VAR_3)
  return VAR_3;

 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_2, FUNC_0(VAR_1), sizeof(*VAR_2));
  return 0;
 }

 return -VAR_0;
}
