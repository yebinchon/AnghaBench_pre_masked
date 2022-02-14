
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
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
 int FUNC_4 (int ,int ,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
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

__attribute__((used)) static u8 FUNC_6(struct adapter *VAR_24)
{
 u32 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29 ;
 u8 VAR_30 = 0x00;
 struct hal_com_data *VAR_31 = FUNC_0(VAR_24);
 PDM_ODM_T VAR_32 = &VAR_31->odmpriv;

 FUNC_1(VAR_32, VAR_2, VAR_3, ("Path B IQK!\n"));


 VAR_29 = FUNC_2(VAR_32->Adapter, 0x948, VAR_5);


 FUNC_3(VAR_32->Adapter, VAR_8, VAR_6, 0x000000);







 FUNC_4(VAR_32->Adapter, VAR_4, 0xed, 0x20, 0x1);
 FUNC_4(VAR_32->Adapter, VAR_4, 0x43, VAR_7, 0x30fc1);





 FUNC_3(VAR_32->Adapter, VAR_17, VAR_5, 0x01007c00);
 FUNC_3(VAR_32->Adapter, VAR_11, VAR_5, 0x01004800);


 FUNC_3(VAR_32->Adapter, VAR_20, VAR_5, 0x18008c1c);
 FUNC_3(VAR_32->Adapter, VAR_14, VAR_5, 0x38008c1c);
 FUNC_3(VAR_32->Adapter, VAR_21, VAR_5, 0x38008c1c);
 FUNC_3(VAR_32->Adapter, VAR_15, VAR_5, 0x38008c1c);


 FUNC_3(VAR_32->Adapter, VAR_18, VAR_5, 0x821303ea);
 FUNC_3(VAR_32->Adapter, VAR_12, VAR_5, 0x28110000);
 FUNC_3(VAR_32->Adapter, VAR_19, VAR_5, 0x82110000);
 FUNC_3(VAR_32->Adapter, VAR_13, VAR_5, 0x28110000);



 FUNC_3(VAR_32->Adapter, VAR_10, VAR_5, 0x00462911);


 FUNC_3(VAR_32->Adapter, VAR_8, VAR_6, 0x808000);


 FUNC_3(VAR_32->Adapter, 0x948, VAR_5, 0x00000280);



 FUNC_3(VAR_32->Adapter, 0x764, VAR_5, 0x00000800);



 FUNC_3(VAR_32->Adapter, VAR_9, VAR_5, 0xf9000000);
 FUNC_3(VAR_32->Adapter, VAR_9, VAR_5, 0xf8000000);




 FUNC_5(VAR_1);


 FUNC_3(VAR_32->Adapter, 0x948, VAR_5, VAR_29);

 FUNC_3(VAR_32->Adapter, 0x764, VAR_5, 0x00001800);


 FUNC_3(VAR_32->Adapter, VAR_8, VAR_6, 0x000000);





 VAR_25 = FUNC_2(VAR_32->Adapter, VAR_16, VAR_5);
 VAR_26 = FUNC_2(VAR_32->Adapter, VAR_23, VAR_5);
 VAR_27 = FUNC_2(VAR_32->Adapter, VAR_22, VAR_5);
 FUNC_1(VAR_32, VAR_2, VAR_3, ("0xeac = 0x%x\n", VAR_25));
 FUNC_1(VAR_32, VAR_2, VAR_3, ("0xe94 = 0x%x, 0xe9c = 0x%x\n", VAR_26, VAR_27));

 FUNC_1(VAR_32, VAR_2, VAR_3, ("0xe90(before IQK) = 0x%x, 0xe98(afer IQK) = 0x%x\n",
 FUNC_2(VAR_32->Adapter, 0xe90, VAR_5), FUNC_2(VAR_32->Adapter, 0xe98, VAR_5)));


 VAR_28 = (VAR_27 & 0x03FF0000)>>16;
 if ((VAR_28 & 0x200) > 0)
  VAR_28 = 0x400 - VAR_28;

 if (
  !(VAR_25 & VAR_0) &&
  (((VAR_26 & 0x03FF0000)>>16) != 0x142) &&
  (((VAR_27 & 0x03FF0000)>>16) != 0x42) &&
  (((VAR_26 & 0x03FF0000)>>16) < 0x110) &&
  (((VAR_26 & 0x03FF0000)>>16) > 0xf0) &&
  (VAR_28 < 0xf)
 )
  VAR_30 |= 0x01;

 return VAR_30;
}
