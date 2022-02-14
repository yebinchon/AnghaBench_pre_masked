
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int irq_tasklet; int qos_activate; int merge_networks; int led_act_off; int led_link_off; int led_link_on; int link_down; int link_up; int scan_check; int roam; int abort_scan; int gather_stats; int scan_event; int request_passive_scan; int request_direct_scan; int request_scan; int down; int up; int rf_kill; int adapter_restart; int rx_replenish; int system_config; int disassociate; int associate; int adhoc_check; int wait_state; int wait_command_queue; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int *,void (*) (unsigned long),unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ipw_priv *VAR_25)
{
 int VAR_26 = 0;

 FUNC_2(&VAR_25->wait_command_queue);
 FUNC_2(&VAR_25->wait_state);

 FUNC_0(&VAR_25->adhoc_check, VAR_2);
 FUNC_1(&VAR_25->associate, VAR_3);
 FUNC_1(&VAR_25->disassociate, VAR_4);
 FUNC_1(&VAR_25->system_config, VAR_24);
 FUNC_1(&VAR_25->rx_replenish, VAR_15);
 FUNC_1(&VAR_25->adapter_restart, VAR_1);
 FUNC_0(&VAR_25->rf_kill, VAR_13);
 FUNC_1(&VAR_25->up, VAR_17);
 FUNC_1(&VAR_25->down, VAR_5);
 FUNC_0(&VAR_25->request_scan, VAR_22);
 FUNC_0(&VAR_25->request_direct_scan, VAR_20);
 FUNC_0(&VAR_25->request_passive_scan, VAR_21);
 FUNC_0(&VAR_25->scan_event, VAR_23);
 FUNC_0(&VAR_25->gather_stats, VAR_6);
 FUNC_1(&VAR_25->abort_scan, VAR_0);
 FUNC_1(&VAR_25->roam, VAR_14);
 FUNC_0(&VAR_25->scan_check, VAR_16);
 FUNC_1(&VAR_25->link_up, VAR_11);
 FUNC_1(&VAR_25->link_down, VAR_10);
 FUNC_0(&VAR_25->led_link_on, VAR_9);
 FUNC_0(&VAR_25->led_link_off, VAR_8);
 FUNC_0(&VAR_25->led_act_off, VAR_7);
 FUNC_1(&VAR_25->merge_networks, VAR_19);





 FUNC_3(&VAR_25->irq_tasklet, (void (*)(unsigned long))
       VAR_18, (unsigned long)VAR_25);

 return VAR_26;
}
