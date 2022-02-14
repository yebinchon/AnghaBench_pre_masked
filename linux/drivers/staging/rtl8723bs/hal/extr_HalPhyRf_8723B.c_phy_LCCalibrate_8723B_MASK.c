
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
struct TYPE_3__ {scalar_t__ SupportInterface; int PackageType; struct adapter* Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,int ,int,int ) ;
 int FUNC_1 (struct adapter*,int ,int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct adapter*,int) ;
 int FUNC_4 (struct adapter*,int,int) ;

__attribute__((used)) static void FUNC_5(PDM_ODM_T VAR_8, bool VAR_9)
{
 u8 VAR_10;
 u32 VAR_11 = 0, VAR_12 = 0, VAR_13;
 struct adapter *VAR_14 = VAR_8->Adapter;


 VAR_10 = FUNC_3(VAR_8->Adapter, 0xd03);

 if ((VAR_10&0x70) != 0)
  FUNC_4(VAR_8->Adapter, 0xd03, VAR_10&0x8F);
 else
  FUNC_4(VAR_8->Adapter, VAR_3, 0xFF);

 if ((VAR_10&0x70) != 0) {


  VAR_11 = FUNC_0(VAR_14, VAR_1, VAR_4, VAR_6);


  if (VAR_9)
   VAR_12 = FUNC_0(VAR_14, VAR_2, VAR_4, VAR_6);



  FUNC_1(VAR_8->Adapter, VAR_1, VAR_4, VAR_6, (VAR_11&0x8FFFF)|0x10000);


  if (VAR_9)
   FUNC_1(VAR_8->Adapter, VAR_2, VAR_4, VAR_6, (VAR_12&0x8FFFF)|0x10000);
 }


 VAR_13 = FUNC_0(VAR_14, VAR_1, VAR_5, VAR_6);


 FUNC_1(VAR_8->Adapter, VAR_1, 0xB0, VAR_7, 0xDFBE0);
 FUNC_1(VAR_8->Adapter, VAR_1, VAR_5, VAR_6, VAR_13|0x08000);

 FUNC_2(100);

 FUNC_1(VAR_8->Adapter, VAR_1, 0xB0, VAR_7, 0xDFFE0);


 if (VAR_8->SupportInterface == VAR_0 && VAR_8->PackageType >= 0x2) {
  FUNC_1(VAR_8->Adapter, VAR_1, VAR_5, VAR_6, VAR_13);
 }


 if ((VAR_10&0x70) != 0) {

  FUNC_4(VAR_8->Adapter, 0xd03, VAR_10);
  FUNC_1(VAR_8->Adapter, VAR_1, VAR_4, VAR_6, VAR_11);


  if (VAR_9)
   FUNC_1(VAR_8->Adapter, VAR_2, VAR_4, VAR_6, VAR_12);
 } else
  FUNC_4(VAR_8->Adapter, VAR_3, 0x00);
}
