
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int start; } ;
struct TYPE_6__ {TYPE_2__ res; } ;
struct nd_namespace_pmem {TYPE_3__ nsio; } ;
struct nd_namespace_blk {TYPE_1__** res; } ;
struct device {int dummy; } ;
typedef int resource_size_t ;
struct TYPE_4__ {int start; } ;


 scalar_t__ FUNC_0 (struct device const*) ;
 scalar_t__ FUNC_1 (struct device const*) ;
 int FUNC_2 (int *,int *,int) ;
 struct nd_namespace_blk* FUNC_3 (struct device const*) ;
 struct nd_namespace_pmem* FUNC_4 (struct device const*) ;

__attribute__((used)) static int FUNC_5(const void *VAR_0, const void *VAR_1)
{
 const struct device *VAR_2 = *(const struct device **) VAR_0;
 const struct device *VAR_3 = *(const struct device **) VAR_1;
 struct nd_namespace_blk *VAR_4, *VAR_5;
 struct nd_namespace_pmem *VAR_6, *VAR_7;

 if (FUNC_1(VAR_2))
  return 0;

 if (FUNC_0(VAR_2)) {
  VAR_4 = FUNC_3(VAR_2);
  VAR_5 = FUNC_3(VAR_3);

  return FUNC_2(&VAR_4->res[0]->start, &VAR_5->res[0]->start,
    sizeof(resource_size_t));
 }

 VAR_6 = FUNC_4(VAR_2);
 VAR_7 = FUNC_4(VAR_3);

 return FUNC_2(&VAR_6->nsio.res.start, &VAR_7->nsio.res.start,
   sizeof(resource_size_t));
}
