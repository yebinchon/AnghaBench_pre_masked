
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mtd_info {int dummy; } ;


 struct mtd_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct mtd_info *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(FUNC_2(VAR_2));
 FUNC_1(VAR_1, VAR_2);

 return 0;
}
