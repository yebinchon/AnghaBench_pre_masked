
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int CurrentChannelBW; int nCur40MhzPrimeSC; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_4 ;
 int FUNC_1 (struct adapter*,int) ;
 int FUNC_2 (struct adapter*,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_13)
{
 u8 VAR_14 = 0;
 struct hal_com_data *VAR_15 = FUNC_0(VAR_13);



 FUNC_4(VAR_13, VAR_15->CurrentChannelBW);


 VAR_14 = FUNC_3(VAR_13);
 FUNC_5(VAR_13, VAR_5, VAR_14);




 switch (VAR_15->CurrentChannelBW) {

 case 129:
  FUNC_2(VAR_13, VAR_9, VAR_7, 0x0);

  FUNC_2(VAR_13, VAR_10, VAR_7, 0x0);



  FUNC_2(VAR_13, VAR_11, (VAR_3|VAR_2), 0x0);
  break;


 case 128:
  FUNC_2(VAR_13, VAR_9, VAR_7, 0x1);

  FUNC_2(VAR_13, VAR_10, VAR_7, 0x1);


  FUNC_2(VAR_13, VAR_8, VAR_6, (VAR_15->nCur40MhzPrimeSC>>1));

  FUNC_2(VAR_13, VAR_12, 0xC00, VAR_15->nCur40MhzPrimeSC);



  FUNC_2(VAR_13, 0x818, (VAR_0|VAR_1), (VAR_15->nCur40MhzPrimeSC == VAR_4) ? 2 : 1);

  break;

 default:


  break;
 }


 FUNC_1(VAR_13, VAR_15->CurrentChannelBW);
}
