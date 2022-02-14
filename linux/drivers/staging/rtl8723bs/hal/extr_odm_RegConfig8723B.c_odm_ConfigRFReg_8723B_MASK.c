
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;
typedef int ODM_RF_RADIO_PATH_E ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

void FUNC_5(
 PDM_ODM_T VAR_4,
 u32 VAR_5,
 u32 VAR_6,
 ODM_RF_RADIO_PATH_E VAR_7,
 u32 VAR_8
)
{
 if (VAR_5 == 0xfe || VAR_5 == 0xffe)
  FUNC_3(50);
 else {
  FUNC_2(VAR_4->Adapter, VAR_7, VAR_8, VAR_3, VAR_6);

  FUNC_4(1);


  if (VAR_5 == 0xb6) {
   u32 VAR_9 = 0;
   u8 VAR_10 = 0;

   VAR_9 = FUNC_1(
    VAR_4->Adapter, VAR_7, VAR_5, VAR_2
   );

   FUNC_4(1);

   while ((VAR_9>>8) != (VAR_6>>8)) {
    VAR_10++;
    FUNC_2(VAR_4->Adapter, VAR_7, VAR_8, VAR_3, VAR_6);
    FUNC_4(1);
    VAR_9 = FUNC_1(VAR_4->Adapter, VAR_7, VAR_5, VAR_2);
    FUNC_0(
     VAR_4,
     VAR_0,
     VAR_1,
     (
      "===> ODM_ConfigRFWithHeaderFile: [B6] getvalue 0x%x, Data 0x%x, count %d\n",
      VAR_9,
      VAR_6,
      VAR_10
     )
    );
    if (VAR_10 > 5)
     break;
   }
  }

  if (VAR_5 == 0xb2) {
   u32 VAR_11 = 0;
   u8 VAR_12 = 0;

   VAR_11 = FUNC_1(
    VAR_4->Adapter, VAR_7, VAR_5, VAR_2
   );

   FUNC_4(1);

   while (VAR_11 != VAR_6) {
    VAR_12++;
    FUNC_2(
     VAR_4->Adapter,
     VAR_7,
     VAR_8,
     VAR_3,
     VAR_6
    );
    FUNC_4(1);

    FUNC_2(
     VAR_4->Adapter,
     VAR_7,
     0x18,
     VAR_3,
     0x0fc07
    );
    FUNC_4(1);
    VAR_11 = FUNC_1(
     VAR_4->Adapter, VAR_7, VAR_5, VAR_2
    );
    FUNC_0(
     VAR_4,
     VAR_0,
     VAR_1,
     (
      "===> ODM_ConfigRFWithHeaderFile: [B2] getvalue 0x%x, Data 0x%x, count %d\n",
      VAR_11,
      VAR_6,
      VAR_12
     )
    );

    if (VAR_12 > 5)
     break;
   }
  }
 }
}
