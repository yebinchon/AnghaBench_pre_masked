
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; } ;
struct vc_data {size_t vc_num; scalar_t__ vc_screenbuf; scalar_t__ vc_hi_font_mask; TYPE_1__ vc_font; } ;
struct fbcon_ops {int flags; } ;
struct fbcon_display {int dummy; } ;
struct fb_info {int flags; struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vc_data*) ;
 int VAR_3 ;
 struct fbcon_display* VAR_4 ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct fbcon_display*,int) ;
 struct fb_info** VAR_5 ;
 int FUNC_5 (struct vc_data*,int) ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_6)
{
 struct fbcon_display *VAR_7 = &VAR_4[VAR_6->vc_num];
 struct fb_info *VAR_8;
 struct fbcon_ops *VAR_9;
 int VAR_10;
 bool VAR_11 = 1;

 VAR_10 = VAR_2[VAR_6->vc_num];

 if (VAR_10 == -1)
  goto finished;

 VAR_8 = VAR_5[VAR_10];

 if (!VAR_8)
  goto finished;

 if (VAR_8->flags & VAR_1)
  VAR_11 = 0;
 VAR_9 = VAR_8->fbcon_par;

 if (!VAR_9)
  goto finished;

 if (FUNC_1(VAR_6))
  FUNC_2(VAR_8);

 VAR_9->flags &= ~VAR_0;
finished:

 FUNC_4(VAR_7, VAR_11);
 if (VAR_11)
  VAR_6->vc_font.data = ((void*)0);

 if (VAR_6->vc_hi_font_mask && VAR_6->vc_screenbuf)
  FUNC_5(VAR_6, 0);

 if (!FUNC_0(&VAR_3))
  FUNC_3();

 return;
}
