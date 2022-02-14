
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int status; } ;
struct pm8001_hba_info {int controller_fatal_error; TYPE_2__ encrypt_info; TYPE_1__* chip; } ;
struct TYPE_3__ {scalar_t__ encrypt; } ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pm8001_hba_info*) ;
 int FUNC_3 (struct pm8001_hba_info*) ;
 int FUNC_4 (struct pm8001_hba_info*) ;
 scalar_t__ FUNC_5 (struct pm8001_hba_info*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct pm8001_hba_info*) ;
 int FUNC_8 (struct pm8001_hba_info*) ;
 int FUNC_9 (struct pm8001_hba_info*) ;
 int FUNC_10 (struct pm8001_hba_info*) ;
 int FUNC_11 (struct pm8001_hba_info*) ;
 int FUNC_12 (struct pm8001_hba_info*) ;
 int FUNC_13 (struct pm8001_hba_info*) ;
 int FUNC_14 (struct pm8001_hba_info*) ;
 int FUNC_15 (struct pm8001_hba_info*,scalar_t__) ;
 int FUNC_16 (struct pm8001_hba_info*) ;
 int FUNC_17 (struct pm8001_hba_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct pm8001_hba_info *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;


 if (-1 == FUNC_2(VAR_3)) {
  FUNC_0(VAR_3,
   FUNC_6("Firmware is not ready!\n"));
  return -VAR_0;
 }


 VAR_3->controller_fatal_error = 0;


 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 FUNC_12(VAR_3);
 FUNC_10(VAR_3);
 FUNC_11(VAR_3);
 FUNC_13(VAR_3);
 FUNC_14(VAR_3);


 FUNC_16(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_15(VAR_3, VAR_5);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_17(VAR_3, VAR_5);


 if (0 == FUNC_5(VAR_3)) {
  FUNC_1(VAR_3,
   FUNC_6("MPI initialize successful!\n"));
 } else
  return -VAR_0;


 VAR_4 = FUNC_9(VAR_3);


 if (VAR_3->chip->encrypt) {
  FUNC_1(VAR_3,
   FUNC_6("Checking for encryption\n"));
  VAR_4 = FUNC_8(VAR_3);
  if (VAR_4 == -1) {
   FUNC_1(VAR_3,
    FUNC_6("Encryption error !!\n"));
   if (VAR_3->encrypt_info.status == 0x81) {
    FUNC_1(VAR_3, FUNC_6(
     "Encryption enabled with error."
     "Saving encryption key to flash\n"));
    FUNC_7(VAR_3);
   }
  }
 }
 return 0;
}
