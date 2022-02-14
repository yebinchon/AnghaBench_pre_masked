
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct sk_buff {unsigned char* data; int truesize; int len; int ip_summed; int protocol; struct net_device* dev; } ;
struct TYPE_12__ {scalar_t__ rssi; } ;
struct rx_annex_header {int addr2; TYPE_2__ rfmon; } ;
struct rfmon_header {int dummy; } ;
struct TYPE_15__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_5__ stats; } ;
struct iw_quality {int updated; scalar_t__ noise; scalar_t__ level; scalar_t__ qual; } ;
struct TYPE_13__ {scalar_t__ noise; } ;
struct TYPE_14__ {TYPE_3__ qual; } ;
struct TYPE_16__ {size_t free_data_rx; scalar_t__ iw_mode; scalar_t__* pci_map_rx_address; int pdev; struct sk_buff** data_low_rx; TYPE_4__ local_iwstatistics; TYPE_7__* control_block; struct net_device* ndev; } ;
typedef TYPE_6__ islpci_private ;
struct TYPE_17__ {int * driver_curr_frag; TYPE_1__* rx_data_low; } ;
typedef TYPE_7__ isl38xx_control_block ;
struct TYPE_11__ {int address; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (size_t) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (TYPE_6__*,struct sk_buff**) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (unsigned char*,unsigned char*,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,void*,scalar_t__,int ) ;
 int FUNC_15 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_16 (char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_17 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (struct net_device*,int ,struct iw_quality*) ;
 int FUNC_24 () ;

int
FUNC_25(islpci_private *VAR_12)
{
 struct net_device *VAR_13 = VAR_12->ndev;
 isl38xx_control_block *VAR_14 = VAR_12->control_block;
 struct sk_buff *VAR_15;
 u16 VAR_16;
 u32 VAR_17, VAR_18;
 unsigned char *VAR_19;
 int VAR_20 = 0;







 VAR_17 = VAR_12->free_data_rx % VAR_3;
 VAR_16 = FUNC_8(VAR_14->rx_data_low[VAR_17].size);
 VAR_15 = VAR_12->data_low_rx[VAR_17];
 VAR_18 = ((unsigned long)
    FUNC_10(VAR_14->rx_data_low[VAR_17].address) -
    (unsigned long) VAR_15->data) & 3;
 FUNC_15(VAR_12->pdev,
    VAR_12->pci_map_rx_address[VAR_17],
    VAR_5 + 2, VAR_6);


 FUNC_19(VAR_15, VAR_16);
 if (VAR_18) {

  FUNC_18(VAR_15, 2);
  FUNC_19(VAR_15, 2);
 }
 if (VAR_11) {

  VAR_19 = VAR_15->data + 6;
  FUNC_11(VAR_15->data, VAR_19, VAR_15->len - 6);
  FUNC_21(VAR_15, VAR_15->len - 6);
 }
 if (FUNC_22(VAR_12->iw_mode == VAR_4)) {
  VAR_15->dev = VAR_13;
  VAR_20 = FUNC_6(VAR_12, &VAR_15);
 } else {
  if (FUNC_22(VAR_15->data[2 * VAR_1] == 0)) {



   struct iw_quality VAR_21;
   struct rx_annex_header *VAR_22 =
       (struct rx_annex_header *) VAR_15->data;
   VAR_21.level = VAR_22->rfmon.rssi;


   VAR_21.noise = VAR_12->local_iwstatistics.qual.noise;
   VAR_21.qual = VAR_21.level - VAR_21.noise;
   VAR_21.updated = 0x07;

   FUNC_23(VAR_13, VAR_22->addr2, &VAR_21);

   FUNC_17(VAR_15,
        (VAR_15->data +
         sizeof(struct rfmon_header)),
        2 * VAR_1);
   FUNC_18(VAR_15, sizeof (struct rfmon_header));
  }
  VAR_15->protocol = FUNC_5(VAR_15, VAR_13);
 }
 VAR_15->ip_summed = VAR_0;
 VAR_13->stats.rx_packets++;
 VAR_13->stats.rx_bytes += VAR_16;
 if (FUNC_22(VAR_20)) {
  FUNC_3(VAR_15);
  VAR_15 = ((void*)0);
 } else
  FUNC_12(VAR_15);


 VAR_12->free_data_rx++;


 while (VAR_17 =
        FUNC_10(VAR_14->
      driver_curr_frag[VAR_2]),
        VAR_17 - VAR_12->free_data_rx < VAR_3) {


  VAR_15 = FUNC_2(VAR_5 + 2);
  if (FUNC_22(VAR_15 == ((void*)0))) {

   FUNC_0(VAR_8, "Error allocating skb\n");
   break;
  }
  FUNC_20(VAR_15, (4 - (long) VAR_15->data) & 0x03);

  VAR_17 = VAR_17 % VAR_3;
  VAR_12->data_low_rx[VAR_17] = VAR_15;
  VAR_12->pci_map_rx_address[VAR_17] =
      FUNC_14(VAR_12->pdev, (void *) VAR_15->data,
       VAR_5 + 2,
       VAR_6);
  if (FUNC_13(VAR_12->pdev,
       VAR_12->pci_map_rx_address[VAR_17])) {

   FUNC_0(VAR_8,
         "Error mapping DMA address\n");


   FUNC_3(VAR_15);
   VAR_15 = ((void*)0);
   break;
  }

  VAR_14->rx_data_low[VAR_17].address =
   FUNC_1((u32)VAR_12->pci_map_rx_address[VAR_17]);
  FUNC_24();


  FUNC_9(&VAR_14->
        driver_curr_frag[VAR_2], 1);
 }


 FUNC_7(VAR_12);

 return 0;
}
