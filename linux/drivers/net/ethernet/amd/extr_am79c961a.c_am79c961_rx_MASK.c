
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_dropped; int rx_packets; int rx_length_errors; int rx_crc_errors; int rx_frame_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct dev_priv {int rxhdr; int rxtail; int* rxbuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct net_device*,int,int ,int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_7, struct dev_priv *VAR_8)
{
 do {
  struct sk_buff *VAR_9;
  u_int VAR_10;
  u_int VAR_11;
  u_int VAR_12;
  int VAR_13;

  VAR_10 = VAR_8->rxhdr + (VAR_8->rxtail << 3);
  VAR_11 = VAR_8->rxbuffer[VAR_8->rxtail];

  VAR_12 = FUNC_1 (VAR_7, VAR_10 + 2);
  if (VAR_12 & VAR_4)
   break;

  VAR_8->rxtail ++;
  if (VAR_8->rxtail >= VAR_6)
   VAR_8->rxtail = 0;

  if ((VAR_12 & (VAR_2|VAR_5|VAR_1)) != (VAR_5|VAR_1)) {
   FUNC_2 (VAR_7, VAR_10 + 2, VAR_4);
   VAR_7->stats.rx_errors++;
   if (VAR_12 & VAR_2) {
    if (VAR_12 & VAR_3)
     VAR_7->stats.rx_frame_errors++;
    if (VAR_12 & VAR_0)
     VAR_7->stats.rx_crc_errors++;
   } else if (VAR_12 & VAR_5)
    VAR_7->stats.rx_length_errors++;
   continue;
  }

  VAR_13 = FUNC_1(VAR_7, VAR_10 + 6);
  VAR_9 = FUNC_4(VAR_7, VAR_13 + 2);

  if (VAR_9) {
   FUNC_7(VAR_9, 2);

   FUNC_0(VAR_7, VAR_11, FUNC_6(VAR_9, VAR_13), VAR_13);
   FUNC_2(VAR_7, VAR_10 + 2, VAR_4);
   VAR_9->protocol = FUNC_3(VAR_9, VAR_7);
   FUNC_5(VAR_9);
   VAR_7->stats.rx_bytes += VAR_13;
   VAR_7->stats.rx_packets++;
  } else {
   FUNC_2 (VAR_7, VAR_10 + 2, VAR_4);
   VAR_7->stats.rx_dropped++;
   break;
  }
 } while (1);
}
