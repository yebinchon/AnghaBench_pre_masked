
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct smsc9420_pdata {scalar_t__ rx_csum; TYPE_2__* rx_buffers; int pdev; struct net_device* dev; } ;
struct sk_buff {int protocol; int ip_summed; int csum; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {struct sk_buff* skb; scalar_t__ mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct smsc9420_pdata *VAR_6, const int VAR_7,
    const u32 VAR_8)
{
 struct net_device *VAR_9 = VAR_6->dev;
 struct sk_buff *VAR_10;
 u16 VAR_11 = (VAR_8 & VAR_4)
  >> VAR_5;


 VAR_11 -= 4;

 if (VAR_6->rx_csum)
  VAR_11 -= 2;

 VAR_9->stats.rx_packets++;
 VAR_9->stats.rx_bytes += VAR_11;

 FUNC_3(VAR_6->pdev, VAR_6->rx_buffers[VAR_7].mapping,
  VAR_3, VAR_2);
 VAR_6->rx_buffers[VAR_7].mapping = 0;

 VAR_10 = VAR_6->rx_buffers[VAR_7].skb;
 VAR_6->rx_buffers[VAR_7].skb = ((void*)0);

 if (VAR_6->rx_csum) {
  u16 VAR_12 = FUNC_1(FUNC_7(VAR_10) +
   VAR_1 + VAR_11 + 4);
  FUNC_4(VAR_12, &VAR_10->csum);
  VAR_10->ip_summed = VAR_0;
 }

 FUNC_6(VAR_10, VAR_1);
 FUNC_5(VAR_10, VAR_11);

 VAR_10->protocol = FUNC_0(VAR_10, VAR_9);

 FUNC_2(VAR_10);
}
