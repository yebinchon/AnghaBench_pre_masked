
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gmc_brush_datatype; int gmc_rop3; } ;
union dp_gui_master_cntl_u {int val; TYPE_1__ f; } ;
struct fb_info {scalar_t__ state; int flags; } ;
struct fb_fillrect {int color; int dy; int dx; int width; int height; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_9,
                            const struct fb_fillrect *VAR_10)
{
 union dp_gui_master_cntl_u VAR_11;

 if (VAR_9->state != VAR_1)
  return;
 if (VAR_9->flags & VAR_0) {
  FUNC_0(VAR_9, VAR_10);
  return;
 }

 VAR_11.val = FUNC_1(VAR_8 + VAR_5);
 VAR_11.f.gmc_rop3 = VAR_3;
 VAR_11.f.gmc_brush_datatype = VAR_2;
 FUNC_2(2);
 FUNC_3(VAR_11.val, VAR_8 + VAR_5);
 FUNC_3(VAR_10->color, VAR_8 + VAR_4);

 FUNC_2(2);
 FUNC_3((VAR_10->dy << 16) | (VAR_10->dx & 0xffff), VAR_8 + VAR_7);
 FUNC_3((VAR_10->width << 16) | (VAR_10->height & 0xffff),
        VAR_8 + VAR_6);
}
