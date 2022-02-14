
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* cmd_type_len; scalar_t__ olinfo_status; void* buffer_addr; } ;
union e1000_adv_tx_desc {TYPE_1__ read; } ;
typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
typedef size_t u16 ;
struct sk_buff {unsigned int data_len; int data; scalar_t__ const len; } ;
struct igb_tx_buffer {unsigned int tx_flags; struct sk_buff* skb; union e1000_adv_tx_desc* next_to_watch; int time_stamp; int bytecount; } ;
struct igb_ring {size_t next_to_use; size_t count; int dev; struct igb_tx_buffer* tx_buffer_info; int tail; } ;
typedef int skb_frag_t ;
typedef unsigned int dma_addr_t ;
struct TYPE_4__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 union e1000_adv_tx_desc* FUNC_0 (struct igb_ring*,size_t) ;
 void* FUNC_1 (unsigned int) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned int FUNC_5 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (struct igb_tx_buffer*,unsigned int) ;
 int FUNC_8 (struct igb_tx_buffer*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (struct igb_tx_buffer*,int ) ;
 int FUNC_10 (struct igb_tx_buffer*,int ,unsigned int) ;
 int FUNC_11 (int ,int ,scalar_t__,int ) ;
 int FUNC_12 (int ,int ,scalar_t__,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (struct igb_ring*,int ) ;
 unsigned int FUNC_15 (struct sk_buff*,unsigned int) ;
 int FUNC_16 (struct igb_ring*,union e1000_adv_tx_desc*,unsigned int,scalar_t__ const) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (int ) ;
 unsigned int FUNC_21 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_22 (int *) ;
 unsigned int FUNC_23 (struct sk_buff*) ;
 TYPE_2__* FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct igb_ring*) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (size_t,int ) ;

__attribute__((used)) static int FUNC_29(struct igb_ring *VAR_6,
        struct igb_tx_buffer *VAR_7,
        const u8 VAR_8)
{
 struct sk_buff *VAR_9 = VAR_7->skb;
 struct igb_tx_buffer *VAR_10;
 union e1000_adv_tx_desc *VAR_11;
 skb_frag_t *VAR_12;
 dma_addr_t VAR_13;
 unsigned int VAR_14, VAR_15;
 u32 VAR_16 = VAR_7->tx_flags;
 u32 VAR_17 = FUNC_15(VAR_9, VAR_16);
 u16 VAR_18 = VAR_6->next_to_use;

 VAR_11 = FUNC_0(VAR_6, VAR_18);

 FUNC_16(VAR_6, VAR_11, VAR_16, VAR_9->len - VAR_8);

 VAR_15 = FUNC_23(VAR_9);
 VAR_14 = VAR_9->data_len;

 VAR_13 = FUNC_5(VAR_6->dev, VAR_9->data, VAR_15, VAR_1);

 VAR_10 = VAR_7;

 for (VAR_12 = &FUNC_24(VAR_9)->frags[0];; VAR_12++) {
  if (FUNC_6(VAR_6->dev, VAR_13))
   goto dma_error;


  FUNC_10(VAR_10, VAR_5, VAR_15);
  FUNC_8(VAR_10, VAR_13, VAR_13);

  VAR_11->read.buffer_addr = FUNC_2(VAR_13);

  while (FUNC_27(VAR_15 > VAR_2)) {
   VAR_11->read.cmd_type_len =
    FUNC_1(VAR_17 ^ VAR_2);

   VAR_18++;
   VAR_11++;
   if (VAR_18 == VAR_6->count) {
    VAR_11 = FUNC_0(VAR_6, 0);
    VAR_18 = 0;
   }
   VAR_11->read.olinfo_status = 0;

   VAR_13 += VAR_2;
   VAR_15 -= VAR_2;

   VAR_11->read.buffer_addr = FUNC_2(VAR_13);
  }

  if (FUNC_17(!VAR_14))
   break;

  VAR_11->read.cmd_type_len = FUNC_1(VAR_17 ^ VAR_15);

  VAR_18++;
  VAR_11++;
  if (VAR_18 == VAR_6->count) {
   VAR_11 = FUNC_0(VAR_6, 0);
   VAR_18 = 0;
  }
  VAR_11->read.olinfo_status = 0;

  VAR_15 = FUNC_22(VAR_12);
  VAR_14 -= VAR_15;

  VAR_13 = FUNC_21(VAR_6->dev, VAR_12, 0,
           VAR_15, VAR_1);

  VAR_10 = &VAR_6->tx_buffer_info[VAR_18];
 }


 VAR_17 |= VAR_15 | VAR_3;
 VAR_11->read.cmd_type_len = FUNC_1(VAR_17);

 FUNC_18(FUNC_26(VAR_6), VAR_7->bytecount);


 VAR_7->time_stamp = VAR_4;

 FUNC_25(VAR_9);
 FUNC_13();


 VAR_7->next_to_watch = VAR_11;

 VAR_18++;
 if (VAR_18 == VAR_6->count)
  VAR_18 = 0;

 VAR_6->next_to_use = VAR_18;


 FUNC_14(VAR_6, VAR_0);

 if (FUNC_20(FUNC_26(VAR_6)) || !FUNC_19()) {
  FUNC_28(VAR_18, VAR_6->tail);
 }
 return 0;

dma_error:
 FUNC_3(VAR_6->dev, "TX DMA map failed\n");
 VAR_10 = &VAR_6->tx_buffer_info[VAR_18];


 while (VAR_10 != VAR_7) {
  if (FUNC_9(VAR_10, VAR_5))
   FUNC_11(VAR_6->dev,
           FUNC_7(VAR_10, VAR_13),
           FUNC_9(VAR_10, VAR_5),
           VAR_1);
  FUNC_10(VAR_10, VAR_5, 0);

  if (VAR_18-- == 0)
   VAR_18 += VAR_6->count;
  VAR_10 = &VAR_6->tx_buffer_info[VAR_18];
 }

 if (FUNC_9(VAR_10, VAR_5))
  FUNC_12(VAR_6->dev,
     FUNC_7(VAR_10, VAR_13),
     FUNC_9(VAR_10, VAR_5),
     VAR_1);
 FUNC_10(VAR_10, VAR_5, 0);

 FUNC_4(VAR_10->skb);
 VAR_10->skb = ((void*)0);

 VAR_6->next_to_use = VAR_18;

 return -1;
}
