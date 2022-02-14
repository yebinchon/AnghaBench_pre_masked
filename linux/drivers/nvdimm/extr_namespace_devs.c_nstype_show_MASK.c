
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (struct nd_region*) ;
 int FUNC_1 (char*,char*,int) ;
 struct nd_region* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nd_region *VAR_3 = FUNC_2(VAR_0->parent);

 return FUNC_1(VAR_2, "%d\n", FUNC_0(VAR_3));
}
