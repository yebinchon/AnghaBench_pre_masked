
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static inline u8 FUNC_0(u32 VAR_0)
{
 static const u8 VAR_1[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
         1, 2, 2, 3, 2, 3, 3, 4 };

 return VAR_1[VAR_0 & 0xf];
}
