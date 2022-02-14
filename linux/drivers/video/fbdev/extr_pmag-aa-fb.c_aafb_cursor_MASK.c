
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fb_info {struct aafb_par* par; } ;
struct TYPE_2__ {int height; int width; int data; scalar_t__ bg_color; scalar_t__ fg_color; int dy; int dx; } ;
struct fb_cursor {int set; scalar_t__ enable; TYPE_1__ image; int rop; int mask; } ;
struct aafb_par {int bt431; int bt455; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_7, struct fb_cursor *VAR_8)
{
 struct aafb_par *VAR_9 = VAR_7->par;

 if (VAR_8->image.height > VAR_0 ||
     VAR_8->image.width > VAR_0) {
  FUNC_1(VAR_9->bt431);
  return -VAR_1;
 }

 if (!VAR_8->enable)
  FUNC_1(VAR_9->bt431);

 if (VAR_8->set & VAR_4)
  FUNC_2(VAR_9->bt431,
          VAR_8->image.dx, VAR_8->image.dy);
 if (VAR_8->set & VAR_2) {
  u8 VAR_10 = VAR_8->image.fg_color ? 0xf : 0x0;
  u8 VAR_11 = VAR_8->image.bg_color ? 0xf : 0x0;

  FUNC_4(VAR_9->bt455, 8, VAR_11);
  FUNC_5(VAR_9->bt455, VAR_11);
  FUNC_6(VAR_9->bt455, VAR_10);
 }
 if (VAR_8->set & (VAR_6 | VAR_5 | VAR_3))
  FUNC_3(VAR_9->bt431,
     VAR_8->image.data, VAR_8->mask, VAR_8->rop,
     VAR_8->image.width, VAR_8->image.height);

 if (VAR_8->enable)
  FUNC_0(VAR_9->bt431);

 return 0;
}
