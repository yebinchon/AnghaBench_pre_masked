
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct adapter {int dummy; } ;
struct TYPE_3__ {struct adapter* Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;


 size_t* VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct adapter*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_1(PDM_ODM_T VAR_3)
{
 struct adapter *VAR_4 = VAR_3->Adapter;
 u8 VAR_5 = 0;
 u32 VAR_6;
 u32 VAR_7;
 u32 *VAR_8;

 VAR_6 = FUNC_0(VAR_4, VAR_2, 0xFFC00000);

 VAR_8 = VAR_0;
 VAR_7 = VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5) {
  u32 VAR_9 = VAR_8[VAR_5];

  if (VAR_9 >= 0x100000)
   VAR_9 >>= 22;
  if (VAR_6 == VAR_9)
   break;
 }
 return VAR_5;
}
