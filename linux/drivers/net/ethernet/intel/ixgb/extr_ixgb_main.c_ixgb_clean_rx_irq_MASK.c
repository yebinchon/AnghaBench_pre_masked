
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int protocol; struct ixgb_rx_desc* data; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct ixgb_rx_desc {int status; int errors; scalar_t__ special; scalar_t__ length; scalar_t__ dma; struct sk_buff* skb; } ;
struct ixgb_desc_ring {unsigned int next_to_clean; unsigned int count; struct ixgb_rx_desc* buffer_info; } ;
struct ixgb_buffer {int status; int errors; scalar_t__ special; scalar_t__ length; scalar_t__ dma; struct sk_buff* skb; } ;
struct ixgb_adapter {int napi; struct pci_dev* pdev; struct net_device* netdev; struct ixgb_desc_ring rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgb_desc_ring*) ;
 int VAR_2 ;
 struct ixgb_rx_desc* FUNC_1 (struct ixgb_desc_ring,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ixgb_rx_desc* VAR_10 ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ixgb_adapter*,int) ;
 int FUNC_8 (int *,struct ixgb_rx_desc*,int ,struct sk_buff**) ;
 int FUNC_9 (struct ixgb_adapter*,struct ixgb_rx_desc*,struct sk_buff*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (struct ixgb_rx_desc*) ;
 int FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static bool
FUNC_17(struct ixgb_adapter *VAR_11, int *VAR_12, int VAR_13)
{
 struct ixgb_desc_ring *VAR_14 = &VAR_11->rx_ring;
 struct net_device *VAR_15 = VAR_11->netdev;
 struct pci_dev *VAR_16 = VAR_11->pdev;
 struct ixgb_rx_desc *VAR_17, *VAR_18;
 struct ixgb_buffer *VAR_19, *VAR_20, *VAR_21;
 u32 VAR_22;
 unsigned int VAR_23, VAR_24;
 int VAR_25 = 0;
 bool VAR_26 = 0;

 VAR_23 = VAR_14->next_to_clean;
 VAR_17 = FUNC_1(*VAR_14, VAR_23);
 VAR_19 = &VAR_14->buffer_info[VAR_23];

 while (VAR_17->status & VAR_7) {
  struct sk_buff *VAR_27;
  u8 VAR_28;

  if (*VAR_12 >= VAR_13)
   break;

  (*VAR_12)++;
  FUNC_14();
  VAR_28 = VAR_17->status;
  VAR_27 = VAR_19->skb;
  VAR_19->skb = ((void*)0);

  FUNC_13(VAR_27->data - VAR_10);

  if (++VAR_23 == VAR_14->count)
   VAR_23 = 0;
  VAR_18 = FUNC_1(*VAR_14, VAR_23);
  FUNC_13(VAR_18);

  VAR_24 = VAR_23 + 1;
  if (VAR_24 == VAR_14->count)
   VAR_24 = 0;
  VAR_21 = &VAR_14->buffer_info[VAR_24];
  FUNC_13(VAR_21);

  VAR_20 = &VAR_14->buffer_info[VAR_23];

  VAR_26 = 1;
  VAR_25++;

  FUNC_4(&VAR_16->dev,
     VAR_19->dma,
     VAR_19->length,
     VAR_0);
  VAR_19->dma = 0;

  VAR_22 = FUNC_10(VAR_17->length);
  VAR_17->length = 0;

  if (FUNC_16(!(VAR_28 & VAR_8))) {



   FUNC_12("Receive packet consumed multiple buffers length<%x>\n",
     VAR_22);

   FUNC_3(VAR_27);
   goto rxdesc_done;
  }

  if (FUNC_16(VAR_17->errors &
      (VAR_3 | VAR_6 |
       VAR_4 | VAR_5))) {
   FUNC_3(VAR_27);
   goto rxdesc_done;
  }

  FUNC_8(&VAR_11->napi, VAR_19, VAR_22, &VAR_27);


  FUNC_15(VAR_27, VAR_22);


  FUNC_9(VAR_11, VAR_17, VAR_27);

  VAR_27->protocol = FUNC_5(VAR_27, VAR_15);
  if (VAR_28 & VAR_9)
   FUNC_2(VAR_27, FUNC_6(VAR_1),
           FUNC_10(VAR_17->special));

  FUNC_11(VAR_27);

rxdesc_done:

  VAR_17->status = 0;


  if (FUNC_16(VAR_25 >= VAR_2)) {
   FUNC_7(VAR_11, VAR_25);
   VAR_25 = 0;
  }


  VAR_17 = VAR_18;
  VAR_19 = VAR_20;
 }

 VAR_14->next_to_clean = VAR_23;

 VAR_25 = FUNC_0(VAR_14);
 if (VAR_25)
  FUNC_7(VAR_11, VAR_25);

 return VAR_26;
}
