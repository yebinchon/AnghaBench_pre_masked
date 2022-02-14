
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_2__ {struct resource res; } ;
struct nd_namespace_pmem {TYPE_1__ nsio; } ;
struct nd_namespace_io {struct resource res; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct resource*) ;
 int FUNC_3 (char*,char*,unsigned long long) ;
 struct nd_namespace_io* FUNC_4 (struct device*) ;
 struct nd_namespace_pmem* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct resource *VAR_4;

 if (FUNC_1(VAR_1)) {
  struct nd_namespace_pmem *VAR_5 = FUNC_5(VAR_1);

  VAR_4 = &VAR_5->nsio.res;
 } else if (FUNC_0(VAR_1)) {
  struct nd_namespace_io *VAR_6 = FUNC_4(VAR_1);

  VAR_4 = &VAR_6->res;
 } else
  return -VAR_0;


 if (FUNC_2(VAR_4) == 0)
  return -VAR_0;
 return FUNC_3(VAR_3, "%#llx\n", (unsigned long long) VAR_4->start);
}
