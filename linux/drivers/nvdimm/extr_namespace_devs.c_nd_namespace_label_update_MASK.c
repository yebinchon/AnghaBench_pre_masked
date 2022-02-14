
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nd_region {int dummy; } ;
struct TYPE_3__ {int res; } ;
struct nd_namespace_pmem {scalar_t__ uuid; TYPE_1__ nsio; } ;
struct nd_namespace_blk {int lbasize; scalar_t__ uuid; } ;
struct device {scalar_t__ driver; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_4__ {scalar_t__ claim; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct nd_region*,struct nd_namespace_blk*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct nd_namespace_blk*) ;
 int FUNC_5 (struct nd_region*,struct nd_namespace_pmem*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 struct nd_namespace_blk* FUNC_7 (struct device*) ;
 struct nd_namespace_pmem* FUNC_8 (struct device*) ;
 TYPE_2__* FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct nd_region *VAR_1,
  struct device *VAR_2)
{
 FUNC_0(VAR_2, VAR_2->driver || FUNC_9(VAR_2)->claim,
   "namespace must be idle during label update\n");
 if (VAR_2->driver || FUNC_9(VAR_2)->claim)
  return 0;





 if (FUNC_2(VAR_2)) {
  struct nd_namespace_pmem *VAR_3 = FUNC_8(VAR_2);
  resource_size_t VAR_4 = FUNC_6(&VAR_3->nsio.res);

  if (VAR_4 == 0 && VAR_3->uuid)
                          ;
  else if (!VAR_3->uuid)
   return 0;

  return FUNC_5(VAR_1, VAR_3, VAR_4);
 } else if (FUNC_1(VAR_2)) {
  struct nd_namespace_blk *VAR_5 = FUNC_7(VAR_2);
  resource_size_t VAR_6 = FUNC_4(VAR_5);

  if (VAR_6 == 0 && VAR_5->uuid)
                          ;
  else if (!VAR_5->uuid || !VAR_5->lbasize)
   return 0;

  return FUNC_3(VAR_1, VAR_5, VAR_6);
 } else
  return -VAR_0;
}
