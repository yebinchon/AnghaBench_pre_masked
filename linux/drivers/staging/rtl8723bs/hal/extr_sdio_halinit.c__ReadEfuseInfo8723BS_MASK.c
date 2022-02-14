
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eeprom_priv {int bautoload_fail_flag; int * efuse_eeprom_data; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*) ;
 struct eeprom_priv* FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int *,int ) ;
 int FUNC_4 (struct adapter*,int *,int ) ;
 int FUNC_5 (struct adapter*,int *,int ) ;
 int FUNC_6 (struct adapter*,int *,int ) ;
 int FUNC_7 (struct adapter*,int *,int ) ;
 int FUNC_8 (struct adapter*,int *,int ) ;
 int FUNC_9 (struct adapter*,int *) ;
 int FUNC_10 (struct adapter*,int *,int ) ;
 int FUNC_11 (struct adapter*,int *,int ) ;
 int FUNC_12 (struct adapter*,int *,int ) ;
 int FUNC_13 (struct adapter*,int *,int ) ;
 int FUNC_14 (struct adapter*,int *,int ) ;
 int FUNC_15 (struct adapter*,int *,int ) ;
 int FUNC_16 (struct adapter*,int *) ;
 int FUNC_17 (struct adapter*,int *,int ) ;
 int FUNC_18 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_19(struct adapter *VAR_3)
{
 struct eeprom_priv *VAR_4 = FUNC_1(VAR_3);
 u8 *VAR_5 = ((void*)0);

 FUNC_18(VAR_2, VAR_1, ("====>_ReadEfuseInfo8723BS()\n"));





 if (sizeof(VAR_4->efuse_eeprom_data) < VAR_0)
  FUNC_0("[WARNING] size of efuse_eeprom_data is less than HWSET_MAX_SIZE_8723B!\n");

 VAR_5 = VAR_4->efuse_eeprom_data;

 FUNC_16(VAR_3, VAR_5);

 FUNC_9(VAR_3, VAR_5);
 FUNC_8(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);

 FUNC_10(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);

 FUNC_13(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);
 FUNC_5(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);




 FUNC_11(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);
 FUNC_4(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);
 FUNC_6(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);
 FUNC_15(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);
 FUNC_12(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);
 FUNC_3(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);
 FUNC_7(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);

 FUNC_14(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);





 FUNC_17(VAR_3, VAR_5, VAR_4->bautoload_fail_flag);

 FUNC_18(VAR_2, VAR_1, ("<==== _ReadEfuseInfo8723BS()\n"));
}
