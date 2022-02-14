
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xircom_private {int * rx_buffer; } ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {short rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct net_device*,short) ;
 int FUNC_4 (struct net_device*,char*,short) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int *,short) ;
 int FUNC_7 (struct sk_buff*,short) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct xircom_private*) ;

__attribute__((used)) static void
FUNC_10(struct net_device *VAR_0, struct xircom_private *VAR_1,
       int VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->rx_buffer[4*VAR_2]);

 if (VAR_4 > 0) {



  short VAR_5 = ((VAR_4 >> 16) & 0x7ff) - 4;

  struct sk_buff *VAR_6;

  if (VAR_5 > 1518) {
   FUNC_4(VAR_0, "Packet length %i is bogus\n", VAR_5);
   VAR_5 = 1518;
  }

  VAR_6 = FUNC_3(VAR_0, VAR_5 + 2);
  if (VAR_6 == ((void*)0)) {
   VAR_0->stats.rx_dropped++;
   goto out;
  }
  FUNC_8(VAR_6, 2);
  FUNC_6(VAR_6,
     &VAR_1->rx_buffer[VAR_3 / 4],
     VAR_5);
  FUNC_7(VAR_6, VAR_5);
  VAR_6->protocol = FUNC_1(VAR_6, VAR_0);
  FUNC_5(VAR_6);
  VAR_0->stats.rx_packets++;
  VAR_0->stats.rx_bytes += VAR_5;

out:

  VAR_1->rx_buffer[4*VAR_2] = FUNC_0(0x80000000);
  FUNC_9(VAR_1);
 }
}
