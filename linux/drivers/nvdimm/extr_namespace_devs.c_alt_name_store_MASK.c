
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (struct device*,char const*,size_t) ;
 int FUNC_1 (struct device*,char*,char*,scalar_t__) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct nd_region*,struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 struct nd_region* FUNC_7 (int ) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct nd_region *VAR_4 = FUNC_7(VAR_0->parent);
 ssize_t VAR_5;

 FUNC_2(VAR_0);
 FUNC_5(VAR_0);
 FUNC_8(VAR_0);
 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_5 >= 0)
  VAR_5 = FUNC_4(VAR_4, VAR_0);
 FUNC_1(VAR_0, "%s(%zd)\n", VAR_5 < 0 ? "fail " : "", VAR_5);
 FUNC_6(VAR_0);
 FUNC_3(VAR_0);

 return VAR_5 < 0 ? VAR_5 : VAR_3;
}
