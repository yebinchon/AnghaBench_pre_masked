
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {short len; unsigned char* data; } ;
struct TYPE_2__ {short tx_bytes; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;
struct local_info {int tx_queue; int tx_queue_len; int tx_started; int sent; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*,char*,unsigned long) ;
 int FUNC_2 (struct net_device*,char*,short) ;
 struct local_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (scalar_t__,unsigned char*,short) ;
 int FUNC_8 (short,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*,short) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_12,
     struct net_device *VAR_13)
{
    struct local_info *VAR_14 = FUNC_3(VAR_13);
    unsigned int VAR_15 = VAR_13->base_addr;
    short VAR_16 = VAR_12->len;

    if (VAR_16 < VAR_5)
    {
     if (FUNC_9(VAR_12, VAR_5))
      return VAR_7;
     VAR_16 = VAR_5;
    }

    FUNC_5(VAR_13);

    {
 unsigned char *VAR_17 = VAR_12->data;

 if (VAR_16 > VAR_4) {
     FUNC_2(VAR_13, "Attempting to send a large packet (%d bytes)\n",
     VAR_16);
     return VAR_6;
 }

 FUNC_1(VAR_13, "Transmitting a packet of length %lu\n",
     (unsigned long)VAR_12->len);
 VAR_13->stats.tx_bytes += VAR_12->len;


 FUNC_8(0x0000, VAR_15 + VAR_9);


 FUNC_10(1);

 FUNC_8(VAR_16, VAR_15 + VAR_0);
 FUNC_7(VAR_15 + VAR_0, VAR_17, (VAR_16 + 1) >> 1);

 VAR_14->tx_queue++;
 VAR_14->tx_queue_len += ((VAR_16+3) & ~1);

 if (VAR_14->tx_started == 0) {

     FUNC_6(VAR_1 | VAR_14->tx_queue, VAR_15 + VAR_10);
     VAR_14->sent = VAR_14->tx_queue ;
     VAR_14->tx_queue = 0;
     VAR_14->tx_queue_len = 0;
     VAR_14->tx_started = 1;
     FUNC_4(VAR_13);
 } else {
     if( VAR_11 == 0 ) {
  if (VAR_14->tx_queue_len < (4096 - (VAR_4 +2)) )

      FUNC_4(VAR_13);
     } else {
  if (VAR_14->tx_queue_len < (8192 - (VAR_4 +2)) &&
      VAR_14->tx_queue < 127 )

      FUNC_4(VAR_13);
     }
 }


 FUNC_6(VAR_3, VAR_15 + VAR_9);
 FUNC_6(VAR_2, VAR_15 + VAR_8);
    }
    FUNC_0 (VAR_12);

    return VAR_7;
}
