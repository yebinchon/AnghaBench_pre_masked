
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_flags; TYPE_1__** resource; struct net_device* priv; } ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3)
{
    struct net_device *VAR_4 = VAR_3->priv;
    int VAR_5;

    VAR_3->config_flags |= VAR_1 | VAR_0;

    VAR_5 = FUNC_0(VAR_3, VAR_2, ((void*)0));
    if (!VAR_5)
     VAR_4->base_addr = VAR_3->resource[0]->start;

    return VAR_5;
}
