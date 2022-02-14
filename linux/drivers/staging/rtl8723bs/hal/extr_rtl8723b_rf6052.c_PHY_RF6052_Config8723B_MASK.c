
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {scalar_t__ rf_type; int NumTotalRFPath; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct adapter*) ;

int FUNC_2(struct adapter *VAR_1)
{
 struct hal_com_data *VAR_2 = FUNC_0(VAR_1);





 if (VAR_2->rf_type == VAR_0)
  VAR_2->NumTotalRFPath = 1;
 else
  VAR_2->NumTotalRFPath = 2;




 return FUNC_1(VAR_1);

}
