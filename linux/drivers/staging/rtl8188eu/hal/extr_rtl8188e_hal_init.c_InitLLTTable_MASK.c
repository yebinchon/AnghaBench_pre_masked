
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct adapter*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct adapter*,int) ;
 scalar_t__ FUNC_2 (struct adapter*) ;

s32 FUNC_3(struct adapter *VAR_3, u8 VAR_4)
{
 s32 VAR_5 = VAR_1;
 u32 VAR_6;
 u32 VAR_7 = VAR_0;

 if (FUNC_2(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 } else {
  for (VAR_6 = 0; VAR_6 < (VAR_4 - 1); VAR_6++) {
   VAR_5 = FUNC_0(VAR_3, VAR_6, VAR_6 + 1);
   if (VAR_5 != VAR_2)
    return VAR_5;
  }


  VAR_5 = FUNC_0(VAR_3, (VAR_4 - 1), 0xFF);
  if (VAR_5 != VAR_2)
   return VAR_5;




  for (VAR_6 = VAR_4; VAR_6 < VAR_7; VAR_6++) {
   VAR_5 = FUNC_0(VAR_3, VAR_6, (VAR_6 + 1));
   if (VAR_5 != VAR_2)
    return VAR_5;
  }


  VAR_5 = FUNC_0(VAR_3, VAR_7, VAR_4);
  if (VAR_5 != VAR_2)
   return VAR_5;
 }

 return VAR_5;
}
