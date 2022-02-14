
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(u32 *VAR_1, u8 VAR_2, u16 VAR_3)
{
 size_t VAR_4;

 FUNC_0(VAR_3 & 0xF000);
 FUNC_0(VAR_2 & 0xF0);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_1++) {
  if ((*VAR_1 & 0x00000FFF) != VAR_3)
   continue;
  if (((*VAR_1 & 0x0000F000) >> 12) != VAR_2)
   continue;
  return ((*VAR_1 & 0xFFFF0000) >> 16);
 }
 FUNC_0(1);

 return 0;
}
