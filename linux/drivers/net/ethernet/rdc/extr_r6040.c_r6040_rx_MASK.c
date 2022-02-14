
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int data; int protocol; int dev; } ;
struct r6040_private {struct r6040_descriptor* rx_remove_ptr; int pdev; int dev; int lock; } ;
struct r6040_descriptor {int status; struct r6040_descriptor* vndescp; struct sk_buff* skb_ptr; int buf; scalar_t__ len; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_crc_errors; int rx_length_errors; int rx_frame_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct net_device*,int ) ;
 struct r6040_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_9, int VAR_10)
{
 struct r6040_private *VAR_11 = FUNC_4(VAR_9);
 struct r6040_descriptor *VAR_12 = VAR_11->rx_remove_ptr;
 struct sk_buff *VAR_13, *VAR_14;
 int VAR_15 = 0;
 u16 VAR_16;


 while (VAR_15 < VAR_10 && !(VAR_12->status & VAR_0)) {

  VAR_16 = VAR_12->status;

  if (VAR_16 & VAR_1) {

   if (VAR_16 & VAR_4)
    VAR_9->stats.rx_frame_errors++;

   if (VAR_16 & VAR_2)
    VAR_9->stats.rx_length_errors++;

   if (VAR_16 & VAR_5)
    VAR_9->stats.rx_length_errors++;

   if (VAR_16 & VAR_6)
    VAR_9->stats.rx_length_errors++;

   if (VAR_16 & VAR_3) {
    FUNC_9(&VAR_11->lock);
    VAR_9->stats.rx_crc_errors++;
    FUNC_10(&VAR_11->lock);
   }
   goto next_descr;
  }


  VAR_14 = FUNC_3(VAR_9, VAR_7);
  if (!VAR_14) {
   VAR_9->stats.rx_dropped++;
   goto next_descr;
  }
  VAR_13 = VAR_12->skb_ptr;
  VAR_13->dev = VAR_11->dev;


  FUNC_8(VAR_13, VAR_12->len - 4);
  FUNC_7(VAR_11->pdev, FUNC_2(VAR_12->buf),
     VAR_7, VAR_8);
  VAR_13->protocol = FUNC_1(VAR_13, VAR_11->dev);


  FUNC_5(VAR_13);
  VAR_9->stats.rx_packets++;
  VAR_9->stats.rx_bytes += VAR_12->len - 4;


  VAR_12->skb_ptr = VAR_14;
  VAR_12->buf = FUNC_0(FUNC_6(VAR_11->pdev,
      VAR_12->skb_ptr->data,
     VAR_7, VAR_8));

next_descr:

  VAR_12->status = VAR_0;
  VAR_12 = VAR_12->vndescp;
  VAR_15++;
 }
 VAR_11->rx_remove_ptr = VAR_12;

 return VAR_15;
}
