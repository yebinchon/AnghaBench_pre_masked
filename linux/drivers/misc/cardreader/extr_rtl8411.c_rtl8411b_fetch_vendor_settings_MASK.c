
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_pcr {void* sd30_drive_sel_3v3; void* sd30_drive_sel_1v8; int aspm_en; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct rtsx_pcr*,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtsx_pcr*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct rtsx_pcr *VAR_1)
{
 u32 VAR_2 = 0;

 FUNC_3(VAR_1, VAR_0, &VAR_2);
 FUNC_1(VAR_1, "Cfg 0x%x: 0x%x\n", VAR_0, VAR_2);

 if (!FUNC_6(VAR_2))
  return;

 VAR_1->aspm_en = FUNC_4(VAR_2);
 VAR_1->sd30_drive_sel_1v8 =
  FUNC_0(FUNC_5(VAR_2));
 VAR_1->sd30_drive_sel_3v3 =
  FUNC_0(FUNC_2(VAR_2));
}
