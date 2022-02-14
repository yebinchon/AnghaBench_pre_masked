
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct rx {struct sk_buff* skb; int dma_addr; } ;
struct rfd {int command; int actual_size; int status; } ;
struct nic {scalar_t__ ru_running; int rx_over_length_errors; struct net_device* netdev; TYPE_2__* csr; int pdev; } ;
struct TYPE_6__ {int rx_bytes; int rx_packets; } ;
struct net_device {int features; TYPE_3__ stats; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nic*,int ,int ,struct net_device*,char*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int ,int ,int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct nic *VAR_17, struct rx *VAR_18,
 unsigned int *VAR_19, unsigned int VAR_20)
{
 struct net_device *VAR_21 = VAR_17->netdev;
 struct sk_buff *VAR_22 = VAR_18->skb;
 struct rfd *VAR_23 = (struct rfd *)VAR_22->data;
 u16 VAR_24, VAR_25;
 u16 VAR_26 = 0;

 if (FUNC_12(VAR_19 && *VAR_19 >= VAR_20))
  return -VAR_0;


 FUNC_7(VAR_17->pdev, VAR_18->dma_addr,
  sizeof(struct rfd), VAR_6);
 VAR_24 = FUNC_4(VAR_23->status);

 FUNC_5(VAR_17, VAR_16, VAR_3, VAR_17->netdev,
       "status=0x%04X\n", VAR_24);
 FUNC_1();


 if (FUNC_12(!(VAR_24 & VAR_12))) {





  if ((FUNC_4(VAR_23->command) & VAR_13) &&
      (VAR_9 == VAR_17->ru_running))

   if (FUNC_3(&VAR_17->csr->scb.status) & VAR_15)
    VAR_17->ru_running = VAR_10;
  FUNC_8(VAR_17->pdev, VAR_18->dma_addr,
            sizeof(struct rfd),
            VAR_7);
  return -VAR_1;
 }


 if (FUNC_12(VAR_21->features & VAR_5))
  VAR_26 = 4;
 VAR_25 = FUNC_4(VAR_23->actual_size) & 0x3FFF;
 if (FUNC_12(VAR_25 > VAR_8 - sizeof(struct rfd)))
  VAR_25 = VAR_8 - sizeof(struct rfd);


 FUNC_9(VAR_17->pdev, VAR_18->dma_addr,
  VAR_8, VAR_6);







 if ((FUNC_4(VAR_23->command) & VAR_13) &&
     (VAR_9 == VAR_17->ru_running)) {

     if (FUNC_3(&VAR_17->csr->scb.status) & VAR_15)
  VAR_17->ru_running = VAR_10;
 }


 FUNC_11(VAR_22, sizeof(struct rfd));
 FUNC_10(VAR_22, VAR_25);
 VAR_22->protocol = FUNC_2(VAR_22, VAR_17->netdev);




 if (FUNC_12(VAR_21->features & VAR_4)) {
  if (VAR_25 > VAR_2 + VAR_11 + VAR_26)

   VAR_17->rx_over_length_errors++;
  goto process_skb;
 }

 if (FUNC_12(!(VAR_24 & VAR_14))) {

  FUNC_0(VAR_22);
 } else if (VAR_25 > VAR_2 + VAR_11 + VAR_26) {

  VAR_17->rx_over_length_errors++;
  FUNC_0(VAR_22);
 } else {
process_skb:
  VAR_21->stats.rx_packets++;
  VAR_21->stats.rx_bytes += (VAR_25 - VAR_26);
  FUNC_6(VAR_22);
  if (VAR_19)
   (*VAR_19)++;
 }

 VAR_18->skb = ((void*)0);

 return 0;
}
