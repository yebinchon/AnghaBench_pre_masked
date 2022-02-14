
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int numeraseregions; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct mtd_info* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_0, "%u\n", VAR_4->numeraseregions);
}
