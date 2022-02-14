
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int __be32 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 const __be32 *VAR_3 = (const __be32 *)VAR_0;
 u32 *VAR_4 = (u32 *)VAR_1;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2/4; VAR_5++)
  VAR_4[VAR_5] = FUNC_0(VAR_3[VAR_5]);
}
