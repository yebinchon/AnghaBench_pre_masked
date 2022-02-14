
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbcon_display {int mode; } ;
struct fb_videomode {int dummy; } ;
struct fb_info {int dummy; } ;


 int* VAR_0 ;
 struct fbcon_display* VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct fb_videomode*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fb_info** VAR_4 ;

int FUNC_1(struct fb_info *VAR_5,
         struct fb_videomode *VAR_6)
{
 struct fb_info *VAR_7;
 struct fbcon_display *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;


 for (VAR_9 = VAR_2; VAR_9 <= VAR_3; VAR_9++) {
  VAR_10 = VAR_0[VAR_9];
  if (VAR_10 == -1)
   continue;
  VAR_7 = VAR_4[VAR_10];
  if (VAR_7 != VAR_5)
   continue;
  VAR_8 = &VAR_1[VAR_9];
  if (!VAR_8 || !VAR_8->mode)
   continue;
  if (FUNC_0(VAR_8->mode, VAR_6)) {
   VAR_11 = 1;
   break;
  }
 }
 return VAR_11;
}
