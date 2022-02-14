
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct smc_private {int lock; scalar_t__ rx_ovrn; int packets_waiting; struct sk_buff* saved_skb; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int tx_dropped; int tx_aborted_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 short VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 short FUNC_2 (unsigned int) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct smc_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (short,unsigned int) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_8,
     struct net_device *VAR_9)
{
    struct smc_private *VAR_10 = FUNC_5(VAR_9);
    unsigned int VAR_11 = VAR_9->base_addr;
    u_short VAR_12;
    short VAR_13, VAR_14;
    unsigned long VAR_15;

    FUNC_6(VAR_9);

    FUNC_3(VAR_9, "smc_start_xmit(length = %d) called, status %04x\n",
        VAR_8->len, FUNC_2(VAR_11 + 2));

    if (VAR_10->saved_skb) {

 VAR_9->stats.tx_aborted_errors++;
 FUNC_3(VAR_9, "Internal error -- sent packet while busy\n");
 return VAR_6;
    }
    VAR_10->saved_skb = VAR_8;

    VAR_12 = VAR_8->len >> 8;

    if (VAR_12 > 7) {
 FUNC_4(VAR_9, "Far too big packet error: %d pages\n", VAR_12);
 FUNC_1 (VAR_8);
 VAR_10->saved_skb = ((void*)0);
 VAR_9->stats.tx_dropped++;
 return VAR_7;
    }

    VAR_10->packets_waiting++;

    FUNC_9(&VAR_10->lock, VAR_15);
    FUNC_0(2);


    if (VAR_10->rx_ovrn) {
 FUNC_7(VAR_3, VAR_11 + VAR_5);
 VAR_10->rx_ovrn = 0;
    }


    FUNC_7(VAR_2 | VAR_12, VAR_11 + VAR_5);
    for (VAR_13 = VAR_4; VAR_13 >= 0; VAR_13--) {
 VAR_14 = FUNC_2(VAR_11+VAR_1);
 if (VAR_14 & VAR_0) {

     FUNC_7((VAR_14&0xff00) | VAR_0, VAR_11 + VAR_1);
     FUNC_8(VAR_9);
     FUNC_10(&VAR_10->lock, VAR_15);
     return VAR_7;
 }
    }


    FUNC_3(VAR_9, "memory allocation deferred.\n");
    FUNC_7((VAR_0 << 8) | (VAR_14 & 0xff00), VAR_11 + VAR_1);
    FUNC_10(&VAR_10->lock, VAR_15);

    return VAR_7;
}
