
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_4__ {int length; } ;
struct TYPE_5__ {int bits_per_pixel; TYPE_1__ green; } ;
struct fb_info {int* pseudo_palette; TYPE_2__ var; scalar_t__ par; } ;
struct atyfb_par {TYPE_3__* palette; scalar_t__ asleep; } ;
struct TYPE_6__ {int red; int green; int blue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct atyfb_par*) ;
 int FUNC_2 (int ,int,struct atyfb_par*) ;
 int FUNC_3 (int,int,int,int,struct atyfb_par*) ;

__attribute__((used)) static int FUNC_4(u_int VAR_4, u_int VAR_5, u_int VAR_6, u_int VAR_7,
      u_int VAR_8, struct fb_info *VAR_9)
{
 struct atyfb_par *VAR_10 = (struct atyfb_par *) VAR_9->par;
 int VAR_11, VAR_12;
 u32 *VAR_13 = VAR_9->pseudo_palette;

 VAR_12 = VAR_9->var.bits_per_pixel;
 if (VAR_12 == 16)
  VAR_12 = (VAR_9->var.green.length == 5) ? 15 : 16;

 if (VAR_10->asleep)
  return 0;

 if (VAR_4 > 255 ||
     (VAR_12 == 16 && VAR_4 > 63) ||
     (VAR_12 == 15 && VAR_4 > 31))
  return 1;

 VAR_5 >>= 8;
 VAR_6 >>= 8;
 VAR_7 >>= 8;

 VAR_10->palette[VAR_4].red = VAR_5;
 VAR_10->palette[VAR_4].green = VAR_6;
 VAR_10->palette[VAR_4].blue = VAR_7;

 if (VAR_4 < 16) {
  switch (VAR_12) {
  case 15:
   VAR_13[VAR_4] = (VAR_4 << 10) | (VAR_4 << 5) | VAR_4;
   break;
  case 16:
   VAR_13[VAR_4] = (VAR_4 << 11) | (VAR_4 << 5) | VAR_4;
   break;
  case 24:
   VAR_13[VAR_4] = (VAR_4 << 16) | (VAR_4 << 8) | VAR_4;
   break;
  case 32:
   VAR_11 = (VAR_4 << 8) | VAR_4;
   VAR_13[VAR_4] = (VAR_11 << 16) | VAR_11;
   break;
  }
 }

 VAR_11 = FUNC_1(VAR_0, VAR_10) & 0xfc;
 if (FUNC_0(VAR_2))
  VAR_11 |= 0x2;
 FUNC_2(VAR_0, VAR_11, VAR_10);
 FUNC_2(VAR_1, 0xff, VAR_10);

 if (FUNC_0(VAR_3)) {
  if (VAR_12 == 16) {
   if (VAR_4 < 32)
    FUNC_3(VAR_4 << 3, VAR_5,
        VAR_10->palette[VAR_4 << 1].green,
        VAR_7, VAR_10);
   VAR_5 = VAR_10->palette[VAR_4 >> 1].red;
   VAR_7 = VAR_10->palette[VAR_4 >> 1].blue;
   VAR_4 <<= 2;
  } else if (VAR_12 == 15) {
   VAR_4 <<= 3;
   for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
    FUNC_3(VAR_4 + VAR_11, VAR_5, VAR_6, VAR_7, VAR_10);
  }
 }
 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_10);

 return 0;
}
