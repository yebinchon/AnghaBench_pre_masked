
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* msg; int complete; } ;
struct TYPE_4__ {int curr_bank; int next_bank; } ;
struct sdw_bus {TYPE_2__ defer_msg; TYPE_1__ params; int dev; int bank_switch_timeout; int multi_link; } ;
struct TYPE_6__ {struct TYPE_6__* buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 unsigned long FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct sdw_bus *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1->multi_link)
  return 0;


 VAR_2 = FUNC_2(&VAR_1->defer_msg.complete,
      VAR_1->bank_switch_timeout);

 if (!VAR_2) {
  FUNC_0(VAR_1->dev, "Controller Timed out on bank switch\n");
  return -VAR_0;
 }

 VAR_1->params.curr_bank = !VAR_1->params.curr_bank;
 VAR_1->params.next_bank = !VAR_1->params.next_bank;

 if (VAR_1->defer_msg.msg) {
  FUNC_1(VAR_1->defer_msg.msg->buf);
  FUNC_1(VAR_1->defer_msg.msg);
 }

 return 0;
}
