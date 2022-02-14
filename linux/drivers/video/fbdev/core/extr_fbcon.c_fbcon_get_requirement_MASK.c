
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
struct vc_data {scalar_t__ vc_mode; TYPE_1__ vc_font; } ;
struct fbcon_display {int fontdata; scalar_t__ userfont; } ;
struct fb_info {scalar_t__ node; } ;
struct fb_blit_caps {int x; int y; int len; scalar_t__ flags; } ;
struct TYPE_4__ {struct vc_data* d; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 struct fbcon_display* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

void FUNC_1(struct fb_info *VAR_7,
      struct fb_blit_caps *VAR_8)
{
 struct vc_data *VAR_9;
 struct fbcon_display *VAR_10;

 if (VAR_8->flags) {
  int VAR_11, VAR_12;

  for (VAR_11 = VAR_4; VAR_11 <= VAR_5; VAR_11++) {
   VAR_9 = VAR_6[VAR_11].d;
   if (VAR_9 && VAR_9->vc_mode == VAR_0 &&
       VAR_7->node == VAR_1[VAR_11]) {
    VAR_10 = &VAR_2[VAR_11];
    VAR_8->x |= 1 << (VAR_9->vc_font.width - 1);
    VAR_8->y |= 1 << (VAR_9->vc_font.height - 1);
    VAR_12 = (VAR_10->userfont) ?
     FUNC_0(VAR_10->fontdata) : 256;
    if (VAR_8->len < VAR_12)
     VAR_8->len = VAR_12;
   }
  }
 } else {
  VAR_9 = VAR_6[VAR_3].d;

  if (VAR_9 && VAR_9->vc_mode == VAR_0 &&
      VAR_7->node == VAR_1[VAR_3]) {
   VAR_10 = &VAR_2[VAR_3];
   VAR_8->x = 1 << (VAR_9->vc_font.width - 1);
   VAR_8->y = 1 << (VAR_9->vc_font.height - 1);
   VAR_8->len = (VAR_10->userfont) ?
    FUNC_0(VAR_10->fontdata) : 256;
  }
 }
}
