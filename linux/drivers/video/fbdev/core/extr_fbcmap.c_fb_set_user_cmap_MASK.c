
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_info {int dummy; } ;
struct fb_cmap_user {int len; int start; int * transp; int * blue; int * green; int * red; } ;
struct fb_cmap {int start; int transp; int blue; int green; int red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct fb_cmap*,int,int ,int ) ;
 int FUNC_2 (struct fb_cmap*) ;
 int FUNC_3 (struct fb_cmap*,struct fb_info*) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_cmap*,int ,int) ;
 int FUNC_6 (struct fb_info*) ;

int FUNC_7(struct fb_cmap_user *VAR_3, struct fb_info *VAR_4)
{
 int VAR_5, VAR_6 = VAR_3->len * sizeof(u16);
 struct fb_cmap VAR_7;

 if (VAR_6 < 0 || VAR_6 < VAR_3->len)
  return -VAR_0;

 FUNC_5(&VAR_7, 0, sizeof(struct fb_cmap));
 VAR_5 = FUNC_1(&VAR_7, VAR_3->len, VAR_3->transp != ((void*)0),
    VAR_2);
 if (VAR_5)
  return VAR_5;
 if (FUNC_0(VAR_7.red, VAR_3->red, VAR_6) ||
     FUNC_0(VAR_7.green, VAR_3->green, VAR_6) ||
     FUNC_0(VAR_7.blue, VAR_3->blue, VAR_6) ||
     (VAR_3->transp && FUNC_0(VAR_7.transp, VAR_3->transp, VAR_6))) {
  VAR_5 = -VAR_1;
  goto out;
 }
 VAR_7.start = VAR_3->start;
 FUNC_4(VAR_4);
 VAR_5 = FUNC_3(&VAR_7, VAR_4);
 FUNC_6(VAR_4);
out:
 FUNC_2(&VAR_7);
 return VAR_5;
}
