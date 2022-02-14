
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct atmel_pmecc_caps {int dummy; } ;
struct atmel_pmecc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct atmel_pmecc*) ;
 int FUNC_1 (struct atmel_pmecc*) ;
 struct atmel_pmecc* FUNC_2 (struct platform_device*,struct atmel_pmecc_caps const*,int ,int) ;
 int FUNC_3 (struct device*,char*) ;
 struct atmel_pmecc_caps* FUNC_4 (struct device*) ;
 int FUNC_5 (struct platform_device*,struct atmel_pmecc*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 const struct atmel_pmecc_caps *VAR_3;
 struct atmel_pmecc *VAR_4;

 VAR_3 = FUNC_4(&VAR_1->dev);
 if (!VAR_3) {
  FUNC_3(VAR_2, "Invalid caps\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_3, 0, 1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_5(VAR_1, VAR_4);

 return 0;
}
