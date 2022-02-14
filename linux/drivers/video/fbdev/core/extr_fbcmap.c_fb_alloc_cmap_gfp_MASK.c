
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_cmap {int len; scalar_t__ start; int * transp; void* blue; void* green; void* red; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct fb_cmap*) ;
 int FUNC_1 (struct fb_cmap*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int,int ) ;

int FUNC_4(struct fb_cmap *VAR_2, int VAR_3, int VAR_4, gfp_t VAR_5)
{
 int VAR_6 = VAR_3 * sizeof(u16);
 int VAR_7 = -VAR_0;

 VAR_5 |= VAR_1;

 if (VAR_2->len != VAR_3) {
  FUNC_1(VAR_2);
  if (!VAR_3)
   return 0;

  VAR_2->red = FUNC_3(VAR_6, VAR_5);
  if (!VAR_2->red)
   goto fail;
  VAR_2->green = FUNC_3(VAR_6, VAR_5);
  if (!VAR_2->green)
   goto fail;
  VAR_2->blue = FUNC_3(VAR_6, VAR_5);
  if (!VAR_2->blue)
   goto fail;
  if (VAR_4) {
   VAR_2->transp = FUNC_3(VAR_6, VAR_5);
   if (!VAR_2->transp)
    goto fail;
  } else {
   VAR_2->transp = ((void*)0);
  }
 }
 VAR_2->start = 0;
 VAR_2->len = VAR_3;
 VAR_7 = FUNC_0(FUNC_2(VAR_3), VAR_2);
 if (VAR_7)
  goto fail;
 return 0;

fail:
 FUNC_1(VAR_2);
 return VAR_7;
}
