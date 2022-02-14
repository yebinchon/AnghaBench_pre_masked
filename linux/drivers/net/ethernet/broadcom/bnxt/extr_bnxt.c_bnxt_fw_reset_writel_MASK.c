
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt_fw_health {int* fw_reset_seq_regs; int* fw_reset_seq_vals; int* fw_reset_seq_delay_msec; } ;
struct bnxt {int bar0; int bar1; int pdev; struct bnxt_fw_health* fw_health; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct bnxt *VAR_3, int VAR_4)
{
 struct bnxt_fw_health *VAR_5 = VAR_3->fw_health;
 u32 VAR_6 = VAR_5->fw_reset_seq_regs[VAR_4];
 u32 VAR_7 = VAR_5->fw_reset_seq_vals[VAR_4];
 u32 VAR_8, VAR_9, VAR_10;

 VAR_10 = VAR_5->fw_reset_seq_delay_msec[VAR_4];
 VAR_8 = FUNC_1(VAR_6);
 VAR_9 = FUNC_0(VAR_6);
 switch (VAR_8) {
 case 129:
  FUNC_4(VAR_3->pdev, VAR_9, VAR_7);
  break;
 case 128:
  FUNC_5(VAR_9 & VAR_1,
         VAR_3->bar0 + VAR_0 + 4);
  VAR_9 = (VAR_9 & VAR_2) + 0x2000;

 case 131:
  FUNC_5(VAR_7, VAR_3->bar0 + VAR_9);
  break;
 case 130:
  FUNC_5(VAR_7, VAR_3->bar1 + VAR_9);
  break;
 }
 if (VAR_10) {
  FUNC_3(VAR_3->pdev, 0, &VAR_7);
  FUNC_2(VAR_10);
 }
}
