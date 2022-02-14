
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int res; } ;
struct nd_namespace_pmem {TYPE_1__ nsio; } ;
struct nd_namespace_io {int res; } ;
struct device {int dummy; } ;
struct nd_namespace_common {struct device dev; } ;
typedef int resource_size_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;
 struct nd_namespace_io* FUNC_7 (struct device*) ;
 struct nd_namespace_pmem* FUNC_8 (struct device*) ;

resource_size_t FUNC_9(struct nd_namespace_common *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 if (FUNC_3(VAR_1)) {
  struct nd_namespace_pmem *VAR_2 = FUNC_8(VAR_1);

  return FUNC_5(&VAR_2->nsio.res);
 } else if (FUNC_1(VAR_1)) {
  return FUNC_4(FUNC_6(VAR_1));
 } else if (FUNC_2(VAR_1)) {
  struct nd_namespace_io *VAR_3 = FUNC_7(VAR_1);

  return FUNC_5(&VAR_3->res);
 } else
  FUNC_0(1, "unknown namespace type\n");
 return 0;
}
