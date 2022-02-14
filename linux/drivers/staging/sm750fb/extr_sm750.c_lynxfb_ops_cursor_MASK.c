
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct lynx_cursor {scalar_t__ maxW; scalar_t__ maxH; } ;
struct lynxfb_crtc {struct lynx_cursor cursor; } ;
struct lynxfb_par {struct lynxfb_crtc crtc; } ;
struct TYPE_5__ {int* red; int* green; int* blue; } ;
struct TYPE_4__ {scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct fb_info {TYPE_2__ cmap; TYPE_1__ var; struct lynxfb_par* par; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; int depth; size_t fg_color; size_t bg_color; int data; scalar_t__ dy; scalar_t__ dx; } ;
struct fb_cursor {int set; scalar_t__ enable; int mask; TYPE_3__ image; int rop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lynx_cursor*) ;
 int FUNC_1 (struct lynx_cursor*) ;
 int FUNC_2 (struct lynx_cursor*,int,int) ;
 int FUNC_3 (struct lynx_cursor*,int ,int ,int ) ;
 int FUNC_4 (struct lynx_cursor*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct lynx_cursor*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_6, struct fb_cursor *VAR_7)
{
 struct lynxfb_par *VAR_8;
 struct lynxfb_crtc *VAR_9;
 struct lynx_cursor *VAR_10;

 VAR_8 = VAR_6->par;
 VAR_9 = &VAR_8->crtc;
 VAR_10 = &VAR_9->cursor;

 if (VAR_7->image.width > VAR_10->maxW ||
     VAR_7->image.height > VAR_10->maxH ||
     VAR_7->image.depth > 1) {
  return -VAR_0;
 }

 FUNC_0(VAR_10);
 if (VAR_7->set & VAR_5)
  FUNC_5(VAR_10,
     VAR_7->image.width,
     VAR_7->image.height);

 if (VAR_7->set & VAR_3)
  FUNC_4(VAR_10,
           VAR_7->image.dx - VAR_6->var.xoffset,
           VAR_7->image.dy - VAR_6->var.yoffset);

 if (VAR_7->set & VAR_1) {

  u16 VAR_11, VAR_12;

  VAR_11 = ((VAR_6->cmap.red[VAR_7->image.fg_color] & 0xf800)) |
       ((VAR_6->cmap.green[VAR_7->image.fg_color] & 0xfc00) >> 5) |
       ((VAR_6->cmap.blue[VAR_7->image.fg_color] & 0xf800) >> 11);

  VAR_12 = ((VAR_6->cmap.red[VAR_7->image.bg_color] & 0xf800)) |
       ((VAR_6->cmap.green[VAR_7->image.bg_color] & 0xfc00) >> 5) |
       ((VAR_6->cmap.blue[VAR_7->image.bg_color] & 0xf800) >> 11);

  FUNC_2(VAR_10, VAR_11, VAR_12);
 }

 if (VAR_7->set & (VAR_4 | VAR_2)) {
  FUNC_3(VAR_10,
     VAR_7->rop,
     VAR_7->image.data,
     VAR_7->mask);
 }

 if (VAR_7->enable)
  FUNC_1(VAR_10);

 return 0;
}
