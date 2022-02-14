
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int avmcard ;


 scalar_t__ FUNC_0 (int *,int*,int) ;
 scalar_t__ FUNC_1 (int *,int*,int) ;

__attribute__((used)) static u8 FUNC_2(avmcard *VAR_0, u32 VAR_1)
{
 u8 VAR_2 = 0x01;
 if (FUNC_1(VAR_0, &VAR_2, 1) == 0
     && FUNC_1(VAR_0, &VAR_1, 4) == 0) {
  u32 VAR_3;
  if (FUNC_0(VAR_0, &VAR_3, 4) == 0)
   return (u8)VAR_3;
 }
 return 0xff;
}
