
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {int rf_chip; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_2)
{
 struct hal_com_data *VAR_3 = FUNC_0(VAR_2);




 VAR_3->rf_chip = VAR_0;

}
