
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
typedef int encodedMAC ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct i2c_adapter*,int *) ;

int FUNC_5(struct i2c_adapter *VAR_0, u8 *VAR_1)
{
 int VAR_2;
 u8 VAR_3[20];
 u8 VAR_4[6];

 VAR_2 = FUNC_4(VAR_0, VAR_3);

 if (VAR_2 != 0) {
  FUNC_0("Couldn't read from EEPROM: not there?\n");
  FUNC_1(VAR_1);
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_4, VAR_3);
 if( VAR_2 != 0 ) {
  FUNC_0("adapter failed MAC signature check\n");
  FUNC_0("encoded MAC from EEPROM was %*phC",
   (int)sizeof(VAR_3), &VAR_3);
  FUNC_1(VAR_1);
  return VAR_2;
 }

 FUNC_3(VAR_1, VAR_4, 6);
 FUNC_0("adapter has MAC addr = %pM\n", VAR_4);
 return 0;
}
