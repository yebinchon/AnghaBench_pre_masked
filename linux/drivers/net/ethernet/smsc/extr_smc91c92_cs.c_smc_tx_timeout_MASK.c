
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_private {int * saved_skb; } ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct net_device*,char*,int,int) ;
 struct smc_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
    struct smc_private *VAR_1 = FUNC_2(VAR_0);
    unsigned int VAR_2 = VAR_0->base_addr;

    FUNC_1(VAR_0, "transmit timed out, Tx_status %2.2x status %4.4x.\n",
    FUNC_0(VAR_2)&0xff, FUNC_0(VAR_2 + 2));
    VAR_0->stats.tx_errors++;
    FUNC_5(VAR_0);
    FUNC_3(VAR_0);
    VAR_1->saved_skb = ((void*)0);
    FUNC_4(VAR_0);
}
