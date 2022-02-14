
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s32 ;



__attribute__((used)) static u32 FUNC_0(u8 *VAR_0)

{
 s32 VAR_1;
 u32 VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
  VAR_2 |= ((u32)(*VAR_0++)) << (8*VAR_1);
 return VAR_2;
}
