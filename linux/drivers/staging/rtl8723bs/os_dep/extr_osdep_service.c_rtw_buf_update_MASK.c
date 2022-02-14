
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;

void FUNC_3(u8 **VAR_0, u32 *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;
 u8 *VAR_6 = ((void*)0);
 u8 *VAR_7 = ((void*)0);

 if (!VAR_0 || !VAR_1)
  return;

 if (!VAR_2 || !VAR_3)
  goto keep_ori;


 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7) {
  VAR_5 = VAR_3;
  FUNC_1(VAR_7, VAR_2, VAR_5);
 }

keep_ori:
 VAR_6 = *VAR_0;
 VAR_4 = *VAR_1;


 *VAR_1 = 0;
 *VAR_0 = VAR_7;
 *VAR_1 = VAR_5;


 if (VAR_6 && VAR_4 > 0)
  FUNC_0(VAR_6);
}
