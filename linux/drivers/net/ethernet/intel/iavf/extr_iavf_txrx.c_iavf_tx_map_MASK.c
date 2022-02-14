
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {unsigned int data_len; int data; } ;
struct iavf_tx_desc {void* cmd_type_offset_bsz; void* buffer_addr; } ;
struct iavf_tx_buffer {int tx_flags; struct iavf_tx_desc* next_to_watch; int bytecount; } ;
struct iavf_ring {size_t next_to_use; size_t count; struct iavf_tx_buffer* tx_bi; int dev; int tail; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iavf_tx_desc* FUNC_0 (struct iavf_ring*,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int,int,unsigned int,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (struct iavf_tx_buffer*,int,int) ;
 int FUNC_7 (struct iavf_tx_buffer*,int ,unsigned int) ;
 int FUNC_8 (struct iavf_ring*,int ) ;
 int FUNC_9 (struct iavf_ring*,struct iavf_tx_buffer*) ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_15 (int *) ;
 unsigned int FUNC_16 (struct sk_buff*) ;
 TYPE_1__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct iavf_ring*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 () ;
 int FUNC_22 (size_t,int ) ;

__attribute__((used)) static inline void FUNC_23(struct iavf_ring *VAR_11, struct sk_buff *VAR_12,
          struct iavf_tx_buffer *VAR_13, u32 VAR_14,
          const u8 VAR_15, u32 VAR_16, u32 VAR_17)
{
 unsigned int VAR_18 = VAR_12->data_len;
 unsigned int VAR_19 = FUNC_16(VAR_12);
 skb_frag_t *VAR_20;
 struct iavf_tx_buffer *VAR_21;
 struct iavf_tx_desc *VAR_22;
 u16 VAR_23 = VAR_11->next_to_use;
 u32 VAR_24 = 0;
 dma_addr_t VAR_25;

 if (VAR_14 & VAR_7) {
  VAR_16 |= VAR_6;
  VAR_24 = (VAR_14 & VAR_8) >>
    VAR_9;
 }

 VAR_13->tx_flags = VAR_14;

 VAR_25 = FUNC_4(VAR_11->dev, VAR_12->data, VAR_19, VAR_1);

 VAR_22 = FUNC_0(VAR_11, VAR_23);
 VAR_21 = VAR_13;

 for (VAR_20 = &FUNC_17(VAR_12)->frags[0];; VAR_20++) {
  unsigned int VAR_26 = VAR_3;

  if (FUNC_5(VAR_11->dev, VAR_25))
   goto dma_error;


  FUNC_7(VAR_21, VAR_10, VAR_19);
  FUNC_6(VAR_21, VAR_25, VAR_25);


  VAR_26 += -VAR_25 & (VAR_4 - 1);
  VAR_22->buffer_addr = FUNC_2(VAR_25);

  while (FUNC_20(VAR_19 > VAR_2)) {
   VAR_22->cmd_type_offset_bsz =
    FUNC_1(VAR_16, VAR_17,
        VAR_26, VAR_24);

   VAR_22++;
   VAR_23++;

   if (VAR_23 == VAR_11->count) {
    VAR_22 = FUNC_0(VAR_11, 0);
    VAR_23 = 0;
   }

   VAR_25 += VAR_26;
   VAR_19 -= VAR_26;

   VAR_26 = VAR_3;
   VAR_22->buffer_addr = FUNC_2(VAR_25);
  }

  if (FUNC_10(!VAR_18))
   break;

  VAR_22->cmd_type_offset_bsz = FUNC_1(VAR_16, VAR_17,
         VAR_19, VAR_24);

  VAR_22++;
  VAR_23++;

  if (VAR_23 == VAR_11->count) {
   VAR_22 = FUNC_0(VAR_11, 0);
   VAR_23 = 0;
  }

  VAR_19 = FUNC_15(VAR_20);
  VAR_18 -= VAR_19;

  VAR_25 = FUNC_14(VAR_11->dev, VAR_20, 0, VAR_19,
           VAR_1);

  VAR_21 = &VAR_11->tx_bi[VAR_23];
 }

 FUNC_11(FUNC_19(VAR_11), VAR_13->bytecount);

 VAR_23++;
 if (VAR_23 == VAR_11->count)
  VAR_23 = 0;

 VAR_11->next_to_use = VAR_23;

 FUNC_8(VAR_11, VAR_0);


 VAR_16 |= VAR_5;
 VAR_22->cmd_type_offset_bsz =
   FUNC_1(VAR_16, VAR_17, VAR_19, VAR_24);

 FUNC_18(VAR_12);







 FUNC_21();


 VAR_13->next_to_watch = VAR_22;


 if (FUNC_13(FUNC_19(VAR_11)) || !FUNC_12()) {
  FUNC_22(VAR_23, VAR_11->tail);
 }

 return;

dma_error:
 FUNC_3(VAR_11->dev, "TX DMA map failed\n");


 for (;;) {
  VAR_21 = &VAR_11->tx_bi[VAR_23];
  FUNC_9(VAR_11, VAR_21);
  if (VAR_21 == VAR_13)
   break;
  if (VAR_23 == 0)
   VAR_23 = VAR_11->count;
  VAR_23--;
 }

 VAR_11->next_to_use = VAR_23;
}
