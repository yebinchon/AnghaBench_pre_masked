
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int byRFType; } ;






void
FUNC_0(struct vnt_private *VAR_0, unsigned char VAR_1, long *VAR_2)
{
 unsigned char VAR_3 = (((VAR_1 & 0xC0) >> 6) & 0x03);
 long VAR_4 = (VAR_1 & 0x3F);
 long VAR_5 = 0;
 unsigned char VAR_6[4] = {0, 18, 0, 40};

 switch (VAR_0->byRFType) {
 case 130:
 case 128:
 case 129:
  VAR_5 = VAR_6[VAR_3];
  break;
 default:
  break;
 }

 *VAR_2 = -1 * (VAR_5 + VAR_4 * 2);
}
