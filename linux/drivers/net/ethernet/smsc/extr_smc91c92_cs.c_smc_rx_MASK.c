
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_private {int last_rx; } ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_crc_errors; int rx_length_errors; int rx_frame_errors; int rx_errors; int multicast; int rx_packets; int rx_dropped; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_16 ;
 struct sk_buff* FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct smc_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_17)
{
    unsigned int VAR_18 = VAR_17->base_addr;
    int VAR_19;
    int VAR_20;




    if (FUNC_2(VAR_18 + VAR_1) & VAR_2) {
 FUNC_5(VAR_17, "smc_rx() with nothing on Rx FIFO\n");
 return;
    }


    FUNC_8(VAR_8 | VAR_7 | VAR_6, VAR_18 + VAR_5);
    VAR_19 = FUNC_2(VAR_18 + VAR_0);
    VAR_20 = FUNC_2(VAR_18 + VAR_0) & 0x07ff;

    FUNC_4(VAR_17, "Receive status %4.4x length %d.\n",
        VAR_19, VAR_20);

    if (!(VAR_19 & VAR_11)) {

 struct sk_buff *VAR_21;
 struct smc_private *VAR_22 = FUNC_6(VAR_17);


 VAR_21 = FUNC_3(VAR_17, VAR_20+2);

 if (VAR_21 == ((void*)0)) {
     FUNC_4(VAR_17, "Low memory, packet dropped.\n");
     VAR_17->stats.rx_dropped++;
     FUNC_8(VAR_3, VAR_18 + VAR_4);
     return;
 }

 VAR_20 -= (VAR_19 & VAR_13 ? 5 : 6);
 FUNC_10(VAR_21, 2);
 FUNC_1(VAR_18+VAR_0, FUNC_9(VAR_21, VAR_20),
      (VAR_20+1)>>1);
 VAR_21->protocol = FUNC_0(VAR_21, VAR_17);

 FUNC_7(VAR_21);
 VAR_22->last_rx = VAR_16;
 VAR_17->stats.rx_packets++;
 VAR_17->stats.rx_bytes += VAR_20;
 if (VAR_19 & VAR_12)
     VAR_17->stats.multicast++;
    } else {

 VAR_17->stats.rx_errors++;

 if (VAR_19 & VAR_9) VAR_17->stats.rx_frame_errors++;
 if (VAR_19 & (VAR_15 | VAR_14))
     VAR_17->stats.rx_length_errors++;
 if (VAR_19 & VAR_10) VAR_17->stats.rx_crc_errors++;
    }

    FUNC_8(VAR_3, VAR_18 + VAR_4);
}
