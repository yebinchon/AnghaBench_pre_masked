
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc911x_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*,...) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct smsc911x_data*,int ) ;
 int FUNC_4 (struct smsc911x_data*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct smsc911x_data *VAR_7, u32 VAR_8)
{
 int VAR_9 = 100;
 u32 VAR_10;

 FUNC_0(VAR_7, VAR_6, "op 0x%08x", VAR_8);
 if (FUNC_3(VAR_7, VAR_0) & VAR_1) {
  FUNC_1(VAR_7, VAR_6, "Busy at start");
  return -VAR_4;
 }

 VAR_10 = VAR_8 | VAR_1;
 FUNC_4(VAR_7, VAR_0, VAR_10);

 do {
  FUNC_2(1);
  VAR_10 = FUNC_3(VAR_7, VAR_0);
 } while ((VAR_10 & VAR_1) && (--VAR_9));

 if (!VAR_9) {
  FUNC_0(VAR_7, VAR_6, "TIMED OUT");
  return -VAR_3;
 }

 if (VAR_10 & VAR_2) {
  FUNC_0(VAR_7, VAR_6, "Error occurred during eeprom operation");
  return -VAR_5;
 }

 return 0;
}
