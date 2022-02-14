
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmu {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct arm_ccn {TYPE_1__ dt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct arm_ccn* FUNC_0 (struct pmu*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pmu *VAR_2)
{
 struct arm_ccn *VAR_3 = FUNC_0(VAR_2);

 u32 VAR_4 = FUNC_1(VAR_3->dt.base + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_2(VAR_4, VAR_3->dt.base + VAR_0);
}
