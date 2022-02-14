
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int b_srp_done; scalar_t__ power_up; scalar_t__ b_bus_req; } ;
struct ci_hdrc {int dev; TYPE_1__ fsm; } ;


 int VAR_0 ;
 int FUNC_0 (struct ci_hdrc*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ci_hdrc *VAR_1)
{
 VAR_1->fsm.b_srp_done = 1;
 VAR_1->fsm.b_bus_req = 0;
 if (VAR_1->fsm.power_up)
  VAR_1->fsm.power_up = 0;
 FUNC_0(VAR_1, VAR_0, 0);
 FUNC_1(VAR_1->dev);
 return 0;
}
