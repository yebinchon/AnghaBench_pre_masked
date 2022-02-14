
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {TYPE_3__ cmap; } ;
struct clcd_fb {TYPE_1__* board; int clk; int regs; TYPE_2__ fb; } ;
struct amba_device {int dummy; } ;
struct TYPE_4__ {int (* remove ) (struct clcd_fb*) ;} ;


 struct clcd_fb* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*) ;
 int FUNC_2 (struct clcd_fb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct clcd_fb*) ;
 int FUNC_8 (struct clcd_fb*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct amba_device *VAR_0)
{
 struct clcd_fb *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);
 FUNC_9(&VAR_1->fb);
 if (VAR_1->fb.cmap.len)
  FUNC_5(&VAR_1->fb.cmap);
 FUNC_6(VAR_1->regs);
 FUNC_4(VAR_1->clk);
 FUNC_3(VAR_1->clk);

 VAR_1->board->remove(VAR_1);

 FUNC_7(VAR_1);

 FUNC_1(VAR_0);

 return 0;
}
