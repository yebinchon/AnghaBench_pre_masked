
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct ethoc_bd {int stat; } ;
struct ethoc {unsigned int num_tx; unsigned int cur_rx; scalar_t__ num_rx; void** vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct ethoc*,int ) ;
 int FUNC_3 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 scalar_t__ FUNC_4 (struct ethoc*,struct ethoc_bd*) ;
 int FUNC_5 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,void*,int) ;
 scalar_t__ FUNC_8 () ;
 struct sk_buff* FUNC_9 (struct net_device*,int) ;
 struct ethoc* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_3, int VAR_4)
{
 struct ethoc *VAR_5 = FUNC_10(VAR_3);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  unsigned int VAR_7;
  struct ethoc_bd VAR_8;

  VAR_7 = VAR_5->num_tx + VAR_5->cur_rx;
  FUNC_3(VAR_5, VAR_7, &VAR_8);
  if (VAR_8.stat & VAR_1) {
   FUNC_2(VAR_5, VAR_0);







   FUNC_3(VAR_5, VAR_7, &VAR_8);
   if (VAR_8.stat & VAR_1)
    break;
  }

  if (FUNC_4(VAR_5, &VAR_8) == 0) {
   int VAR_9 = VAR_8.stat >> 16;
   struct sk_buff *VAR_10;

   VAR_9 -= 4;
   VAR_10 = FUNC_9(VAR_3, VAR_9);

   if (FUNC_6(VAR_10)) {
    void *VAR_11 = VAR_5->vma[VAR_7];
    FUNC_7(FUNC_12(VAR_10, VAR_9), VAR_11, VAR_9);
    VAR_10->protocol = FUNC_1(VAR_10, VAR_3);
    VAR_3->stats.rx_packets++;
    VAR_3->stats.rx_bytes += VAR_9;
    FUNC_11(VAR_10);
   } else {
    if (FUNC_8())
     FUNC_0(&VAR_3->dev,
         "low on memory - packet dropped\n");

    VAR_3->stats.rx_dropped++;
    break;
   }
  }


  VAR_8.stat &= ~VAR_2;
  VAR_8.stat |= VAR_1;
  FUNC_5(VAR_5, VAR_7, &VAR_8);
  if (++VAR_5->cur_rx == VAR_5->num_rx)
   VAR_5->cur_rx = 0;
 }

 return VAR_6;
}
