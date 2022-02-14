
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * spy_data; } ;
struct wl3501_card {TYPE_2__ wireless_data; struct pcmcia_device* p_dev; int spy_data; } ;
struct pcmcia_device {int config_index; struct net_device* priv; int config_flags; TYPE_1__** resource; } ;
struct net_device {int watchdog_timeo; int * wireless_handlers; TYPE_2__* wireless_data; int * netdev_ops; } ;
struct TYPE_3__ {int end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_6)
{
 struct net_device *VAR_7;
 struct wl3501_card *VAR_8;


 VAR_6->resource[0]->end = 16;
 VAR_6->resource[0]->flags = VAR_3;


 VAR_6->config_flags = VAR_0;
 VAR_6->config_index = 1;

 VAR_7 = FUNC_0(sizeof(struct wl3501_card));
 if (!VAR_7)
  goto out_link;


 VAR_7->netdev_ops = &VAR_5;
 VAR_7->watchdog_timeo = 5 * VAR_2;

 VAR_8 = FUNC_1(VAR_7);
 VAR_8->wireless_data.spy_data = &VAR_8->spy_data;
 VAR_8->p_dev = VAR_6;
 VAR_7->wireless_data = &VAR_8->wireless_data;
 VAR_7->wireless_handlers = &VAR_4;
 FUNC_2(VAR_7);
 VAR_6->priv = VAR_7;

 return FUNC_3(VAR_6);
out_link:
 return -VAR_1;
}
