
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_info {int dummy; } ;
struct fb_cmap {int* red; int* green; int* blue; int* transp; int start; int len; } ;


 int FUNC_0 (struct fb_info*,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct fb_cmap *VAR_0, struct fb_info *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u16 *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 u16 VAR_9 = 0xffff;

 VAR_5 = VAR_0->red;
 VAR_6 = VAR_0->green;
 VAR_7 = VAR_0->blue;
 VAR_8 = VAR_0->transp;
 VAR_3 = VAR_0->start;

 for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++) {
  if (VAR_8)
   VAR_9 = *VAR_8++;
  VAR_4 = FUNC_0(VAR_1, VAR_3++, *VAR_5++, *VAR_6++, *VAR_7++, VAR_9,
    VAR_2 == VAR_0->len - 1);
  if (VAR_4 != 0)
   return VAR_4;
 }

 return 0;
}
