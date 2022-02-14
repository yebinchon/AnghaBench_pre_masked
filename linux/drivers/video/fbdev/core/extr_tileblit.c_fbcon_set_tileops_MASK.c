
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct vc_data {TYPE_1__ vc_font; } ;
struct fbcon_ops {TYPE_2__* p; int update_start; int cursor; int clear_margins; int putcs; int clear; int bmove; } ;
struct fb_tilemap {int depth; int length; int data; int height; int width; } ;
struct fb_info {TYPE_3__* tileops; struct fbcon_ops* fbcon_par; } ;
struct TYPE_6__ {int (* fb_settile ) (struct fb_info*,struct fb_tilemap*) ;} ;
struct TYPE_5__ {int fontdata; scalar_t__ userfont; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fb_info*,struct fb_tilemap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(struct vc_data *VAR_6, struct fb_info *VAR_7)
{
 struct fb_tilemap VAR_8;
 struct fbcon_ops *VAR_9 = VAR_7->fbcon_par;

 VAR_9->bmove = VAR_0;
 VAR_9->clear = VAR_1;
 VAR_9->putcs = VAR_4;
 VAR_9->clear_margins = VAR_2;
 VAR_9->cursor = VAR_3;
 VAR_9->update_start = VAR_5;

 if (VAR_9->p) {
  VAR_8.width = VAR_6->vc_font.width;
  VAR_8.height = VAR_6->vc_font.height;
  VAR_8.depth = 1;
  VAR_8.length = (VAR_9->p->userfont) ?
   FUNC_0(VAR_9->p->fontdata) : 256;
  VAR_8.data = VAR_9->p->fontdata;
  VAR_7->tileops->fb_settile(VAR_7, &VAR_8);
 }
}
