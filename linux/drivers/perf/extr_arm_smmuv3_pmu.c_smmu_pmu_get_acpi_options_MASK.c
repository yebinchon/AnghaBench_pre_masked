
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smmu_pmu {int options; int dev; } ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct smmu_pmu *VAR_1)
{
 u32 VAR_2;

 VAR_2 = *(u32 *)FUNC_0(VAR_1->dev);

 switch (VAR_2) {
 case 128:

  VAR_1->options |= VAR_0;
  break;
 }

 FUNC_1(VAR_1->dev, "option mask 0x%x\n", VAR_1->options);
}
