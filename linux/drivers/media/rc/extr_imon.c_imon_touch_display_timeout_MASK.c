
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct imon_context {scalar_t__ display_type; int touch; int touch_y; int touch_x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct imon_context* FUNC_0 (int ,struct timer_list*,int ) ;
 struct imon_context* VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_6)
{
 struct imon_context *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);

 if (VAR_7->display_type != VAR_3)
  return;

 FUNC_1(VAR_7->touch, VAR_0, VAR_7->touch_x);
 FUNC_1(VAR_7->touch, VAR_1, VAR_7->touch_y);
 FUNC_2(VAR_7->touch, VAR_2, 0x00);
 FUNC_3(VAR_7->touch);
}
