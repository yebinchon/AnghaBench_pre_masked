
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct da8xx_fb_par* par; } ;
struct da8xx_fb_par {scalar_t__ vsync_flag; int vsync_timeout; int vsync_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1)
{
 struct da8xx_fb_par *VAR_2 = VAR_1->par;
 int VAR_3;
 VAR_2->vsync_flag = 0;
 VAR_3 = FUNC_0(VAR_2->vsync_wait,
            VAR_2->vsync_flag != 0,
            VAR_2->vsync_timeout);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 == 0)
  return -VAR_0;

 return 0;
}
