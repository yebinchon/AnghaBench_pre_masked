
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_spe_pmu {int features; int counter_sz; int min_period; } ;



 int VAR_0 ;

 int FUNC_0 (int,char*,int) ;
 int* VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct arm_spe_pmu *VAR_2, int VAR_3)
{
 if (VAR_3 < VAR_0)
  return !!(VAR_2->features & VAR_1[VAR_3]);

 switch (VAR_3) {
 case 129:
  return VAR_2->counter_sz;
 case 128:
  return VAR_2->min_period;
 default:
  FUNC_0(1, "unknown cap %d\n", VAR_3);
 }

 return 0;
}
