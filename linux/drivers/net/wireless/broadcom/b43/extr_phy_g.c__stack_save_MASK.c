
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_1, size_t *VAR_2,
   u8 VAR_3, u16 VAR_4, u16 VAR_5)
{
 u32 *VAR_6 = &(VAR_1[*VAR_2]);

 FUNC_0(VAR_4 & 0xF000);
 FUNC_0(VAR_3 & 0xF0);
 *VAR_6 = VAR_4;
 *VAR_6 |= ((u32) VAR_3) << 12;
 *VAR_6 |= ((u32) VAR_5) << 16;
 (*VAR_2)++;
 FUNC_0(*VAR_2 >= VAR_0);
}
