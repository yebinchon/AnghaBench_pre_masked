
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(char *VAR_6, unsigned int VAR_7)
{
 int VAR_8;

 if (VAR_7 < 0x80) {
  VAR_6[0] = VAR_7;
  VAR_8 = 1;
 } else if (VAR_7 < 0x800) {
  VAR_6[1] = VAR_7 & VAR_4;
  VAR_6[1] |= VAR_3;
  VAR_7 >>= VAR_5;
  VAR_6[0] = VAR_7;
  VAR_6[0] |= VAR_0;
  VAR_8 = 2;
 } else if (VAR_7 < 0x10000) {
  VAR_6[2] = VAR_7 & VAR_4;
  VAR_6[2] |= VAR_3;
  VAR_7 >>= VAR_5;
  VAR_6[1] = VAR_7 & VAR_4;
  VAR_6[1] |= VAR_3;
  VAR_7 >>= VAR_5;
  VAR_6[0] = VAR_7;
  VAR_6[0] |= VAR_1;
  VAR_8 = 3;
 } else if (VAR_7 < 0x110000) {
  VAR_6[3] = VAR_7 & VAR_4;
  VAR_6[3] |= VAR_3;
  VAR_7 >>= VAR_5;
  VAR_6[2] = VAR_7 & VAR_4;
  VAR_6[2] |= VAR_3;
  VAR_7 >>= VAR_5;
  VAR_6[1] = VAR_7 & VAR_4;
  VAR_6[1] |= VAR_3;
  VAR_7 >>= VAR_5;
  VAR_6[0] = VAR_7;
  VAR_6[0] |= VAR_2;
  VAR_8 = 4;
 } else {
  FUNC_0("%#x: illegal val\n", VAR_7);
  VAR_8 = 0;
 }
 return VAR_8;
}
