
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvesafb_par {int vbe_modes_cnt; TYPE_1__* vbe_modes; } ;
struct fb_info {struct uvesafb_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int x_res; int y_res; int depth; int mode_id; } ;


 int VAR_0 ;
 struct fb_info* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,int,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct fb_info *VAR_4 = FUNC_0(VAR_1);
 struct uvesafb_par *VAR_5 = VAR_4->par;
 int VAR_6 = 0, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->vbe_modes_cnt && VAR_6 < VAR_0; VAR_7++) {
  VAR_6 += FUNC_1(VAR_3 + VAR_6, VAR_0 - VAR_6,
   "%dx%d-%d, 0x%.4x\n",
   VAR_5->vbe_modes[VAR_7].x_res, VAR_5->vbe_modes[VAR_7].y_res,
   VAR_5->vbe_modes[VAR_7].depth, VAR_5->vbe_modes[VAR_7].mode_id);
 }

 return VAR_6;
}
