
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s16 ;



__attribute__((used)) static u16 FUNC_0(s16 VAR_0)
{

 u16 VAR_1 = 0;
 u16 VAR_2 = 0;
 u16 VAR_3 = 0;

 if (VAR_0 < 0)
  VAR_0 = 0;


 VAR_0 += 0x0020;

 if (VAR_0 > 2047)
  VAR_0 = 2047;

 if (VAR_0 > 1023) {
  VAR_1 = 3;
  VAR_2 = 3;
  VAR_3 = VAR_0 / 16;
 } else if (VAR_0 > 511) {
  VAR_1 = 1;
  VAR_2 = 3;
  VAR_3 = VAR_0 / 8;
 } else if (VAR_0 > 255) {
  VAR_2 = 3;
  VAR_3 = VAR_0 / 4;
 } else if (VAR_0 > 127) {
  VAR_2 = 1;
  VAR_3 = VAR_0 / 2;
 } else
  VAR_3 = VAR_0;

 return VAR_3 + (VAR_2 << 7) + (VAR_1 << 9);

}
