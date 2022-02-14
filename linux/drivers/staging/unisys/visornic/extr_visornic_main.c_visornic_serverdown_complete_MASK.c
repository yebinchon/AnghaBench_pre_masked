
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ got_xmit_done; scalar_t__ sent_xmit; } ;
struct visornic_devdata {int server_down; int server_change_state; int (* server_down_complete_func ) (int ,int ) ;int dev; TYPE_1__ chstat; int num_rcvbuf_in_iovm; int irq_poll_timer; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct visornic_devdata *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;


 FUNC_1(&VAR_0->irq_poll_timer);

 FUNC_3();
 FUNC_2(VAR_1);
 FUNC_4();

 FUNC_0(&VAR_0->num_rcvbuf_in_iovm, 0);
 VAR_0->chstat.sent_xmit = 0;
 VAR_0->chstat.got_xmit_done = 0;

 if (VAR_0->server_down_complete_func)
  (*VAR_0->server_down_complete_func)(VAR_0->dev, 0);

 VAR_0->server_down = 1;
 VAR_0->server_change_state = 0;
 VAR_0->server_down_complete_func = ((void*)0);
}
