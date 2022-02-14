
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_usb_instance {int pmu_offset; int reg_pmu; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct phy_usb_instance *VAR_1,
      unsigned int VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_1->reg_pmu)
  return;

 VAR_3 = VAR_2 ? 0 : VAR_0;

 FUNC_0(VAR_1->reg_pmu, VAR_1->pmu_offset,
      VAR_0, VAR_3);
}
