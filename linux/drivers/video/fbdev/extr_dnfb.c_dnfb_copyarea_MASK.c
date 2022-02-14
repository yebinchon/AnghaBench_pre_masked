
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ushort ;
typedef int uint ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ screen_base; } ;
struct fb_copyarea {int dy; int sy; int sx; int dx; int width; short height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static
void FUNC_1(struct fb_info *VAR_4, const struct fb_copyarea *VAR_5)
{

 int VAR_6, VAR_7, VAR_8 = 0, VAR_9, VAR_10;
 uint VAR_11, VAR_12, VAR_13;
 ushort *VAR_14, VAR_15;
 short VAR_16, VAR_17;

 VAR_6 = (VAR_5->dy <= VAR_5->sy) ? 1 : -1;

 VAR_14 = (ushort *)(VAR_4->screen_base + VAR_5->sy * VAR_4->fix.line_length +
   (VAR_5->sx >> 4));
 VAR_13 = VAR_5->dy * (VAR_4->fix.line_length >> 1) + (VAR_5->dx >> 4);

 if (VAR_6 > 0) {
  VAR_7 = (VAR_4->fix.line_length * 8) - VAR_5->sx - VAR_5->width;
  VAR_9 = VAR_5->dx + VAR_5->width - 1;
  VAR_10 = (VAR_9 >> 4) - (VAR_5->dx >> 4) + 1;
  VAR_11 = 0xffff0000 >> (VAR_5->dx & 0xf);
  VAR_12 = 0x7ffff >> (VAR_9 & 0xf);
  FUNC_0(VAR_0,
       (((VAR_5->dx & 0xf) - (VAR_5->sx & 0xf)) % 16) | (0x4 << 5));
  if ((VAR_5->dx & 0xf) < (VAR_5->sx & 0xf))
   VAR_8 = 1;
 } else {
  VAR_7 = -((VAR_4->fix.line_length * 8) - VAR_5->sx - VAR_5->width);
  VAR_9 = VAR_5->dx - VAR_5->width + 1;
  VAR_10 = (VAR_5->dx >> 4) - (VAR_9 >> 4) + 1;
  VAR_11 = 0x7ffff >> (VAR_5->dx & 0xf);
  VAR_12 = 0xffff0000 >> (VAR_9 & 0xf);
  FUNC_0(VAR_0,
       ((-((VAR_5->sx & 0xf) - (VAR_5->dx & 0xf))) % 16) |
       (0x4 << 5));
  if ((VAR_5->dx & 0xf) > (VAR_5->sx & 0xf))
   VAR_8 = 1;
 }

 for (VAR_16 = 0; VAR_16 < VAR_5->height; VAR_16++) {

  FUNC_0(VAR_1, 0xc | (VAR_13 >> 16));

  if (VAR_8) {
   VAR_15 = *VAR_14;
   VAR_14 += VAR_6;
  }

  if (VAR_10) {
   FUNC_0(VAR_2, VAR_11);
   *VAR_14 = VAR_13;
   VAR_14 += VAR_6;
   VAR_13 += VAR_6;
   FUNC_0(VAR_2, 0);

   for (VAR_17 = 1; VAR_17 < (VAR_10 - 1); VAR_17++) {
    *VAR_14 = VAR_13;
    VAR_14 += VAR_6;
    VAR_13 += VAR_6;
   }

   FUNC_0(VAR_2, VAR_11);
   *VAR_14 = VAR_13;
   VAR_13 += VAR_6;
   VAR_14 += VAR_6;
  } else {
   FUNC_0(VAR_2, VAR_11 | VAR_12);
   *VAR_14 = VAR_13;
   VAR_13 += VAR_6;
   VAR_14 += VAR_6;
  }
  VAR_14 += (VAR_7 / 16);
  VAR_13 += (VAR_7 / 16);
 }
 FUNC_0(VAR_0, VAR_3);
}
