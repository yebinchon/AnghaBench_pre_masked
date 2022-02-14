
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned char *VAR_2, unsigned char *VAR_3, unsigned short VAR_4,
 int VAR_5)
{
 unsigned char *VAR_6 = VAR_3;
 unsigned char VAR_7=0;

 *VAR_6++ = 129;
 while (VAR_5 > 0) {
  if (VAR_5 > 2)
   VAR_7 = *VAR_2++;
  else if (VAR_5 > 1)
   VAR_7 = VAR_4 >> 8;
  else
   VAR_7 = VAR_4 & 0xff;

  VAR_5--;

  switch (VAR_7) {
  case 129:
   *VAR_6++ = 128;
   *VAR_6++ = VAR_0;
   break;
  case 128:
   *VAR_6++ = 128;
   *VAR_6++ = VAR_1;
   break;
  default:
   *VAR_6++ = VAR_7;
   break;
  }
 }
 *VAR_6++ = 129;

 return VAR_6 - VAR_3;
}
