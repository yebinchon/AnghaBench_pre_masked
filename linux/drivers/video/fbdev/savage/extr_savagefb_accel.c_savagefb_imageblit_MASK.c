
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct savagefb_par {int (* SavageWaitFifo ) (struct savagefb_par*,int) ;scalar_t__ bci_ptr; } ;
struct TYPE_2__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ fix; struct savagefb_par* par; } ;
struct fb_image {int width; int height; int depth; int fg_color; int bg_color; int dy; scalar_t__ dx; scalar_t__ data; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct fb_info*,struct fb_image const*) ;
 int * VAR_8 ;
 int FUNC_6 (struct savagefb_par*,int) ;

void FUNC_7(struct fb_info *VAR_9, const struct fb_image *VAR_10)
{
 struct savagefb_par *VAR_11 = VAR_9->par;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;
 u32 *VAR_18 = (u32 *) VAR_10->data;

 if (!VAR_10->width || !VAR_10->height)
  return;

 if (VAR_10->depth != 1) {
  FUNC_5(VAR_9, VAR_10);
  return;
 }

 if (VAR_9->fix.visual == VAR_7) {
  VAR_12 = VAR_10->fg_color;
  VAR_13 = VAR_10->bg_color;
 } else {
  VAR_12 = ((u32 *)VAR_9->pseudo_palette)[VAR_10->fg_color];
  VAR_13 = ((u32 *)VAR_9->pseudo_palette)[VAR_10->bg_color];
 }

 VAR_17 = VAR_2 | VAR_3 | VAR_4 |
       VAR_0 | VAR_1 | VAR_6 |
       VAR_5;

 VAR_11->bci_ptr = 0;
 FUNC_1(VAR_17, VAR_8[0]);

 VAR_16 = (VAR_10->width + 31) & ~31;
 VAR_14 = (VAR_16 * VAR_10->height)/8;
 VAR_14 >>= 2;

 VAR_11->SavageWaitFifo(VAR_11, VAR_14 + 5);
 FUNC_2(VAR_17);
 FUNC_2(FUNC_0(VAR_10->dx, VAR_10->dx + VAR_10->width - 1));
 FUNC_2(VAR_12);
 FUNC_2(VAR_13);
 FUNC_2(FUNC_4(VAR_10->dx, VAR_10->dy));
 FUNC_2(FUNC_3(VAR_16, VAR_10->height));
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  FUNC_2(VAR_18[VAR_15]);
}
