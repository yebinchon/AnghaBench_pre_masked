
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_pcr {int card_drive_sel; int sd30_drive_sel_3v3; int sd30_drive_sel_1v8; int aspm_en; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_pcr*,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct rtsx_pcr*,int ,int *) ;

__attribute__((used)) static void FUNC_9(struct rtsx_pcr *VAR_3)
{
 u32 VAR_4;

 FUNC_8(VAR_3, VAR_1, &VAR_4);
 FUNC_0(VAR_3, "Cfg 0x%x: 0x%x\n", VAR_1, VAR_4);

 if (FUNC_6(VAR_4)) {
  if (FUNC_1(VAR_4))
   VAR_3->flags |= VAR_0;
  VAR_3->aspm_en = FUNC_2(VAR_4);
 }

 FUNC_8(VAR_3, VAR_2, &VAR_4);
 FUNC_0(VAR_3, "Cfg 0x%x: 0x%x\n", VAR_2, VAR_4);

 if (FUNC_7(VAR_4)) {
  VAR_3->sd30_drive_sel_1v8 =
   FUNC_4(VAR_4);
  VAR_3->sd30_drive_sel_3v3 =
   FUNC_5(VAR_4);
  VAR_3->card_drive_sel = FUNC_3(VAR_4);
 }
}
