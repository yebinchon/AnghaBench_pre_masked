
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, u8 *VAR_2, u16 *VAR_3)
{
 if (*VAR_3 < 5)
  return -VAR_0;
 VAR_2[0] = (VAR_1 & 0xFF);
 VAR_2[1] = (VAR_1 & 0xFF00) >> 8;
 VAR_2[2] = (VAR_1 & 0xFF0000) >> 16;
 VAR_2[3] = (VAR_1 & 0xFF000000) >> 24;
 VAR_2[4] = '\0';
 *VAR_3 -= 5;
 return 0;
}
