
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_rtc_dev {int alarm_clk_enabled; int alarm_lock; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct pic32_rtc_dev *VAR_0,
           bool VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->alarm_lock, VAR_2);
 if (VAR_1) {
  if (!VAR_0->alarm_clk_enabled) {
   FUNC_1(VAR_0->clk);
   VAR_0->alarm_clk_enabled = 1;
  }
 } else {
  if (VAR_0->alarm_clk_enabled) {
   FUNC_0(VAR_0->clk);
   VAR_0->alarm_clk_enabled = 0;
  }
 }
 FUNC_3(&VAR_0->alarm_lock, VAR_2);
}
