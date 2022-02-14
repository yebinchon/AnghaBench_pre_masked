
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static void FUNC_2(u32 VAR_0, u32 VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 u32 VAR_4 = FUNC_0((u32 *)VAR_2);
 u32 VAR_5 = FUNC_0((u32 *)VAR_3);

 VAR_0 &= VAR_1;
 VAR_0 |= VAR_4 & ~VAR_1;

 FUNC_1(VAR_5 | VAR_1, (u32 *)VAR_3);
 FUNC_1(VAR_0, (u32 *)VAR_2);
}
