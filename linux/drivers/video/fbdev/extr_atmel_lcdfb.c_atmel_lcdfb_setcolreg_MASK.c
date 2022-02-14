
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_5__ {int blue; int green; int red; scalar_t__ grayscale; } ;
struct TYPE_4__ {int visual; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_2__ var; TYPE_1__ fix; struct atmel_lcdfb_info* par; } ;
struct atmel_lcdfb_pdata {int lcd_wiring_mode; } ;
struct atmel_lcdfb_info {TYPE_3__* config; struct atmel_lcdfb_pdata pdata; } ;
struct TYPE_6__ {int have_intensity_bit; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;



 unsigned int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (struct atmel_lcdfb_info*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        unsigned int VAR_5, struct fb_info *VAR_6)
{
 struct atmel_lcdfb_info *VAR_7 = VAR_6->par;
 struct atmel_lcdfb_pdata *VAR_8 = &VAR_7->pdata;
 unsigned int VAR_9;
 u32 *VAR_10;
 int VAR_11 = 1;

 if (VAR_6->var.grayscale)
  VAR_2 = VAR_3 = VAR_4 = (19595 * VAR_2 + 38470 * VAR_3
          + 7471 * VAR_4) >> 16;

 switch (VAR_6->fix.visual) {
 case 128:
  if (VAR_1 < 16) {
   VAR_10 = VAR_6->pseudo_palette;

   VAR_9 = FUNC_1(VAR_2, &VAR_6->var.red);
   VAR_9 |= FUNC_1(VAR_3, &VAR_6->var.green);
   VAR_9 |= FUNC_1(VAR_4, &VAR_6->var.blue);

   VAR_10[VAR_1] = VAR_9;
   VAR_11 = 0;
  }
  break;

 case 129:
  if (VAR_1 < 256) {
   if (VAR_7->config->have_intensity_bit) {

    VAR_9 = ((VAR_2 >> 11) & 0x001f);
    VAR_9 |= ((VAR_3 >> 6) & 0x03e0);
    VAR_9 |= ((VAR_4 >> 1) & 0x7c00);





   } else {

    if (VAR_8->lcd_wiring_mode == VAR_0) {
     VAR_9 = ((VAR_4 >> 11) & 0x001f);
     VAR_9 |= ((VAR_2 >> 0) & 0xf800);
    } else {
     VAR_9 = ((VAR_2 >> 11) & 0x001f);
     VAR_9 |= ((VAR_4 >> 0) & 0xf800);
    }

    VAR_9 |= ((VAR_3 >> 5) & 0x07e0);
   }

   FUNC_2(VAR_7, FUNC_0(VAR_1), VAR_9);
   VAR_11 = 0;
  }
  break;

 case 130:
  if (VAR_1 < 2) {
   VAR_9 = (VAR_1 == 0) ? 0x00 : 0x1F;
   FUNC_2(VAR_7, FUNC_0(VAR_1), VAR_9);
   VAR_11 = 0;
  }
  break;

 }

 return VAR_11;
}
