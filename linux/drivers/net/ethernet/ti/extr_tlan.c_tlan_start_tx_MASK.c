
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct tlan_priv {int tx_tail; int tx_in_progress; int lock; struct tlan_list* tx_list; int pci_dev; int tx_busy_count; int tx_head; void* tx_list_dma; int phy_online; } ;
struct tlan_list {scalar_t__ c_stat; void* forward; TYPE_1__* buffer; scalar_t__ frame_size; } ;
struct sk_buff {int data; int len; } ;
struct net_device {int name; scalar_t__ base_addr; } ;
typedef int netdev_tx_t ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int count; scalar_t__ address; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (int ,unsigned int) ;
 struct tlan_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (void*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct tlan_list*,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_12, struct net_device *VAR_13)
{
 struct tlan_priv *VAR_14 = FUNC_4(VAR_13);
 dma_addr_t VAR_15;
 struct tlan_list *VAR_16;
 unsigned long VAR_17;
 unsigned int VAR_18;

 if (!VAR_14->phy_online) {
  FUNC_1(VAR_6, "TRANSMIT:  %s PHY is not ready\n",
    VAR_13->name);
  FUNC_2(VAR_12);
  return VAR_1;
 }

 if (FUNC_8(VAR_12, VAR_10))
  return VAR_1;
 VAR_18 = FUNC_3(VAR_12->len, (unsigned int)VAR_10);

 VAR_16 = VAR_14->tx_list + VAR_14->tx_tail;
 VAR_15 =
  VAR_14->tx_list_dma + sizeof(struct tlan_list)*VAR_14->tx_tail;

 if (VAR_16->c_stat != VAR_5) {
  FUNC_1(VAR_6,
    "TRANSMIT:  %s is busy (Head=%d Tail=%d)\n",
    VAR_13->name, VAR_14->tx_head, VAR_14->tx_tail);
  FUNC_5(VAR_13);
  VAR_14->tx_busy_count++;
  return VAR_0;
 }

 VAR_16->forward = 0;

 VAR_16->buffer[0].address = FUNC_7(VAR_14->pci_dev,
            VAR_12->data, VAR_18,
            VAR_2);
 FUNC_11(VAR_16, VAR_12);

 VAR_16->frame_size = (u16) VAR_18;
 VAR_16->buffer[0].count = VAR_9 | (u32) VAR_18;
 VAR_16->buffer[1].count = 0;
 VAR_16->buffer[1].address = 0;

 FUNC_9(&VAR_14->lock, VAR_17);
 VAR_16->c_stat = VAR_4;
 if (!VAR_14->tx_in_progress) {
  VAR_14->tx_in_progress = 1;
  FUNC_1(VAR_6,
    "TRANSMIT:  Starting TX on buffer %d\n",
    VAR_14->tx_tail);
  FUNC_6(VAR_15, VAR_13->base_addr + VAR_3);
  FUNC_6(VAR_7, VAR_13->base_addr + VAR_8);
 } else {
  FUNC_1(VAR_6,
    "TRANSMIT:  Adding buffer %d to TX channel\n",
    VAR_14->tx_tail);
  if (VAR_14->tx_tail == 0) {
   (VAR_14->tx_list + (VAR_11 - 1))->forward
    = VAR_15;
  } else {
   (VAR_14->tx_list + (VAR_14->tx_tail - 1))->forward
    = VAR_15;
  }
 }
 FUNC_10(&VAR_14->lock, VAR_17);

 FUNC_0(VAR_14->tx_tail, VAR_11);

 return VAR_1;

}
