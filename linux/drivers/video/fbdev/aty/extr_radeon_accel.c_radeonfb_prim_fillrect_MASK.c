
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {int dp_gui_master_cntl; int* pseudo_palette; int depth; } ;
struct fb_fillrect {size_t color; int dy; int dx; int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct radeonfb_info *VAR_16,
       const struct fb_fillrect *VAR_17)
{
 FUNC_1(4);

 FUNC_0(VAR_2,
  VAR_16->dp_gui_master_cntl
                | VAR_10
                | VAR_12);
 if (FUNC_2(VAR_16->depth) != VAR_5)
  FUNC_0(VAR_0, VAR_16->pseudo_palette[VAR_17->color]);
 else
  FUNC_0(VAR_0, VAR_17->color);
 FUNC_0(VAR_3, 0xffffffff);
 FUNC_0(VAR_1, (VAR_7 | VAR_8));

 FUNC_1(2);
 FUNC_0(VAR_4, VAR_11);
 FUNC_0(VAR_15, (VAR_13 | VAR_14));

 FUNC_1(2);
 FUNC_0(VAR_9, (VAR_17->dy << 16) | VAR_17->dx);
 FUNC_0(VAR_6, (VAR_17->width << 16) | VAR_17->height);
}
