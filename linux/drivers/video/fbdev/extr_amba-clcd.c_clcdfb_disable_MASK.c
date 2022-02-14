
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct clcd_fb {int clk_enabled; int clk; scalar_t__ off_cntl; scalar_t__ regs; TYPE_3__* panel; TYPE_1__* board; } ;
struct TYPE_6__ {int power; } ;
struct TYPE_8__ {TYPE_2__ props; } ;
struct TYPE_7__ {TYPE_4__* backlight; } ;
struct TYPE_5__ {int (* disable ) (struct clcd_fb*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct clcd_fb*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct clcd_fb *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->board->disable)
  VAR_3->board->disable(VAR_3);

 if (VAR_3->panel->backlight) {
  VAR_3->panel->backlight->props.power = VAR_2;
  FUNC_0(VAR_3->panel->backlight);
 }

 VAR_4 = FUNC_3(VAR_3->regs + VAR_3->off_cntl);
 if (VAR_4 & VAR_1) {
  VAR_4 &= ~VAR_1;
  FUNC_5(VAR_4, VAR_3->regs + VAR_3->off_cntl);

  FUNC_1(20);
 }
 if (VAR_4 & VAR_0) {
  VAR_4 &= ~VAR_0;
  FUNC_5(VAR_4, VAR_3->regs + VAR_3->off_cntl);
 }




 if (VAR_3->clk_enabled) {
  VAR_3->clk_enabled = 0;
  FUNC_2(VAR_3->clk);
 }
}
