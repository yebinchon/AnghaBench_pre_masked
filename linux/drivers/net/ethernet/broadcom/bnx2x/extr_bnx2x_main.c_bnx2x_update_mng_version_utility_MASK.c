
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*,char*,int*,int*,int*,int*) ;

__attribute__((used)) static u32 FUNC_1(u8 *VAR_0, bool VAR_1)
{
 u8 VAR_2[4];
 int VAR_3 = 0;

 if (VAR_1) {
  VAR_3 = FUNC_0(VAR_0, "1.%c%hhd.%hhd.%hhd",
      &VAR_2[0], &VAR_2[1], &VAR_2[2], &VAR_2[3]);
  if (VAR_3 > 0)
   VAR_2[0] -= '0';
 } else {
  VAR_3 = FUNC_0(VAR_0, "%hhd.%hhd.%hhd.%hhd",
      &VAR_2[0], &VAR_2[1], &VAR_2[2], &VAR_2[3]);
 }

 while (VAR_3 < 4)
  VAR_2[VAR_3++] = 0;

 return (VAR_2[0] << 24) | (VAR_2[1] << 16) | (VAR_2[2] << 8) | VAR_2[3];
}
