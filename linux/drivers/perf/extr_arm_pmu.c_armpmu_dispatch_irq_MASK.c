
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct arm_pmu {int (* handle_irq ) (struct arm_pmu*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct arm_pmu*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct arm_pmu *VAR_3;
 int VAR_4;
 u64 VAR_5, VAR_6;







 VAR_3 = *(void **)VAR_2;
 if (FUNC_0(!VAR_3))
  return VAR_0;

 VAR_5 = FUNC_2();
 VAR_4 = VAR_3->handle_irq(VAR_3);
 VAR_6 = FUNC_2();

 FUNC_1(VAR_6 - VAR_5);
 return VAR_4;
}
