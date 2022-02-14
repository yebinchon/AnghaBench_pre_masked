
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct pm8001_hba_info {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct pm8001_hba_info*) ;
 int FUNC_3 (struct pm8001_hba_info*) ;
 int FUNC_4 (struct pm8001_hba_info*) ;
 scalar_t__ FUNC_5 (struct pm8001_hba_info*) ;
 int FUNC_6 (struct pm8001_hba_info*,int) ;
 int FUNC_7 (struct pm8001_hba_info*,int ) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (struct pm8001_hba_info*,int ) ;
 int FUNC_10 (struct pm8001_hba_info*,int,int,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct pm8001_hba_info*) ;
 int FUNC_13 (struct pm8001_hba_info*) ;
 int FUNC_14 (struct pm8001_hba_info*) ;
 int FUNC_15 (struct pm8001_hba_info*) ;
 int FUNC_16 (struct pm8001_hba_info*,scalar_t__) ;
 int FUNC_17 (struct pm8001_hba_info*) ;
 int FUNC_18 (struct pm8001_hba_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct pm8001_hba_info *VAR_5)
{
 u8 VAR_6 = 0;
 u16 VAR_7;
 FUNC_8(VAR_5->pdev, VAR_2, &VAR_7);


 if (VAR_7 == 0x8081 || VAR_7 == 0x0042) {
  if (-1 == FUNC_9(VAR_5, VAR_1)) {
   FUNC_0(VAR_5,
    FUNC_11("Shift Bar4 to 0x%x failed\n",
     VAR_1));
   return -1;
  }
 }

 if (-1 == FUNC_2(VAR_5)) {
  FUNC_0(VAR_5,
   FUNC_11("Firmware is not ready!\n"));
  return -VAR_0;
 }


 FUNC_4(VAR_5);
 FUNC_3(VAR_5);
 FUNC_14(VAR_5);
 FUNC_12(VAR_5);
 FUNC_13(VAR_5);
 FUNC_15(VAR_5);

 FUNC_17(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_16(VAR_5, VAR_6);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_18(VAR_5, VAR_6);

 if (VAR_7 != 0x8081 && VAR_7 != 0x0042) {
  FUNC_7(VAR_5, 0);

  FUNC_6(VAR_5, 119);
 }

 if (0 == FUNC_5(VAR_5)) {
  FUNC_1(VAR_5,
   FUNC_11("MPI initialize successful!\n"));
 } else
  return -VAR_0;





 FUNC_10(VAR_5, 1, 0x0033c0, 0x1);
 FUNC_10(VAR_5, 1, 0x0033c4, 0x0);
 return 0;
}
