
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_private {scalar_t__ base; } ;
struct pcmcia_device {TYPE_1__** resource; struct net_device* priv; } ;
struct net_device {unsigned int base_addr; } ;
struct TYPE_2__ {unsigned int start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 struct smc_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_6)
{
    struct net_device *VAR_7 = VAR_6->priv;
    struct smc_private *VAR_8 = FUNC_1(VAR_7);
    unsigned int VAR_9 = VAR_7->base_addr;
    unsigned int VAR_10 = VAR_6->resource[1]->start;


    FUNC_2(VAR_10 & 0xff, VAR_8->base + VAR_5 + VAR_1);
    FUNC_2((VAR_10 >> 8) & 0xff, VAR_8->base + VAR_5 + VAR_2);
    FUNC_2(VAR_4, VAR_8->base + VAR_5 + VAR_0);


    FUNC_2(VAR_9 & 0xff, VAR_8->base + VAR_3 + VAR_1);
    FUNC_2((VAR_9 >> 8) & 0xff, VAR_8->base + VAR_3 + VAR_2);
    FUNC_2(VAR_4, VAR_8->base + VAR_3 + VAR_0);


    FUNC_0(100);
}
