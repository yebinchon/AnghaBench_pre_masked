
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ visual; int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; scalar_t__ pseudo_palette; TYPE_1__ var; } ;
struct fb_image {size_t* data; int height; int width; } ;


 int FUNC_0 (struct fb_info*,int) ;
 int FUNC_1 (struct fb_info*,int,int) ;
 int FUNC_2 (struct fb_info*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(const struct fb_image *VAR_2, struct fb_info *VAR_3,
       void *VAR_4, u32 VAR_5, u32 VAR_6)
{

 u32 *VAR_7, *VAR_8;
 u32 VAR_9 = 0, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14 = VAR_3->var.bits_per_pixel;
 u32 VAR_15 = 32 - VAR_14;
 u32 *VAR_16 = (u32 *) VAR_3->pseudo_palette;
 const u8 *VAR_17 = VAR_2->data;

 VAR_8 = VAR_4;
 for (VAR_12 = VAR_2->height; VAR_12--; ) {
  VAR_13 = VAR_2->width;
  VAR_7 = VAR_4;
  VAR_11 = 0;
  VAR_10 = 0;

  if (VAR_5) {
   u32 VAR_18 = ~(FUNC_1(VAR_3, ~(u32)0,
        VAR_5));
   VAR_10 = *VAR_7 & VAR_18;
   VAR_11 = VAR_5;
  }
  while (VAR_13--) {
   if (VAR_3->fix.visual == VAR_1 ||
       VAR_3->fix.visual == VAR_0 )
    VAR_9 = VAR_16[*VAR_17];
   else
    VAR_9 = *VAR_17;
   VAR_9 <<= FUNC_0(VAR_3, VAR_14);
   VAR_10 |= FUNC_1(VAR_3, VAR_9, VAR_11);
   if (VAR_11 >= VAR_15) {
    *VAR_7++ = VAR_10;

    VAR_10 = (VAR_11 == VAR_15) ? 0 :
     FUNC_2(VAR_3, VAR_9, 32 - VAR_11);
   }
   VAR_11 += VAR_14;
   VAR_11 &= (32 - 1);
   VAR_17++;
  }
  if (VAR_11) {
   u32 VAR_19 = FUNC_1(VAR_3, ~(u32)0, VAR_11);

   *VAR_7 &= VAR_19;
   *VAR_7 |= VAR_10;
  }
  VAR_4 += VAR_3->fix.line_length;
  if (VAR_6) {
   VAR_8 += VAR_3->fix.line_length;
   VAR_4 = (u8 *)((long)VAR_8 & ~(sizeof(u32) - 1));

   VAR_5 += VAR_6;
   VAR_5 &= 32 - 1;
  }
 }
}
