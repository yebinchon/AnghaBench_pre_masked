
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ac100_rtc_dev {TYPE_2__* rtc_32k_clk; TYPE_1__* dev; } ;
struct TYPE_4__ {int clk; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ac100_rtc_dev *VAR_0)
{
 FUNC_1(VAR_0->dev->of_node);
 FUNC_0(VAR_0->rtc_32k_clk->clk);
}
