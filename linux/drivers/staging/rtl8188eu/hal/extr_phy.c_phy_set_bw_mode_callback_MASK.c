
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_data_8188e {int CurrentChannelBW; int nCur40MhzPrimeSC; } ;
struct adapter {scalar_t__ bDriverStopped; struct hal_data_8188e* HalData; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct adapter*,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct adapter*,int) ;
 int FUNC_3 (struct adapter*,scalar_t__) ;
 int FUNC_4 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_10)
{
 struct hal_data_8188e *VAR_11 = VAR_10->HalData;
 u8 VAR_12;
 u8 VAR_13;

 if (VAR_10->bDriverStopped)
  return;



 VAR_12 = FUNC_3(VAR_10, VAR_2);
 VAR_13 = FUNC_3(VAR_10, VAR_3+2);

 switch (VAR_11->CurrentChannelBW) {
 case 129:
  VAR_12 |= VAR_0;
  FUNC_4(VAR_10, VAR_2, VAR_12);
  break;
 case 128:
  VAR_12 &= ~VAR_0;
  FUNC_4(VAR_10, VAR_2, VAR_12);
  VAR_13 = (VAR_13&0x90) |
          (VAR_11->nCur40MhzPrimeSC<<5);
  FUNC_4(VAR_10, VAR_3+2, VAR_13);
  break;
 default:
  break;
 }


 switch (VAR_11->CurrentChannelBW) {
 case 129:
  FUNC_1(VAR_10, VAR_7, VAR_5, 0x0);
  FUNC_1(VAR_10, VAR_8, VAR_5, 0x0);
  break;
 case 128:
  FUNC_1(VAR_10, VAR_7, VAR_5, 0x1);
  FUNC_1(VAR_10, VAR_8, VAR_5, 0x1);



  FUNC_1(VAR_10, VAR_6, VAR_4,
      (VAR_11->nCur40MhzPrimeSC>>1));
  FUNC_1(VAR_10, VAR_9, 0xC00,
          VAR_11->nCur40MhzPrimeSC);
  FUNC_1(VAR_10, 0x818, (FUNC_0(26) | FUNC_0(27)),
     (VAR_11->nCur40MhzPrimeSC == VAR_1) ? 2 : 1);
  break;
 default:
  break;
 }


 FUNC_2(VAR_10, VAR_11->CurrentChannelBW);
}
