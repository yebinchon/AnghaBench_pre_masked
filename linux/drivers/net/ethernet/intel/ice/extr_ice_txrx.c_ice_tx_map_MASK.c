
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u16 ;
struct sk_buff {unsigned int data_len; int data; } ;
struct ice_tx_offload_params {int td_l2tag1; int td_cmd; int td_offset; } ;
struct ice_tx_desc {void* cmd_type_offset_bsz; void* buf_addr; } ;
struct ice_tx_buf {int tx_flags; struct ice_tx_desc* next_to_watch; struct sk_buff* skb; int bytecount; } ;
struct ice_ring {size_t next_to_use; size_t count; struct ice_tx_buf* tx_buf; int tail; int dev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct ice_tx_desc* FUNC_0 (struct ice_ring*,size_t) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int,int,unsigned int,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (struct ice_tx_buf*,int,int) ;
 int FUNC_6 (struct ice_tx_buf*,int ,unsigned int) ;
 int FUNC_7 (struct ice_ring*,int ) ;
 int FUNC_8 (struct ice_ring*,struct ice_tx_buf*) ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_14 (int *) ;
 unsigned int FUNC_15 (struct sk_buff*) ;
 TYPE_1__* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct ice_ring*) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 () ;
 int FUNC_21 (size_t,int ) ;

__attribute__((used)) static void
FUNC_22(struct ice_ring *VAR_12, struct ice_tx_buf *VAR_13,
    struct ice_tx_offload_params *VAR_14)
{
 u64 VAR_15, VAR_16, VAR_17;
 u16 VAR_18 = VAR_12->next_to_use;
 skb_frag_t *VAR_19;
 unsigned int VAR_20, VAR_21;
 struct ice_tx_desc *VAR_22;
 struct ice_tx_buf *VAR_23;
 struct sk_buff *VAR_24;
 dma_addr_t VAR_25;

 VAR_16 = VAR_14->td_l2tag1;
 VAR_17 = VAR_14->td_cmd;
 VAR_15 = VAR_14->td_offset;
 VAR_24 = VAR_13->skb;

 VAR_20 = VAR_24->data_len;
 VAR_21 = FUNC_15(VAR_24);

 VAR_22 = FUNC_0(VAR_12, VAR_18);

 if (VAR_13->tx_flags & VAR_8) {
  VAR_17 |= (u64)VAR_6;
  VAR_16 = (VAR_13->tx_flags & VAR_9) >>
     VAR_10;
 }

 VAR_25 = FUNC_3(VAR_12->dev, VAR_24->data, VAR_21, VAR_1);

 VAR_23 = VAR_13;

 for (VAR_19 = &FUNC_16(VAR_24)->frags[0];; VAR_19++) {
  unsigned int VAR_26 = VAR_3;

  if (FUNC_4(VAR_12->dev, VAR_25))
   goto dma_error;


  FUNC_6(VAR_23, VAR_11, VAR_21);
  FUNC_5(VAR_23, VAR_25, VAR_25);


  VAR_26 += -VAR_25 & (VAR_4 - 1);
  VAR_22->buf_addr = FUNC_2(VAR_25);




  while (FUNC_19(VAR_21 > VAR_2)) {
   VAR_22->cmd_type_offset_bsz =
    FUNC_1(VAR_17, VAR_15, VAR_26, VAR_16);

   VAR_22++;
   VAR_18++;

   if (VAR_18 == VAR_12->count) {
    VAR_22 = FUNC_0(VAR_12, 0);
    VAR_18 = 0;
   }

   VAR_25 += VAR_26;
   VAR_21 -= VAR_26;

   VAR_26 = VAR_3;
   VAR_22->buf_addr = FUNC_2(VAR_25);
  }

  if (FUNC_9(!VAR_20))
   break;

  VAR_22->cmd_type_offset_bsz = FUNC_1(VAR_17, VAR_15,
         VAR_21, VAR_16);

  VAR_22++;
  VAR_18++;

  if (VAR_18 == VAR_12->count) {
   VAR_22 = FUNC_0(VAR_12, 0);
   VAR_18 = 0;
  }

  VAR_21 = FUNC_14(VAR_19);
  VAR_20 -= VAR_21;

  VAR_25 = FUNC_13(VAR_12->dev, VAR_19, 0, VAR_21,
           VAR_1);

  VAR_23 = &VAR_12->tx_buf[VAR_18];
 }


 FUNC_10(FUNC_18(VAR_12), VAR_13->bytecount);


 FUNC_17(VAR_13->skb);

 VAR_18++;
 if (VAR_18 == VAR_12->count)
  VAR_18 = 0;


 VAR_17 |= (u64)(VAR_5 | VAR_7);
 VAR_22->cmd_type_offset_bsz =
   FUNC_1(VAR_17, VAR_15, VAR_21, VAR_16);







 FUNC_20();


 VAR_13->next_to_watch = VAR_22;

 VAR_12->next_to_use = VAR_18;

 FUNC_7(VAR_12, VAR_0);


 if (FUNC_12(FUNC_18(VAR_12)) || !FUNC_11()) {
  FUNC_21(VAR_18, VAR_12->tail);
 }

 return;

dma_error:

 for (;;) {
  VAR_23 = &VAR_12->tx_buf[VAR_18];
  FUNC_8(VAR_12, VAR_23);
  if (VAR_23 == VAR_13)
   break;
  if (VAR_18 == 0)
   VAR_18 = VAR_12->count;
  VAR_18--;
 }

 VAR_12->next_to_use = VAR_18;
}
