
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef size_t u32 ;
typedef int s32 ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static s32 FUNC_0(u32 *VAR_2, unsigned char *VAR_3)
{
 u32 VAR_4;


 if (!VAR_3 || !VAR_2)
  return VAR_0;

 VAR_4 = *VAR_2 >> VAR_1;
 VAR_2++;

 while (VAR_4--)
  VAR_3[VAR_4] = (u8)(VAR_2[VAR_4 / 4] >> (8 * (VAR_4 % 4)));

 return 0;
}
