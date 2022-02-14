
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;
struct fb_image {int width; char* data; int height; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (struct fb_info*) ;

__attribute__((used)) static void FUNC_1(const struct fb_image *VAR_5, struct fb_info *VAR_6,
      void *VAR_7, u32 VAR_8, u32 VAR_9)
{
 u32 VAR_10 = VAR_8, VAR_11 = VAR_9, VAR_12 = VAR_6->var.bits_per_pixel;
 u32 VAR_13 = 32/VAR_12, VAR_14 = (VAR_5->width + 7)/8;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 const char *VAR_19 = VAR_5->data, *VAR_20;
 u32 *VAR_21;
 const u32 *VAR_22 = ((void*)0);
 int VAR_23, VAR_24, VAR_25;

 switch (VAR_12) {
 case 8:
  VAR_22 = FUNC_0(VAR_6) ? VAR_3 : VAR_4;
  break;
 case 16:
  VAR_22 = FUNC_0(VAR_6) ? VAR_0 : VAR_1;
  break;
 case 32:
 default:
  VAR_22 = VAR_2;
  break;
 }

 for (VAR_23 = VAR_13-1; VAR_23--; ) {
  VAR_10 <<= VAR_12;
  VAR_11 <<= VAR_12;
  VAR_10 |= VAR_8;
  VAR_11 |= VAR_9;
 }

 VAR_15 = (1 << VAR_13) - 1;
 VAR_17 = VAR_10 ^ VAR_11;
 VAR_25 = VAR_5->width/VAR_13;

 for (VAR_23 = VAR_5->height; VAR_23--; ) {
  VAR_21 = VAR_7;
  VAR_18 = 8;
  VAR_20 = VAR_19;

  for (VAR_24 = VAR_25; VAR_24--; ) {
   VAR_18 -= VAR_13;
   VAR_16 = VAR_22[(*VAR_20 >> VAR_18) & VAR_15];
   *VAR_21++ = (VAR_16 & VAR_17) ^ VAR_11;
   if (!VAR_18) {
    VAR_18 = 8;
    VAR_20++;
   }
  }
  VAR_7 += VAR_6->fix.line_length;
  VAR_19 += VAR_14;
 }
}
