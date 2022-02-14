
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static const u8 *FUNC_0(const u8 *VAR_0, const u8 *VAR_1)
{
 u32 VAR_2 = 0xffffffff;

 do {
  VAR_2 = VAR_2 << 8 | *VAR_0++;
  if (VAR_0 >= VAR_1)
   return ((void*)0);
 } while (VAR_2 != 0x00000001);

 return VAR_0;
}
