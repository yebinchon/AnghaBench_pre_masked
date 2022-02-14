
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_device {int ctrl_wr_list; int ctrl_rd_list; int write_waiting_list; int write_list; } ;
struct mei_cl {scalar_t__ state; TYPE_1__* me_cl; scalar_t__ timer_count; scalar_t__ tx_flow_ctrl_creds; scalar_t__ rx_flow_ctrl_creds; struct mei_device* dev; } ;
struct TYPE_2__ {scalar_t__ connect_count; scalar_t__ tx_flow_ctrl_creds; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mei_cl*) ;
 int FUNC_2 (int *,struct mei_cl*) ;
 int FUNC_3 (int *,struct mei_cl*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct mei_cl *VAR_2)
{
 struct mei_device *VAR_3 = VAR_2->dev;

 if (VAR_2->state == VAR_0 ||
     VAR_2->state <= VAR_1)
  return;

 VAR_2->state = VAR_0;
 FUNC_3(&VAR_3->write_list, VAR_2);
 FUNC_3(&VAR_3->write_waiting_list, VAR_2);
 FUNC_2(&VAR_3->ctrl_rd_list, VAR_2);
 FUNC_2(&VAR_3->ctrl_wr_list, VAR_2);
 FUNC_1(VAR_2);
 VAR_2->rx_flow_ctrl_creds = 0;
 VAR_2->tx_flow_ctrl_creds = 0;
 VAR_2->timer_count = 0;

 if (!VAR_2->me_cl)
  return;

 if (!FUNC_0(VAR_2->me_cl->connect_count == 0))
  VAR_2->me_cl->connect_count--;

 if (VAR_2->me_cl->connect_count == 0)
  VAR_2->me_cl->tx_flow_ctrl_creds = 0;

 FUNC_4(VAR_2->me_cl);
 VAR_2->me_cl = ((void*)0);
}
