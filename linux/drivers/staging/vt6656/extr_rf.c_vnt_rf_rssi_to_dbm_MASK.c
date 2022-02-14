
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnt_private {int rf_type; } ;
void FUNC_0(struct vnt_private *VAR_0, u8 VAR_1, long *VAR_2)
{
 u8 VAR_3 = ((VAR_1 & 0xc0) >> 6) & 0x03;
 long VAR_4 = VAR_1 & 0x3f;
 long VAR_5 = 0;
 u8 VAR_6[4] = {0, 18, 0, 40};

 switch (VAR_0->rf_type) {
 case 132:
 case 131:
 case 133:
 case 130:
 case 129:
 case 128:
  VAR_5 = VAR_6[VAR_3];
  break;
 default:
  break;
 }

 *VAR_2 = -1 * (VAR_5 + VAR_4 * 2);
}
