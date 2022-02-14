
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ingenic_ecc {int base; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ingenic_ecc *VAR_1, void *VAR_2,
       size_t VAR_3)
{
 size_t VAR_4 = VAR_3 / sizeof(u32);
 size_t VAR_5 = VAR_3 % sizeof(u32);
 u32 *VAR_6;
 u8 *VAR_7;
 u32 VAR_8, VAR_9 = 0;

 VAR_6 = (u32 *)VAR_2;
 while (VAR_4--) {
  *VAR_6++ = FUNC_0(VAR_1->base + VAR_0 + VAR_9);
  VAR_9 += sizeof(u32);
 }

 VAR_7 = (u8 *)VAR_6;
 VAR_8 = FUNC_0(VAR_1->base + VAR_0 + VAR_9);
 switch (VAR_5) {
 case 3:
  VAR_7[2] = (VAR_8 >> 16) & 0xff;

 case 2:
  VAR_7[1] = (VAR_8 >> 8) & 0xff;

 case 1:
  VAR_7[0] = VAR_8 & 0xff;
  break;
 }
}
