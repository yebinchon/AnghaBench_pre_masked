
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned FUNC_0 (unsigned char * VAR_0,
 unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3, VAR_4;
 unsigned char * VAR_5;
 unsigned char VAR_6;

 VAR_5 = VAR_0 + (VAR_1 >> 3);
 VAR_6 = *VAR_5--;
 VAR_3 = 1 << (VAR_1 & 7);
 for (VAR_4 = VAR_1; VAR_4 > VAR_2; VAR_4--) {
  if ((VAR_6 & VAR_3) == 0)
   break;
  if ((VAR_4 & 7) != 0) {
   VAR_3 >>= 1;
  } else {
   VAR_6 = *VAR_5--;
   VAR_3 = 1 << 7;
  }
 }
 return VAR_4;
}
