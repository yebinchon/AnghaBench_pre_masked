
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt_fw_health {int* regs; int* mapped_regs; int fw_reset_inprog_reg_mask; } ;
struct bnxt {int bar0; int bar1; int pdev; struct bnxt_fw_health* fw_health; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;




 int VAR_0 ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int) ;

u32 FUNC_4(struct bnxt *VAR_1, int VAR_2)
{
 struct bnxt_fw_health *VAR_3 = VAR_1->fw_health;
 u32 VAR_4 = VAR_3->regs[VAR_2];
 u32 VAR_5, VAR_6, VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = FUNC_0(VAR_4);
 switch (VAR_5) {
 case 129:
  FUNC_2(VAR_1->pdev, VAR_6, &VAR_7);
  break;
 case 128:
  VAR_6 = VAR_3->mapped_regs[VAR_2];

 case 131:
  VAR_7 = FUNC_3(VAR_1->bar0 + VAR_6);
  break;
 case 130:
  VAR_7 = FUNC_3(VAR_1->bar1 + VAR_6);
  break;
 }
 if (VAR_2 == VAR_0)
  VAR_7 &= VAR_3->fw_reset_inprog_reg_mask;
 return VAR_7;
}
