
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {int rf_type; int rf_chip; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_3)
{
 struct hal_com_data *VAR_4 = FUNC_1(VAR_3);






 VAR_4->rf_chip = VAR_1;

 VAR_4->rf_type = VAR_0;
 FUNC_0("Set RF Chip ID to RF_6052 and RF type to 1T1R.\n");
}
