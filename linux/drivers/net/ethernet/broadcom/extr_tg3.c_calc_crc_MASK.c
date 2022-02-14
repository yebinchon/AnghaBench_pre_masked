
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;


 unsigned char VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(unsigned char *VAR_1, int VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = 0xffffffff;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_3 ^= VAR_1[VAR_5];

  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   VAR_4 = VAR_3 & 0x01;

   VAR_3 >>= 1;

   if (VAR_4)
    VAR_3 ^= VAR_0;
  }
 }

 return ~VAR_3;
}
