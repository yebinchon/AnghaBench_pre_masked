
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_pmem {char* alt_name; } ;
struct nd_namespace_blk {char* alt_name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,char*) ;
 struct nd_namespace_blk* FUNC_3 (struct device*) ;
 struct nd_namespace_pmem* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 char *VAR_4;

 if (FUNC_1(VAR_1)) {
  struct nd_namespace_pmem *VAR_5 = FUNC_4(VAR_1);

  VAR_4 = VAR_5->alt_name;
 } else if (FUNC_0(VAR_1)) {
  struct nd_namespace_blk *VAR_6 = FUNC_3(VAR_1);

  VAR_4 = VAR_6->alt_name;
 } else
  return -VAR_0;

 return FUNC_2(VAR_3, "%s\n", VAR_4 ? VAR_4 : "");
}
