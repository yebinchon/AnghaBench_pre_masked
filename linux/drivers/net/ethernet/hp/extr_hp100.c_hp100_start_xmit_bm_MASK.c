
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {int base_addr; TYPE_1__ stats; int name; } ;
struct hp100_private {scalar_t__ chip; scalar_t__ txrhead; int lan_type; scalar_t__ hub_status; int lock; int txrcommit; int pci_dev; TYPE_2__* txrtail; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {scalar_t__ next; int* pdl; int pdl_paddr; struct sk_buff* skb; } ;
typedef TYPE_2__ hp100_ring_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_10 ;
 struct hp100_private* FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (int ,int ,int,int ) ;
 int FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int ,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_18(struct sk_buff *VAR_11,
           struct net_device *VAR_12)
{
 unsigned long VAR_13;
 int VAR_14, VAR_15;
 int VAR_16 = VAR_12->base_addr;
 struct hp100_private *VAR_17 = FUNC_11(VAR_12);
 hp100_ring_t *VAR_18;





 if (VAR_11->len <= 0)
  goto drop;

 if (VAR_17->chip == VAR_1 && FUNC_14(VAR_11, VAR_0))
  return VAR_6;


 if (VAR_17->txrtail->next == VAR_17->txrhead) {





  if (FUNC_17(VAR_10, FUNC_1(VAR_12) + VAR_5))
   goto drop;

  if (FUNC_2(VAR_12))
   goto drop;

  if (VAR_17->lan_type == VAR_2 && VAR_17->hub_status < 0) {

   FUNC_13("hp100: %s: login to 100Mb/s hub retry\n", VAR_12->name);
   FUNC_10(VAR_12);
   VAR_17->hub_status = FUNC_5(VAR_12, 0);
   FUNC_9(VAR_12);
  } else {
   FUNC_15(&VAR_17->lock, VAR_13);
   FUNC_3();
   VAR_14 = FUNC_8(VAR_12);
   FUNC_4();
   FUNC_16(&VAR_17->lock, VAR_13);
   if (VAR_14 == VAR_3)
    FUNC_13("hp100: %s: link down detected\n", VAR_12->name);
   else if (VAR_17->lan_type != VAR_14) {

    FUNC_13("hp100: %s: cable change 10Mb/s <-> 100Mb/s detected\n", VAR_12->name);
    VAR_17->lan_type = VAR_14;
    FUNC_10(VAR_12);
    if (VAR_17->lan_type == VAR_2)
     VAR_17->hub_status = FUNC_5(VAR_12, 0);
    FUNC_9(VAR_12);
   } else {
    FUNC_13("hp100: %s: interface reset\n", VAR_12->name);
    FUNC_10(VAR_12);
    if (VAR_17->lan_type == VAR_2)
     VAR_17->hub_status = FUNC_5(VAR_12, 0);
    FUNC_9(VAR_12);
   }
  }

  goto drop;
 }





 FUNC_15(&VAR_17->lock, VAR_13);
 VAR_18 = VAR_17->txrtail;
 VAR_17->txrtail = VAR_18->next;


 VAR_15 = VAR_11->len >= VAR_4;
 VAR_14 = VAR_15 ? VAR_11->len : VAR_4;

 VAR_18->skb = VAR_11;
 VAR_18->pdl[0] = ((1 << 16) | VAR_14);
 if (VAR_17->chip == VAR_1) {

  VAR_18->pdl[2] = VAR_14;
 } else {

  VAR_18->pdl[2] = VAR_11->len;
 }


 VAR_18->pdl[1] = ((u32) FUNC_12(VAR_17->pci_dev, VAR_11->data, VAR_18->pdl[2], VAR_7));


 FUNC_6(VAR_18->pdl_paddr, VAR_9);

 VAR_17->txrcommit++;

 VAR_12->stats.tx_packets++;
 VAR_12->stats.tx_bytes += VAR_11->len;

 FUNC_16(&VAR_17->lock, VAR_13);

 return VAR_6;

drop:
 FUNC_0(VAR_11);
 return VAR_6;
}
