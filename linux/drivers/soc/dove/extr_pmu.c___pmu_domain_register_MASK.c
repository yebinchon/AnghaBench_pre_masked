
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int power_on; int power_off; } ;
struct pmu_domain {unsigned int pwr_mask; TYPE_2__ base; TYPE_1__* pmu; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ pmu_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device_node*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pmu_domain *VAR_3,
 struct device_node *VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_3->pmu->pmu_base + VAR_0);

 VAR_3->base.power_off = VAR_1;
 VAR_3->base.power_on = VAR_2;

 FUNC_1(&VAR_3->base, ((void*)0), !(VAR_5 & VAR_3->pwr_mask));

 if (VAR_4)
  FUNC_0(VAR_4, &VAR_3->base);
}
