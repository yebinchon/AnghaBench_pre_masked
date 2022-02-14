
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {int Adapter; } ;
struct hal_com_data {TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static u8 FUNC_6(
 struct adapter *VAR_28, bool VAR_29, u8 VAR_30
)
{
 u32 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35 ;
 u8 VAR_36 = 0x00;

 struct hal_com_data *VAR_37 = FUNC_0(VAR_28);
 PDM_ODM_T VAR_38 = &VAR_37->odmpriv;


 VAR_35 = FUNC_2(VAR_38->Adapter, 0x948, VAR_9);

 FUNC_1(VAR_38, VAR_2, VAR_3, ("Path A IQK!\n"));


 FUNC_3(VAR_38->Adapter, VAR_12, VAR_10, 0x000000);


 FUNC_4(VAR_38->Adapter, VAR_4, VAR_8, 0x80000, 0x1);
 FUNC_4(VAR_38->Adapter, VAR_4, VAR_5, VAR_11, 0x18000);
 FUNC_4(VAR_38->Adapter, VAR_4, VAR_6, VAR_11, 0x0003f);
 FUNC_4(VAR_38->Adapter, VAR_4, VAR_7, VAR_11, 0xc7f87);






 FUNC_3(VAR_38->Adapter, VAR_21, VAR_9, 0x01007c00);
 FUNC_3(VAR_38->Adapter, VAR_15, VAR_9, 0x01004800);


 FUNC_3(VAR_38->Adapter, VAR_24, VAR_9, 0x18008c1c);
 FUNC_3(VAR_38->Adapter, VAR_18, VAR_9, 0x38008c1c);
 FUNC_3(VAR_38->Adapter, VAR_25, VAR_9, 0x38008c1c);
 FUNC_3(VAR_38->Adapter, VAR_19, VAR_9, 0x38008c1c);

 FUNC_3(VAR_38->Adapter, VAR_22, VAR_9, 0x821303ea);
 FUNC_3(VAR_38->Adapter, VAR_16, VAR_9, 0x28110000);
 FUNC_3(VAR_38->Adapter, VAR_23, VAR_9, 0x82110000);
 FUNC_3(VAR_38->Adapter, VAR_17, VAR_9, 0x28110000);



 FUNC_3(VAR_38->Adapter, VAR_14, VAR_9, 0x00462911);


 FUNC_3(VAR_38->Adapter, VAR_12, VAR_10, 0x808000);


 if (VAR_29 || (VAR_30 == 0))

  FUNC_3(VAR_38->Adapter, 0x948, VAR_9, 0x00000000);
 else

  FUNC_3(VAR_38->Adapter, 0x948, VAR_9, 0x00000280);


 FUNC_3(VAR_38->Adapter, 0x764, VAR_9, 0x00000800);



 FUNC_3(VAR_38->Adapter, VAR_13, VAR_9, 0xf9000000);
 FUNC_3(VAR_38->Adapter, VAR_13, VAR_9, 0xf8000000);




 FUNC_5(VAR_1);


 FUNC_3(VAR_38->Adapter, 0x948, VAR_9, VAR_35);

 FUNC_3(VAR_38->Adapter, 0x764, VAR_9, 0x00001800);


 FUNC_3(VAR_38->Adapter, VAR_12, VAR_10, 0x000000);



 VAR_31 = FUNC_2(VAR_38->Adapter, VAR_20, VAR_9);
 VAR_32 = FUNC_2(VAR_38->Adapter, VAR_27, VAR_9);
 VAR_33 = FUNC_2(VAR_38->Adapter, VAR_26, VAR_9);
 FUNC_1(VAR_38, VAR_2, VAR_3, ("0xeac = 0x%x\n", VAR_31));
 FUNC_1(VAR_38, VAR_2, VAR_3, ("0xe94 = 0x%x, 0xe9c = 0x%x\n", VAR_32, VAR_33));

 FUNC_1(VAR_38, VAR_2, VAR_3, ("0xe90(before IQK) = 0x%x, 0xe98(afer IQK) = 0x%x\n",
 FUNC_2(VAR_38->Adapter, 0xe90, VAR_9), FUNC_2(VAR_38->Adapter, 0xe98, VAR_9)));



 VAR_34 = (VAR_33 & 0x03FF0000)>>16;
 if ((VAR_34 & 0x200) > 0)
  VAR_34 = 0x400 - VAR_34;

 if (
  !(VAR_31 & VAR_0) &&
  (((VAR_32 & 0x03FF0000)>>16) != 0x142) &&
  (((VAR_33 & 0x03FF0000)>>16) != 0x42) &&
  (((VAR_32 & 0x03FF0000)>>16) < 0x110) &&
  (((VAR_32 & 0x03FF0000)>>16) > 0xf0) &&
  (VAR_34 < 0xf)
 )
  VAR_36 |= 0x01;
 else
  return VAR_36;

 return VAR_36;
}
