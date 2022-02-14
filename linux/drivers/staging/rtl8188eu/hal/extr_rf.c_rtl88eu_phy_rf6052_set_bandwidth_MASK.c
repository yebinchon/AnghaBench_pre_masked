
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_data_8188e {int* RfRegChnlVal; } ;
struct adapter {struct hal_data_8188e* HalData; } ;
typedef enum ht_channel_width { ____Placeholder_ht_channel_width } ht_channel_width ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct adapter*,int ,int ,int ,int) ;

void FUNC_2(struct adapter *VAR_3,
          enum ht_channel_width VAR_4)
{
 struct hal_data_8188e *VAR_5 = VAR_3->HalData;

 switch (VAR_4) {
 case 129:
  VAR_5->RfRegChnlVal[0] = ((VAR_5->RfRegChnlVal[0] &
           0xfffff3ff) | FUNC_0(10) | FUNC_0(11));
  FUNC_1(VAR_3, VAR_1, VAR_0, VAR_2,
          VAR_5->RfRegChnlVal[0]);
  break;
 case 128:
  VAR_5->RfRegChnlVal[0] = ((VAR_5->RfRegChnlVal[0] &
           0xfffff3ff) | FUNC_0(10));
  FUNC_1(VAR_3, VAR_1, VAR_0, VAR_2,
          VAR_5->RfRegChnlVal[0]);
  break;
 default:
  break;
 }
}
