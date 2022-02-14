
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
typedef int s16 ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (short) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static s16 FUNC_3(u16 VAR_0)
{
 short VAR_1 = 0;
 unsigned int VAR_2;
 int VAR_3, VAR_4;

 if (FUNC_0(!VAR_0))
  return -10000;

 VAR_2 = VAR_0;

 VAR_1 = FUNC_2(VAR_2) - 16;
 if (VAR_1 > 0)
  VAR_2 >>= VAR_1;
 else
  VAR_2 <<= FUNC_1(VAR_1);

 if (VAR_2 <= 0xb800)
  VAR_3 = (VAR_2 + (VAR_2 >> 3) + (VAR_2 >> 4) - 0x9600);
 else
  VAR_3 = (VAR_2 - (VAR_2 >> 3) - (VAR_2 >> 6) - 0x5a00);
 if (VAR_3 < 0)
  VAR_3 = 0;

 VAR_4 = ((15 + VAR_1) << 15) + VAR_3;
 VAR_4 = (VAR_4 << 2) + (VAR_4 << 1) + (VAR_4 >> 6) + (VAR_4 >> 7);
 VAR_4 = (VAR_4 >> 10);

 return VAR_4;
}
