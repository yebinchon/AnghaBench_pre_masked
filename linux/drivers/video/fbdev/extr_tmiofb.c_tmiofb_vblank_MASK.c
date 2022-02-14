
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmiofb_par {scalar_t__ lcr; } ;
struct fb_videomode {unsigned int vsync_len; unsigned int upper_margin; unsigned int yres; } ;
struct fb_vblank {unsigned int vcount; int flags; } ;
struct fb_info {struct fb_videomode* mode; struct tmiofb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_6, struct fb_vblank *VAR_7)
{
 struct tmiofb_par *VAR_8 = VAR_6->par;
 struct fb_videomode *VAR_9 = VAR_6->mode;
 unsigned int VAR_10 = FUNC_0(VAR_8->lcr + VAR_5);
 unsigned int VAR_11 = VAR_9->vsync_len + VAR_9->upper_margin;

 VAR_7->vcount = VAR_10;
 VAR_7->flags = VAR_0 | VAR_1
      | VAR_2;

 if (VAR_10 < VAR_9->vsync_len)
  VAR_7->flags |= VAR_4;

 if (VAR_10 < VAR_11 || VAR_10 > VAR_11 + VAR_9->yres)
  VAR_7->flags |= VAR_3;

 return 0;
}
