
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned char* data; int protocol; } ;
struct TYPE_6__ {int cntinfo; int pbuf; } ;
struct sgiseeq_rx_desc {TYPE_3__ rdma; struct sk_buff* skb; } ;
struct sgiseeq_regs {int dummy; } ;
struct sgiseeq_private {size_t rx_new; struct sgiseeq_rx_desc* rx_desc; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_4__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct net_device {TYPE_2__ dev; TYPE_1__ stats; int dev_addr; } ;
struct hpc3_ethregs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t) ;
 int VAR_4 ;
 size_t FUNC_1 (size_t) ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_2 (int ,unsigned char*,int,int ) ;
 int FUNC_3 (struct net_device*,struct sgiseeq_rx_desc*) ;
 int FUNC_4 (struct net_device*,struct sgiseeq_rx_desc*) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int FUNC_7 (unsigned char*,int ) ;
 struct sk_buff* FUNC_8 (struct net_device*,int) ;
 struct sk_buff* FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct net_device*,unsigned char) ;
 int VAR_7 ;
 int FUNC_12 (struct sgiseeq_private*,struct hpc3_ethregs*,struct sgiseeq_regs*) ;
 int FUNC_13 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_16(struct net_device *VAR_8, struct sgiseeq_private *VAR_9,
         struct hpc3_ethregs *VAR_10,
         struct sgiseeq_regs *VAR_11)
{
 struct sgiseeq_rx_desc *VAR_12;
 struct sk_buff *VAR_13 = ((void*)0);
 struct sk_buff *VAR_14;
 unsigned char VAR_15;
 int VAR_16 = 0;
 unsigned int VAR_17 = FUNC_1(VAR_9->rx_new);


 VAR_12 = &VAR_9->rx_desc[VAR_9->rx_new];
 FUNC_3(VAR_8, VAR_12);
 while (!(VAR_12->rdma.cntinfo & VAR_3)) {
  VAR_16 = VAR_4 - (VAR_12->rdma.cntinfo & VAR_1) - 3;
  FUNC_5(VAR_8->dev.parent, VAR_12->rdma.pbuf,
     VAR_4, VAR_0);
  VAR_15 = VAR_12->skb->data[VAR_16];
  if (VAR_15 & VAR_6) {


   if (!FUNC_7(VAR_12->skb->data + 6, VAR_8->dev_addr)) {
    if (VAR_16 > VAR_7) {
     VAR_13 = VAR_12->skb;
     VAR_14 = FUNC_8(VAR_8, VAR_4);
     if (!VAR_14) {
      VAR_14 = VAR_13;
      VAR_13 = ((void*)0);
      goto memory_squeeze;
     }
     FUNC_15(VAR_14, 2);
    } else {
     VAR_13 = FUNC_9(VAR_8, VAR_16);
     if (VAR_13)
      FUNC_13(VAR_13, VAR_12->skb->data, VAR_16);

     VAR_14 = VAR_12->skb;
    }
memory_squeeze:
    if (VAR_13) {
     FUNC_14(VAR_13, VAR_16);
     VAR_13->protocol = FUNC_6(VAR_13, VAR_8);
     FUNC_10(VAR_13);
     VAR_8->stats.rx_packets++;
     VAR_8->stats.rx_bytes += VAR_16;
    } else {
     VAR_8->stats.rx_dropped++;
    }
   } else {

    VAR_14 = VAR_12->skb;
   }
  } else {
   FUNC_11(VAR_8, VAR_15);
   VAR_14 = VAR_12->skb;
  }
  VAR_12->skb = VAR_14;
  VAR_12->rdma.pbuf = FUNC_2(VAR_8->dev.parent,
            VAR_14->data - 2,
            VAR_4, VAR_0);


  VAR_12->rdma.cntinfo = VAR_5;
  VAR_9->rx_new = FUNC_0(VAR_9->rx_new);
  FUNC_4(VAR_8, VAR_12);
  VAR_12 = &VAR_9->rx_desc[VAR_9->rx_new];
  FUNC_3(VAR_8, VAR_12);
 }
 FUNC_3(VAR_8, &VAR_9->rx_desc[VAR_17]);
 VAR_9->rx_desc[VAR_17].rdma.cntinfo &= ~(VAR_2);
 FUNC_4(VAR_8, &VAR_9->rx_desc[VAR_17]);
 FUNC_3(VAR_8, &VAR_9->rx_desc[FUNC_1(VAR_9->rx_new)]);
 VAR_9->rx_desc[FUNC_1(VAR_9->rx_new)].rdma.cntinfo |= VAR_2;
 FUNC_4(VAR_8, &VAR_9->rx_desc[FUNC_1(VAR_9->rx_new)]);
 FUNC_12(VAR_9, VAR_10, VAR_11);
}
