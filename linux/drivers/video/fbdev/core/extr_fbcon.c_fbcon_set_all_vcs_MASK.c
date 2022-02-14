
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct vc_data {scalar_t__ vc_mode; size_t vc_num; TYPE_1__ vc_font; } ;
struct fbcon_ops {scalar_t__ currcon; int rotate; } ;
struct fbcon_display {int dummy; } ;
struct TYPE_6__ {int xres; int yres; } ;
struct fb_info {TYPE_3__ var; struct fbcon_ops* fbcon_par; } ;
struct TYPE_5__ {struct vc_data* d; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__ FUNC_1 (struct vc_data*) ;
 struct fbcon_display* VAR_2 ;
 int FUNC_2 (struct fb_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct fb_info** VAR_5 ;
 int FUNC_3 (struct vc_data*,struct fb_info*) ;
 int FUNC_4 (struct fbcon_display*,TYPE_3__*,struct fb_info*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_5 (struct vc_data*,int,int) ;

__attribute__((used)) static void FUNC_6(struct fb_info *VAR_7)
{
 struct fbcon_ops *VAR_8 = VAR_7->fbcon_par;
 struct vc_data *VAR_9;
 struct fbcon_display *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14 = -1;

 if (!VAR_8 || VAR_8->currcon < 0)
  return;

 for (VAR_11 = VAR_3; VAR_11 <= VAR_4; VAR_11++) {
  VAR_9 = VAR_6[VAR_11].d;
  if (!VAR_9 || VAR_9->vc_mode != VAR_0 ||
      VAR_5[VAR_1[VAR_11]] != VAR_7)
   continue;

  if (FUNC_1(VAR_9)) {
   VAR_14 = VAR_11;
   continue;
  }

  VAR_10 = &VAR_2[VAR_9->vc_num];
  FUNC_3(VAR_9, VAR_7);
  FUNC_4(VAR_10, &VAR_7->var, VAR_7);
  VAR_13 = FUNC_0(VAR_8->rotate, VAR_7->var.xres, VAR_7->var.yres);
  VAR_12 = FUNC_0(VAR_8->rotate, VAR_7->var.yres, VAR_7->var.xres);
  VAR_13 /= VAR_9->vc_font.width;
  VAR_12 /= VAR_9->vc_font.height;
  FUNC_5(VAR_9, VAR_13, VAR_12);
 }

 if (VAR_14 != -1)
  FUNC_2(VAR_7);
}
