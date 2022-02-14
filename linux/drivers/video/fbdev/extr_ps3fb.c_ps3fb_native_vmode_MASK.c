
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int dummy; } ;
typedef enum ps3av_mode_num { ____Placeholder_ps3av_mode_num } ps3av_mode_num ;


 int VAR_0 ;
 struct fb_videomode const* VAR_1 ;

__attribute__((used)) static const struct fb_videomode *FUNC_0(enum ps3av_mode_num VAR_2)
{
 return &VAR_1[VAR_0 + VAR_2 - 1];
}
