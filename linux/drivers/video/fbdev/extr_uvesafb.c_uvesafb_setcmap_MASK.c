
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvesafb_pal_entry {int red; int green; int blue; scalar_t__ pad; } ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ len; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_2__ cmap; TYPE_1__ var; } ;
struct fb_cmap {scalar_t__ start; scalar_t__ len; int* red; int* green; int* blue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uvesafb_pal_entry*) ;
 struct uvesafb_pal_entry* FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (scalar_t__,int,int,int,int ,struct fb_info*) ;
 int FUNC_3 (struct uvesafb_pal_entry*,int,scalar_t__,struct fb_info*) ;

__attribute__((used)) static int FUNC_4(struct fb_cmap *VAR_4, struct fb_info *VAR_5)
{
 struct uvesafb_pal_entry *VAR_6;
 int VAR_7 = 16 - VAR_3;
 int VAR_8, VAR_9 = 0;

 if (VAR_5->var.bits_per_pixel == 8) {
  if (VAR_4->start + VAR_4->len > VAR_5->cmap.start +
      VAR_5->cmap.len || VAR_4->start < VAR_5->cmap.start)
   return -VAR_0;

  VAR_6 = FUNC_1(VAR_4->len, sizeof(*VAR_6),
     VAR_2);
  if (!VAR_6)
   return -VAR_1;

  for (VAR_8 = 0; VAR_8 < VAR_4->len; VAR_8++) {
   VAR_6[VAR_8].red = VAR_4->red[VAR_8] >> VAR_7;
   VAR_6[VAR_8].green = VAR_4->green[VAR_8] >> VAR_7;
   VAR_6[VAR_8].blue = VAR_4->blue[VAR_8] >> VAR_7;
   VAR_6[VAR_8].pad = 0;
  }
  VAR_9 = FUNC_3(VAR_6, VAR_4->len, VAR_4->start, VAR_5);
  FUNC_0(VAR_6);
 } else {





  for (VAR_8 = 0; VAR_8 < VAR_4->len; VAR_8++) {
   VAR_9 |= FUNC_2(VAR_4->start + VAR_8, VAR_4->red[VAR_8],
      VAR_4->green[VAR_8], VAR_4->blue[VAR_8],
      0, VAR_5);
  }
 }
 return VAR_9;
}
