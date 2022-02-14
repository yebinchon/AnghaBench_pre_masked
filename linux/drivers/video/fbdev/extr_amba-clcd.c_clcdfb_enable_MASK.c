
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct clcd_fb {int clk_enabled; TYPE_3__* board; TYPE_2__* panel; scalar_t__ off_cntl; scalar_t__ regs; int clk; } ;
struct TYPE_5__ {int power; } ;
struct TYPE_8__ {TYPE_1__ props; } ;
struct TYPE_7__ {int (* enable ) (struct clcd_fb*) ;} ;
struct TYPE_6__ {TYPE_4__* backlight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct clcd_fb*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct clcd_fb *VAR_3, u32 VAR_4)
{



 if (!VAR_3->clk_enabled) {
  VAR_3->clk_enabled = 1;
  FUNC_2(VAR_3->clk);
 }




 VAR_4 |= VAR_0;
 FUNC_4(VAR_4, VAR_3->regs + VAR_3->off_cntl);

 FUNC_1(20);




 VAR_4 |= VAR_1;
 FUNC_4(VAR_4, VAR_3->regs + VAR_3->off_cntl);




 if (VAR_3->panel->backlight) {
  VAR_3->panel->backlight->props.power = VAR_2;
  FUNC_0(VAR_3->panel->backlight);
 }




 if (VAR_3->board->enable)
  VAR_3->board->enable(VAR_3);
}
