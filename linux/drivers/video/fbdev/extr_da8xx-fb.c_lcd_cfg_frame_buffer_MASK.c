
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct da8xx_fb_par {int palette_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct da8xx_fb_par *VAR_11, u32 VAR_12, u32 VAR_13,
  u32 VAR_14, u32 VAR_15)
{
 u32 VAR_16;

 if (VAR_14 > 16 && VAR_10 == VAR_8)
  return -VAR_0;



 if (VAR_10 == VAR_8) {




  VAR_12 &= 0x3f0;
 } else {




  VAR_12 &= 0x7f0;
 }

 VAR_16 = FUNC_0(VAR_3);
 VAR_16 &= 0xfffffc00;
 if (VAR_10 == VAR_8) {
  VAR_16 |= ((VAR_12 >> 4) - 1) << 4;
 } else {
  VAR_12 = (VAR_12 >> 4) - 1;
  VAR_16 |= ((VAR_12 & 0x3f) << 4) | ((VAR_12 & 0x40) >> 3);
 }
 FUNC_1(VAR_16, VAR_3);



 VAR_16 = FUNC_0(VAR_4);
 VAR_16 = ((VAR_13 - 1) & 0x3ff) | (VAR_16 & 0xfffffc00);
 FUNC_1(VAR_16, VAR_4);


 if (VAR_10 == VAR_9) {
  VAR_16 = FUNC_0(VAR_5);
  VAR_16 |= ((VAR_13 - 1) & 0x400) << 16;
  FUNC_1(VAR_16, VAR_5);
 }


 VAR_16 = FUNC_0(VAR_1) & ~(1 << 8);
 if (VAR_15)
  VAR_16 |= VAR_2;

 VAR_11->palette_sz = 16 * 2;

 switch (VAR_14) {
 case 1:
 case 2:
 case 4:
 case 16:
  break;
 case 24:
  VAR_16 |= VAR_6;
  break;
 case 32:
  VAR_16 |= VAR_6;
  VAR_16 |= VAR_7;
  break;
 case 8:
  VAR_11->palette_sz = 256 * 2;
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_1);

 return 0;
}
