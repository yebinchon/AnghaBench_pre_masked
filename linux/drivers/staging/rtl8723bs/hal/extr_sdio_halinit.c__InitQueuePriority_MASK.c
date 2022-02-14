
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {int OutEpNumber; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_0)
{
 struct hal_com_data *VAR_1 = FUNC_0(VAR_0);

 switch (VAR_1->OutEpNumber) {
 case 1:
  FUNC_1(VAR_0);
  break;
 case 2:
  FUNC_3(VAR_0);
  break;
 case 3:
  FUNC_2(VAR_0);
  break;
 default:

  break;
 }


}
