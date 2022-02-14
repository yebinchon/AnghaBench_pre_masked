
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xircom_private {scalar_t__* tx_buffer; TYPE_2__** tx_skb; } ;
struct TYPE_3__ {int tx_packets; int collisions; int tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_0,
        struct xircom_private *VAR_1,
        int VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->tx_buffer[4*VAR_2]);







 if (VAR_4 > 0) {
  if (VAR_1->tx_skb[VAR_2]!=((void*)0)) {
   VAR_0->stats.tx_bytes += VAR_1->tx_skb[VAR_2]->len;
   FUNC_0(VAR_1->tx_skb[VAR_2]);
  }
  VAR_1->tx_skb[VAR_2] = ((void*)0);

  if (VAR_4 & (1 << 8))
   VAR_0->stats.collisions++;
  VAR_1->tx_buffer[4*VAR_2] = 0;
  FUNC_2 (VAR_0);
  VAR_0->stats.tx_packets++;
 }
}
