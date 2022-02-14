
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct fb_copyarea {int sx; int dx; int sy; int dy; int height; int width; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int*,struct fb_info*) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_8,
          const struct fb_copyarea *VAR_9)
{
 __u32 VAR_10[6];

 VAR_10[0] = (VAR_7 << 24) | (1 << 16) | VAR_4;

 VAR_10[1] = (2 << 7) | (VAR_5 << 9);
 VAR_10[2] = VAR_6 << 24;

 if (VAR_9->sx >= VAR_9->dx && VAR_9->sy >= VAR_9->dy)
  VAR_10[2] |= VAR_2 << 16;
 else if (VAR_9->sx >= VAR_9->dx && VAR_9->sy <= VAR_9->dy)
  VAR_10[2] |= VAR_0 << 16;
 else if (VAR_9->sx <= VAR_9->dx && VAR_9->sy >= VAR_9->dy)
  VAR_10[2] |= VAR_3 << 16;
 else
  VAR_10[2] |= VAR_1 << 16;

 VAR_10[3] = (VAR_9->sy << 16) | VAR_9->sx;
 VAR_10[4] = (VAR_9->dy << 16) | VAR_9->dx;
 VAR_10[5] = (VAR_9->height << 16) | VAR_9->width;
 FUNC_0(6, VAR_10, VAR_8);
}
