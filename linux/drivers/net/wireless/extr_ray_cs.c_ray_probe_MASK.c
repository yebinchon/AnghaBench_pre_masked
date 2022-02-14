
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcmcia_device {int config_index; int dev; struct net_device* priv; int config_flags; TYPE_1__** resource; } ;
struct net_device {TYPE_2__* wireless_data; int * wireless_handlers; int * netdev_ops; } ;
struct TYPE_6__ {int * spy_data; } ;
struct TYPE_7__ {int timer; TYPE_2__ wireless_data; int spy_data; scalar_t__ num_multi; int authentication_state; int card_status; struct pcmcia_device* finder; } ;
typedef TYPE_3__ ray_dev_t ;
struct TYPE_5__ {int flags; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_3__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pcmcia_device* VAR_8 ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_9)
{
 ray_dev_t *VAR_10;
 struct net_device *VAR_11;

 FUNC_1(&VAR_9->dev, "ray_attach()\n");


 VAR_11 = FUNC_0(sizeof(ray_dev_t));
 if (!VAR_11)
  goto fail_alloc_dev;

 VAR_10 = FUNC_2(VAR_11);
 VAR_10->finder = VAR_9;


 VAR_9->resource[0]->end = 0;
 VAR_9->resource[0]->flags |= VAR_3;


 VAR_9->config_flags |= VAR_1;
 VAR_9->config_index = 1;

 VAR_9->priv = VAR_11;

 VAR_10->finder = VAR_9;
 VAR_10->card_status = VAR_0;
 VAR_10->authentication_state = VAR_4;
 VAR_10->num_multi = 0;
 FUNC_1(&VAR_9->dev, "ray_attach p_dev = %p,  dev = %p,  local = %p, intr = %p\n",
       VAR_9, VAR_11, VAR_10, &VAR_6);


 VAR_11->netdev_ops = &VAR_7;
 VAR_11->wireless_handlers = &VAR_5;






 FUNC_1(&VAR_9->dev, "ray_cs ray_attach calling ether_setup.)\n");
 FUNC_3(VAR_11);

 FUNC_5(&VAR_10->timer, ((void*)0), 0);

 VAR_8 = VAR_9;
 return FUNC_4(VAR_9);

fail_alloc_dev:
 return -VAR_2;
}
