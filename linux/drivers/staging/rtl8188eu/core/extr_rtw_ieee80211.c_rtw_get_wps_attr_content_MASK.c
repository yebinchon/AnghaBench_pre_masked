
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int * FUNC_1 (int *,scalar_t__,int ,int *,scalar_t__*) ;

u8 *FUNC_2(u8 *VAR_0, uint VAR_1, u16 VAR_2, u8 *VAR_3, uint *VAR_4)
{
 u8 *VAR_5;
 u32 VAR_6;

 if (VAR_4)
  *VAR_4 = 0;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0), &VAR_6);

 if (VAR_5 && VAR_6) {
  if (VAR_3)
   FUNC_0(VAR_3, VAR_5 + 4, VAR_6 - 4);

  if (VAR_4)
   *VAR_4 = VAR_6 - 4;

  return VAR_5 + 4;
 }

 return ((void*)0);
}
