
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {scalar_t__ PhyRegPgValueType; } ;
struct hal_com_data {scalar_t__***** TxPwrLimit_2_4G; TYPE_1__ odmpriv; } ;
struct TYPE_4__ {int RegPowerBase; } ;
struct adapter {TYPE_2__ registrypriv; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t FUNC_1 (struct adapter*,int ,size_t,int ,int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct adapter*) ;

void FUNC_3(struct adapter *VAR_19)
{
 struct hal_com_data *VAR_20 = FUNC_0(VAR_19);
 u8 VAR_21 = 0x2E;
 u8 VAR_22, VAR_23, VAR_24, VAR_25;
 s8 VAR_26 = 0, VAR_27 = 0;
 u8 VAR_28 = 0;



 FUNC_2(VAR_19);

 for (VAR_22 = 0; VAR_22 < VAR_10; ++VAR_22) {
  for (VAR_23 = 0; VAR_23 < VAR_7; ++VAR_23) {
   for (VAR_24 = 0; VAR_24 < VAR_2; ++VAR_24) {
    for (VAR_25 = 0; VAR_25 < VAR_9; ++VAR_25) {
     VAR_27 = VAR_20->TxPwrLimit_2_4G[VAR_22][VAR_23][VAR_25][VAR_24][VAR_12];

     for (VAR_28 = VAR_12; VAR_28 < VAR_11; ++VAR_28) {
      if (VAR_20->odmpriv.PhyRegPgValueType == VAR_14) {
       if (VAR_25 == 5)
        VAR_21 = FUNC_1(VAR_19, VAR_0, VAR_28, VAR_18, VAR_5);
       else if (VAR_25 == 4)
        VAR_21 = FUNC_1(VAR_19, VAR_0, VAR_28, VAR_17, VAR_4);
       else if (VAR_25 == 3)
        VAR_21 = FUNC_1(VAR_19, VAR_0, VAR_28, VAR_16, VAR_6);
       else if (VAR_25 == 2)
        VAR_21 = FUNC_1(VAR_19, VAR_0, VAR_28, VAR_15, VAR_3);
       else if (VAR_25 == 1)
        VAR_21 = FUNC_1(VAR_19, VAR_0, VAR_28, VAR_15, VAR_13);
       else if (VAR_25 == 0)
        VAR_21 = FUNC_1(VAR_19, VAR_0, VAR_28, VAR_15, VAR_1);
      } else
       VAR_21 = VAR_19->registrypriv.RegPowerBase * 2;

      if (VAR_27 != VAR_8) {
       VAR_26 = VAR_27 - VAR_21;
       VAR_20->TxPwrLimit_2_4G[VAR_22][VAR_23][VAR_25][VAR_24][VAR_28] = VAR_26;
      }
     }
    }
   }
  }
 }


}
