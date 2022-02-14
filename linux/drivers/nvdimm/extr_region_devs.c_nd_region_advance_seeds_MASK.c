
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nd_region {struct device* ns_seed; struct device* dax_seed; struct device* pfn_seed; struct device* btt_seed; } ;
struct nd_pfn {TYPE_2__* ndns; } ;
struct TYPE_8__ {TYPE_3__* ndns; } ;
struct nd_dax {TYPE_4__ nd_pfn; } ;
struct nd_btt {TYPE_1__* ndns; } ;
struct device {int dummy; } ;
struct TYPE_7__ {struct device dev; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_5__ {struct device dev; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct nd_region*) ;
 int FUNC_4 (struct nd_region*) ;
 int FUNC_5 (struct nd_region*) ;
 int FUNC_6 (struct nd_region*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 struct nd_btt* FUNC_9 (struct device*) ;
 struct nd_dax* FUNC_10 (struct device*) ;
 struct nd_pfn* FUNC_11 (struct device*) ;

void FUNC_12(struct nd_region *VAR_0, struct device *VAR_1)
{
 FUNC_7(VAR_1);
 if (VAR_0->ns_seed == VAR_1) {
  FUNC_5(VAR_0);
 } else if (FUNC_0(VAR_1)) {
  struct nd_btt *VAR_2 = FUNC_9(VAR_1);

  if (VAR_0->btt_seed == VAR_1)
   FUNC_3(VAR_0);
  if (VAR_0->ns_seed == &VAR_2->ndns->dev)
   FUNC_5(VAR_0);
 } else if (FUNC_2(VAR_1)) {
  struct nd_pfn *VAR_3 = FUNC_11(VAR_1);

  if (VAR_0->pfn_seed == VAR_1)
   FUNC_6(VAR_0);
  if (VAR_0->ns_seed == &VAR_3->ndns->dev)
   FUNC_5(VAR_0);
 } else if (FUNC_1(VAR_1)) {
  struct nd_dax *VAR_4 = FUNC_10(VAR_1);

  if (VAR_0->dax_seed == VAR_1)
   FUNC_4(VAR_0);
  if (VAR_0->ns_seed == &VAR_4->nd_pfn.ndns->dev)
   FUNC_5(VAR_0);
 }
 FUNC_8(VAR_1);
}
