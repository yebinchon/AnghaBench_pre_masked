
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_pmu_dev {int max_counters; int cntr_assign_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct xgene_pmu_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->cntr_assign_mask,
    VAR_1->max_counters);
 if (VAR_2 == VAR_1->max_counters)
  return -VAR_0;
 FUNC_1(VAR_2, VAR_1->cntr_assign_mask);

 return VAR_2;
}
