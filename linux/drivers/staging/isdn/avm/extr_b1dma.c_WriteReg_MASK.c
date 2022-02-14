
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int avmcard ;


 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static int FUNC_1(avmcard *VAR_0, u32 VAR_1, u8 VAR_2)
{
 u8 VAR_3 = 0x00;
 if (FUNC_0(VAR_0, &VAR_3, 1) == 0
     && FUNC_0(VAR_0, &VAR_1, 4) == 0) {
  u32 VAR_4 = VAR_2;
  return FUNC_0(VAR_0, &VAR_4, 4);
 }
 return -1;
}
