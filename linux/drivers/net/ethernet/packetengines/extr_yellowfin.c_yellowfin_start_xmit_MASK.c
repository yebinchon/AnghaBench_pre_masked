
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yellowfin_private {int cur_tx; scalar_t__ dirty_tx; int tx_full; scalar_t__ base; TYPE_1__* tx_ring; int pci_dev; struct sk_buff** tx_skbuff; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int request_cnt; void* dbdma_cmd; void* addr; scalar_t__ result_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_0 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,struct net_device*,char*,scalar_t__,unsigned int) ;
 struct yellowfin_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int VAR_12 ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_13,
     struct net_device *VAR_14)
{
 struct yellowfin_private *VAR_15 = FUNC_3(VAR_14);
 unsigned VAR_16;
 int VAR_17 = VAR_13->len;

 FUNC_5 (VAR_14);





 VAR_16 = VAR_15->cur_tx % VAR_9;

 if (VAR_11) {
  int VAR_18 = ((unsigned long)VAR_13->data + VAR_13->len) % 32;

  if (VAR_18 > 24 || VAR_18 == 0) {
   VAR_17 = VAR_13->len + 32 - VAR_18 + 1;
   if (FUNC_8(VAR_13, VAR_17)) {
    VAR_15->tx_skbuff[VAR_16] = ((void*)0);
    FUNC_6(VAR_14);
    return VAR_6;
   }
  }
 }
 VAR_15->tx_skbuff[VAR_16] = VAR_13;
 VAR_15->tx_ring[VAR_16<<1].request_cnt = VAR_17;
 VAR_15->tx_ring[VAR_16<<1].addr = FUNC_0(FUNC_7(VAR_15->pci_dev,
  VAR_13->data, VAR_17, VAR_7));



 VAR_15->cur_tx++;
 {
  unsigned VAR_19 = VAR_15->cur_tx % VAR_9;
  VAR_15->tx_ring[VAR_19<<1].dbdma_cmd = FUNC_0(VAR_2);
 }


 VAR_15->tx_ring[VAR_16<<1].dbdma_cmd =
  FUNC_0( ((VAR_16 % 6) == 0 ? VAR_3|VAR_4|VAR_1 :
       VAR_3 | VAR_1) | VAR_17);





 FUNC_1(0x10001000, VAR_15->base + VAR_10);

 if (VAR_15->cur_tx - VAR_15->dirty_tx < VAR_8)
  FUNC_4 (VAR_14);
 else
  VAR_15->tx_full = 1;

 if (VAR_12 > 4) {
  FUNC_2(VAR_5, VAR_14, "Yellowfin transmit frame #%d queued in slot %d\n",
         VAR_15->cur_tx, VAR_16);
 }
 return VAR_6;
}
