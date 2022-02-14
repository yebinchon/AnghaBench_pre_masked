
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smc_private {scalar_t__ manfid; scalar_t__ cardid; int base; } ;
struct pcmcia_device {int config_flags; unsigned int config_base; TYPE_1__** resource; struct net_device* priv; } ;
struct net_device {scalar_t__ base_addr; } ;
struct TYPE_4__ {int flags; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int VAR_10 ;
 struct smc_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct pcmcia_device*,int ,int *) ;
 int FUNC_4 (struct pcmcia_device*,TYPE_1__*,unsigned int) ;
 int FUNC_5 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_11)
{
    struct net_device *VAR_12 = VAR_11->priv;
    struct smc_private *VAR_13 = FUNC_2(VAR_12);
    unsigned int VAR_14;
    int VAR_15;

    VAR_11->config_flags |= VAR_2 | VAR_1 |
     VAR_0;



    if (FUNC_3(VAR_11, VAR_10, ((void*)0)))
     return -VAR_3;

    VAR_12->base_addr = VAR_11->resource[0]->start;


    VAR_11->resource[2]->flags = VAR_7|VAR_9|VAR_8;
    VAR_11->resource[2]->start = VAR_11->resource[2]->end = 0;
    VAR_15 = FUNC_5(VAR_11, VAR_11->resource[2], 0);
    if (VAR_15 != 0)
     return -VAR_3;

    VAR_13->base = FUNC_0(VAR_11->resource[2]->start,
      FUNC_6(VAR_11->resource[2]));
    VAR_14 = (VAR_13->manfid == VAR_5) ? VAR_11->config_base : 0;
    VAR_15 = FUNC_4(VAR_11, VAR_11->resource[2], VAR_14);
    if ((VAR_15 == 0) &&
 (VAR_13->manfid == VAR_4) &&
 (VAR_13->cardid == VAR_6))
     FUNC_1(VAR_11);

    return 0;
}
