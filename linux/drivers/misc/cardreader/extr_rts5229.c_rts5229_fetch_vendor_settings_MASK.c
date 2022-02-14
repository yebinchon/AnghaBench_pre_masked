
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_pcr {int card_drive_sel; void* sd30_drive_sel_3v3; void* sd30_drive_sel_1v8; int aspm_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct rtsx_pcr*,char*,int ,int ) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct rtsx_pcr *VAR_2)
{
 u32 VAR_3;

 FUNC_2(VAR_2, VAR_0, &VAR_3);
 FUNC_1(VAR_2, "Cfg 0x%x: 0x%x\n", VAR_0, VAR_3);

 if (!FUNC_7(VAR_3))
  return;

 VAR_2->aspm_en = FUNC_3(VAR_3);
 VAR_2->sd30_drive_sel_1v8 =
  FUNC_0(FUNC_5(VAR_3));
 VAR_2->card_drive_sel &= 0x3F;
 VAR_2->card_drive_sel |= FUNC_4(VAR_3);

 FUNC_2(VAR_2, VAR_1, &VAR_3);
 FUNC_1(VAR_2, "Cfg 0x%x: 0x%x\n", VAR_1, VAR_3);
 VAR_2->sd30_drive_sel_3v3 =
  FUNC_0(FUNC_6(VAR_3));
}
