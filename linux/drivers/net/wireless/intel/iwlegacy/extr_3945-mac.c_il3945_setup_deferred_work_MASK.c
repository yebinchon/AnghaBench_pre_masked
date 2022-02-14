
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rfkill_poll; } ;
struct il_priv {int irq_tasklet; int watchdog; TYPE_1__ _3945; int alive_start; int init_alive_start; int rx_replenish; int restart; int wait_command_queue; int workqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct il_priv*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct il_priv *VAR_8)
{
 VAR_8->workqueue = FUNC_2(VAR_0);

 FUNC_5(&VAR_8->wait_command_queue);

 FUNC_1(&VAR_8->restart, VAR_3);
 FUNC_1(&VAR_8->rx_replenish, VAR_4);
 FUNC_0(&VAR_8->init_alive_start, VAR_2);
 FUNC_0(&VAR_8->alive_start, VAR_1);
 FUNC_0(&VAR_8->_3945.rfkill_poll, VAR_6);

 FUNC_4(VAR_8);

 FUNC_3(VAR_8);

 FUNC_7(&VAR_8->watchdog, VAR_7, 0);

 FUNC_6(&VAR_8->irq_tasklet,
       (void (*)(unsigned long))VAR_5,
       (unsigned long)VAR_8);
}
