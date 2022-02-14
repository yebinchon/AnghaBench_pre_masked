
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* cmd_type_len; scalar_t__ olinfo_status; void* buffer_addr; } ;
union igc_adv_tx_desc {TYPE_1__ read; } ;
typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
typedef size_t u16 ;
struct sk_buff {unsigned int data_len; int data; scalar_t__ const len; } ;
struct igc_tx_buffer {unsigned int tx_flags; struct sk_buff* skb; union igc_adv_tx_desc* next_to_watch; int time_stamp; int bytecount; } ;
struct igc_ring {size_t next_to_use; size_t count; int dev; struct igc_tx_buffer* tx_buffer_info; int tail; } ;
typedef int skb_frag_t ;
typedef unsigned int dma_addr_t ;
struct TYPE_4__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 union igc_adv_tx_desc* FUNC_0 (struct igc_ring*,size_t) ;
 void* FUNC_1 (unsigned int) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned int FUNC_5 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (struct igc_tx_buffer*,unsigned int) ;
 int FUNC_8 (struct igc_tx_buffer*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (struct igc_tx_buffer*,int ) ;
 int FUNC_10 (struct igc_tx_buffer*,int ,unsigned int) ;
 int FUNC_11 (int ,int ,scalar_t__,int ) ;
 int FUNC_12 (int ,int ,scalar_t__,int ) ;
 int FUNC_13 (struct igc_ring*,int ) ;
 unsigned int FUNC_14 (struct sk_buff*,unsigned int) ;
 int FUNC_15 (struct igc_ring*,union igc_adv_tx_desc*,unsigned int,scalar_t__ const) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (int ) ;
 unsigned int FUNC_20 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_21 (int *) ;
 unsigned int FUNC_22 (struct sk_buff*) ;
 TYPE_2__* FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct igc_ring*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 () ;
 int FUNC_28 (size_t,int ) ;

__attribute__((used)) static int FUNC_29(struct igc_ring *VAR_6,
        struct igc_tx_buffer *VAR_7,
        const u8 VAR_8)
{
 struct sk_buff *VAR_9 = VAR_7->skb;
 struct igc_tx_buffer *VAR_10;
 union igc_adv_tx_desc *VAR_11;
 u32 VAR_12 = VAR_7->tx_flags;
 skb_frag_t *VAR_13;
 u16 VAR_14 = VAR_6->next_to_use;
 unsigned int VAR_15, VAR_16;
 dma_addr_t VAR_17;
 u32 VAR_18 = FUNC_14(VAR_9, VAR_12);

 VAR_11 = FUNC_0(VAR_6, VAR_14);

 FUNC_15(VAR_6, VAR_11, VAR_12, VAR_9->len - VAR_8);

 VAR_16 = FUNC_22(VAR_9);
 VAR_15 = VAR_9->data_len;

 VAR_17 = FUNC_5(VAR_6->dev, VAR_9->data, VAR_16, VAR_1);

 VAR_10 = VAR_7;

 for (VAR_13 = &FUNC_23(VAR_9)->frags[0];; VAR_13++) {
  if (FUNC_6(VAR_6->dev, VAR_17))
   goto dma_error;


  FUNC_10(VAR_10, VAR_5, VAR_16);
  FUNC_8(VAR_10, VAR_17, VAR_17);

  VAR_11->read.buffer_addr = FUNC_2(VAR_17);

  while (FUNC_26(VAR_16 > VAR_2)) {
   VAR_11->read.cmd_type_len =
    FUNC_1(VAR_18 ^ VAR_2);

   VAR_14++;
   VAR_11++;
   if (VAR_14 == VAR_6->count) {
    VAR_11 = FUNC_0(VAR_6, 0);
    VAR_14 = 0;
   }
   VAR_11->read.olinfo_status = 0;

   VAR_17 += VAR_2;
   VAR_16 -= VAR_2;

   VAR_11->read.buffer_addr = FUNC_2(VAR_17);
  }

  if (FUNC_16(!VAR_15))
   break;

  VAR_11->read.cmd_type_len = FUNC_1(VAR_18 ^ VAR_16);

  VAR_14++;
  VAR_11++;
  if (VAR_14 == VAR_6->count) {
   VAR_11 = FUNC_0(VAR_6, 0);
   VAR_14 = 0;
  }
  VAR_11->read.olinfo_status = 0;

  VAR_16 = FUNC_21(VAR_13);
  VAR_15 -= VAR_16;

  VAR_17 = FUNC_20(VAR_6->dev, VAR_13, 0,
           VAR_16, VAR_1);

  VAR_10 = &VAR_6->tx_buffer_info[VAR_14];
 }


 VAR_18 |= VAR_16 | VAR_3;
 VAR_11->read.cmd_type_len = FUNC_1(VAR_18);

 FUNC_17(FUNC_25(VAR_6), VAR_7->bytecount);


 VAR_7->time_stamp = VAR_4;

 FUNC_24(VAR_9);
 FUNC_27();


 VAR_7->next_to_watch = VAR_11;

 VAR_14++;
 if (VAR_14 == VAR_6->count)
  VAR_14 = 0;

 VAR_6->next_to_use = VAR_14;


 FUNC_13(VAR_6, VAR_0);

 if (FUNC_19(FUNC_25(VAR_6)) || !FUNC_18()) {
  FUNC_28(VAR_14, VAR_6->tail);
 }

 return 0;
dma_error:
 FUNC_3(VAR_6->dev, "TX DMA map failed\n");
 VAR_10 = &VAR_6->tx_buffer_info[VAR_14];


 while (VAR_10 != VAR_7) {
  if (FUNC_9(VAR_10, VAR_5))
   FUNC_11(VAR_6->dev,
           FUNC_7(VAR_10, VAR_17),
           FUNC_9(VAR_10, VAR_5),
           VAR_1);
  FUNC_10(VAR_10, VAR_5, 0);

  if (VAR_14-- == 0)
   VAR_14 += VAR_6->count;
  VAR_10 = &VAR_6->tx_buffer_info[VAR_14];
 }

 if (FUNC_9(VAR_10, VAR_5))
  FUNC_12(VAR_6->dev,
     FUNC_7(VAR_10, VAR_17),
     FUNC_9(VAR_10, VAR_5),
     VAR_1);
 FUNC_10(VAR_10, VAR_5, 0);

 FUNC_4(VAR_10->skb);
 VAR_10->skb = ((void*)0);

 VAR_6->next_to_use = VAR_14;

 return -1;
}
