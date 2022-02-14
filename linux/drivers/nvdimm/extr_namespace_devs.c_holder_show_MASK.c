
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {scalar_t__ claim; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,char*) ;
 struct nd_namespace_common* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nd_namespace_common *VAR_3 = FUNC_4(VAR_0);
 ssize_t VAR_4;

 FUNC_1(VAR_0);
 VAR_4 = FUNC_3(VAR_2, "%s\n", VAR_3->claim ? FUNC_0(VAR_3->claim) : "");
 FUNC_2(VAR_0);

 return VAR_4;
}
