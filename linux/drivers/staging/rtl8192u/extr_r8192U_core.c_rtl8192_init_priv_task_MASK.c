
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int irq_rx_tasklet; int qos_activate; int initialgain_operate_wq; int update_beacon_wq; int rfpath_check_wq; int txpower_tracking_wq; int watch_dog_wq; int reset_wq; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,void (*) (unsigned long),unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_2(VAR_8);


 FUNC_1(&VAR_9->reset_wq, VAR_5);

 FUNC_0(&VAR_9->watch_dog_wq,
     VAR_7);
 FUNC_0(&VAR_9->txpower_tracking_wq,
     VAR_2);
 FUNC_0(&VAR_9->rfpath_check_wq,
     VAR_1);
 FUNC_0(&VAR_9->update_beacon_wq,
     VAR_6);
 FUNC_0(&VAR_9->initialgain_operate_wq,
     VAR_0);
 FUNC_1(&VAR_9->qos_activate, VAR_4);

 FUNC_3(&VAR_9->irq_rx_tasklet,
       (void(*)(unsigned long))VAR_3,
       (unsigned long)VAR_9);
}
