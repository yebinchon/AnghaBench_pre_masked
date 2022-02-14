
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_com_data {int* RfRegChnlVal; } ;
struct adapter {int dummy; } ;
typedef enum CHANNEL_WIDTH { ____Placeholder_CHANNEL_WIDTH } CHANNEL_WIDTH ;


 int VAR_0 ;
 int VAR_1 ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*,int ,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(
 struct adapter *VAR_6, enum CHANNEL_WIDTH VAR_7
)
{
 struct hal_com_data *VAR_8 = FUNC_0(VAR_6);

 switch (VAR_7) {
 case 129:
  VAR_8->RfRegChnlVal[0] = ((VAR_8->RfRegChnlVal[0] & 0xfffff3ff) | VAR_0 | VAR_1);
  FUNC_1(VAR_6, VAR_2, VAR_4, VAR_5, VAR_8->RfRegChnlVal[0]);
  FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5, VAR_8->RfRegChnlVal[0]);
  break;

 case 128:
  VAR_8->RfRegChnlVal[0] = ((VAR_8->RfRegChnlVal[0] & 0xfffff3ff) | VAR_0);
  FUNC_1(VAR_6, VAR_2, VAR_4, VAR_5, VAR_8->RfRegChnlVal[0]);
  FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5, VAR_8->RfRegChnlVal[0]);
  break;

 default:

  break;
 }

}
