
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_part {int offset; } ;
struct mtd_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct mtd_info* FUNC_0 (struct device*) ;
 struct mtd_part* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_1);
 struct mtd_part *VAR_5 = FUNC_1(VAR_4);
 return FUNC_2(VAR_3, VAR_0, "%llu\n", VAR_5->offset);
}
