
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int s32 ;
typedef int __le32 ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int const) ;

s32 FUNC_3(u32 *VAR_3, u16 VAR_4,
     const void *VAR_5, u32 VAR_6)
{
 const __le32 *VAR_7 = (const __le32 *)VAR_5;
 u32 *VAR_8;
 u32 VAR_9;


 if (!VAR_3 || !VAR_6 || (VAR_6 % 4))
  return VAR_0;

 VAR_8 = &VAR_3[FUNC_0(*VAR_3)];


 for (VAR_9 = 0; VAR_9 < (VAR_6 / 4); VAR_9++)
  VAR_8[VAR_9 + 1] = FUNC_2(VAR_7[VAR_9]);


 VAR_6 <<= VAR_2;
 VAR_8[0] = VAR_6 | VAR_4;


 VAR_6 += VAR_1 << VAR_2;
 *VAR_3 += FUNC_1(VAR_6);

 return 0;
}
