
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hal_com_data {int OutEpQueueSel; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (struct adapter*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_3)
{
 struct hal_com_data *VAR_4 = FUNC_0(VAR_3);

 u16 VAR_5 = 0;
 switch (VAR_4->OutEpQueueSel) {
 case 130:
  VAR_5 = VAR_0;
  break;
 case 129:
  VAR_5 = VAR_1;
  break;
 case 128:
  VAR_5 = VAR_2;
  break;
 default:

  break;
 }

 FUNC_1(
  VAR_3, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5
 );

}
