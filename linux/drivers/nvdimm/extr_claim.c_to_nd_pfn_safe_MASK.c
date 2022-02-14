
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_pfn {int dummy; } ;
struct nd_dax {struct nd_pfn nd_pfn; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 struct nd_dax* FUNC_3 (struct device*) ;
 struct nd_pfn* FUNC_4 (struct device*) ;

struct nd_pfn *FUNC_5(struct device *VAR_0)
{




 if (FUNC_2(VAR_0))
  return FUNC_4(VAR_0);

 if (FUNC_1(VAR_0)) {
  struct nd_dax *VAR_1 = FUNC_3(VAR_0);

  return &VAR_1->nd_pfn;
 }

 FUNC_0(1);
 return ((void*)0);
}
