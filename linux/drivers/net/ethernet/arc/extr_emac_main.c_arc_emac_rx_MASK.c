
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; struct net_device* dev; scalar_t__ data; } ;
struct net_device_stats {unsigned int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_length_errors; } ;
struct net_device {int dev; struct net_device_stats stats; } ;
struct buffer_state {struct sk_buff* skb; } ;
struct arc_emac_priv {unsigned int last_rx_bd; struct arc_emac_bd* rxbd; struct buffer_state* rx_buff; } ;
struct arc_emac_bd {void* info; void* data; } ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (int *,void*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (struct buffer_state*,unsigned int) ;
 int FUNC_5 (struct buffer_state*,unsigned int,unsigned int) ;
 int FUNC_6 (struct buffer_state*,int ) ;
 int FUNC_7 (struct buffer_state*,int ,unsigned int) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;
 unsigned int FUNC_10 (void*) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 () ;
 struct sk_buff* FUNC_12 (struct net_device*,unsigned int) ;
 int FUNC_13 (struct net_device*,char*) ;
 struct arc_emac_priv* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct net_device *VAR_8, int VAR_9)
{
 struct arc_emac_priv *VAR_10 = FUNC_14(VAR_8);
 unsigned int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  unsigned int *VAR_12 = &VAR_10->last_rx_bd;
  struct net_device_stats *VAR_13 = &VAR_8->stats;
  struct buffer_state *VAR_14 = &VAR_10->rx_buff[*VAR_12];
  struct arc_emac_bd *VAR_15 = &VAR_10->rxbd[*VAR_12];
  unsigned int VAR_16, VAR_17 = FUNC_10(VAR_15->info);
  struct sk_buff *VAR_18;
  dma_addr_t VAR_19;

  if (FUNC_17((VAR_17 & VAR_5) == VAR_3))
   break;




  *VAR_12 = (*VAR_12 + 1) % VAR_6;

  if (FUNC_17((VAR_17 & VAR_2) !=
        VAR_2)) {



   if (FUNC_11())
    FUNC_13(VAR_8, "incomplete packet received\n");


   VAR_15->info = FUNC_0(VAR_3 | VAR_1);
   VAR_13->rx_errors++;
   VAR_13->rx_length_errors++;
   continue;
  }





  VAR_18 = FUNC_12(VAR_8, VAR_1);
  if (FUNC_17(!VAR_18)) {
   if (FUNC_11())
    FUNC_13(VAR_8, "cannot allocate skb\n");

   VAR_15->info = FUNC_0(VAR_3 | VAR_1);
   VAR_13->rx_errors++;
   VAR_13->rx_dropped++;
   continue;
  }

  VAR_19 = FUNC_2(&VAR_8->dev, (void *)VAR_18->data,
          VAR_1, VAR_0);
  if (FUNC_3(&VAR_8->dev, VAR_19)) {
   if (FUNC_11())
    FUNC_13(VAR_8, "cannot map dma buffer\n");
   FUNC_1(VAR_18);

   VAR_15->info = FUNC_0(VAR_3 | VAR_1);
   VAR_13->rx_errors++;
   VAR_13->rx_dropped++;
   continue;
  }


  FUNC_8(&VAR_8->dev, FUNC_4(VAR_14, VAR_19),
     FUNC_6(VAR_14, VAR_7), VAR_0);

  VAR_16 = VAR_17 & VAR_4;
  VAR_13->rx_packets++;
  VAR_13->rx_bytes += VAR_16;
  FUNC_16(VAR_14->skb, VAR_16);
  VAR_14->skb->dev = VAR_8;
  VAR_14->skb->protocol = FUNC_9(VAR_14->skb, VAR_8);

  FUNC_15(VAR_14->skb);

  VAR_14->skb = VAR_18;
  FUNC_5(VAR_14, VAR_19, VAR_19);
  FUNC_7(VAR_14, VAR_7, VAR_1);

  VAR_15->data = FUNC_0(VAR_19);


  FUNC_18();


  VAR_15->info = FUNC_0(VAR_3 | VAR_1);
 }

 return VAR_11;
}
