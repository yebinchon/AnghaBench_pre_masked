
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int speed_t ;



__attribute__((used)) static speed_t FUNC_0(unsigned char VAR_0[4],
        speed_t VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 VAR_2 = 12000000 * 32;
 VAR_3 = VAR_2 / VAR_1;
 if (VAR_3 == 0)
  VAR_3 = 1;
 VAR_4 = 0;
 while (VAR_3 >= 512) {
  if (VAR_4 < 7) {
   VAR_3 >>= 2;
   VAR_4++;
  } else {

   VAR_3 = 511;
   break;
  }
 }

 VAR_0[3] = 0x80;
 VAR_0[2] = 0;
 VAR_0[1] = VAR_4 << 1 | VAR_3 >> 8;
 VAR_0[0] = VAR_3 & 0xff;


 VAR_1 = (VAR_2 / VAR_3) >> (VAR_4 << 1);

 return VAR_1;
}
