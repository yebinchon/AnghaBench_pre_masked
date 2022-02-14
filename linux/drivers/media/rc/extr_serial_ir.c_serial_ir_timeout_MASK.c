
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ir_raw_event {int timeout; int duration; } ;
struct TYPE_5__ {int timeout; } ;
struct TYPE_4__ {TYPE_2__* rcdev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,struct ir_raw_event*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_1)
{
 struct ir_raw_event VAR_2 = {
  .timeout = 1,
  .duration = VAR_0.rcdev->timeout
 };
 FUNC_1(VAR_0.rcdev, &VAR_2);
 FUNC_0(VAR_0.rcdev);
}
