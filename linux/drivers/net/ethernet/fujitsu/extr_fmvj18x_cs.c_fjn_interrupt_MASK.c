
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short tx_packets; } ;
struct net_device {unsigned int base_addr; unsigned short name; TYPE_1__ stats; } ;
struct local_info {unsigned short sent; int tx_queue; int * base; scalar_t__ tx_started; scalar_t__ tx_queue_len; } ;
typedef int irqreturn_t ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct net_device*) ;
 unsigned short FUNC_1 (scalar_t__) ;
 struct local_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (unsigned short,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (char*,unsigned short,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_12, void *VAR_13)
{
    struct net_device *VAR_14 = VAR_13;
    struct local_info *VAR_15 = FUNC_2(VAR_14);
    unsigned int VAR_16;
    unsigned short VAR_17, VAR_18;

    VAR_16 = VAR_14->base_addr;


    FUNC_6(0x0000, VAR_16 + VAR_9);


    FUNC_8(1);


    VAR_17 = FUNC_1(VAR_16 + VAR_11);
    VAR_18 = FUNC_1(VAR_16 + VAR_8);


    FUNC_5(VAR_17, VAR_16 + VAR_11);
    FUNC_5(VAR_18, VAR_16 + VAR_8);

    FUNC_7("%s: interrupt, rx_status %02x.\n", VAR_14->name, VAR_18);
    FUNC_7("               tx_status %02x.\n", VAR_17);

    if (VAR_18 || (FUNC_1(VAR_16 + VAR_7) & VAR_3) == 0) {

 FUNC_0(VAR_14);
    }
    if (VAR_17 & VAR_4) {
 VAR_14->stats.tx_packets += VAR_15->sent ;
        VAR_15->sent = 0 ;
 if (VAR_15->tx_queue) {
     FUNC_5(VAR_0 | VAR_15->tx_queue, VAR_16 + VAR_10);
     VAR_15->sent = VAR_15->tx_queue ;
     VAR_15->tx_queue = 0;
     VAR_15->tx_queue_len = 0;
     FUNC_3(VAR_14);
 } else {
     VAR_15->tx_started = 0;
 }
 FUNC_4(VAR_14);
    }
    FUNC_7("%s: exiting interrupt,\n", VAR_14->name);
    FUNC_7("    tx_status %02x, rx_status %02x.\n", VAR_17, VAR_18);

    FUNC_5(VAR_2, VAR_16 + VAR_9);
    FUNC_5(VAR_1, VAR_16 + VAR_6);

    if (VAR_15->base != ((void*)0)) {

 FUNC_9(0x01, VAR_15->base+0x802);
 FUNC_9(0x09, VAR_15->base+0x822);
    }

    return VAR_5;

}
