
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef enum HAL_DEF_VARIABLE { ____Placeholder_HAL_DEF_VARIABLE } HAL_DEF_VARIABLE ;


 int FUNC_0 (struct adapter*,int,void*) ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u8 FUNC_1(
 struct adapter *VAR_2, enum HAL_DEF_VARIABLE VAR_3, void *VAR_4
)
{
 u8 VAR_5 = VAR_1;

 switch (VAR_3) {
 case 129:
  break;
 case 130:
  break;
 case 128:


  *(u32 *)VAR_4 = VAR_0;
  break;
 default:
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  break;
 }

 return VAR_5;
}
