
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {unsigned int data_len; int data; } ;
struct i40e_tx_desc {void* cmd_type_offset_bsz; void* buffer_addr; } ;
struct i40e_tx_buffer {int tx_flags; struct i40e_tx_desc* next_to_watch; int bytecount; } ;
struct i40e_ring {size_t next_to_use; size_t count; size_t packet_stride; struct i40e_tx_buffer* tx_bi; int dev; int tail; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct i40e_tx_desc* FUNC_0 (struct i40e_ring*,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 void* FUNC_1 (int,int,unsigned int,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (struct i40e_tx_buffer*,int,int) ;
 int FUNC_7 (struct i40e_tx_buffer*,int ,unsigned int) ;
 int FUNC_8 (struct i40e_ring*,int ) ;
 int FUNC_9 (struct i40e_ring*,struct i40e_tx_buffer*) ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_15 (int *) ;
 unsigned int FUNC_16 (struct sk_buff*) ;
 TYPE_1__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct i40e_ring*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 () ;
 int FUNC_22 (size_t,int ) ;

__attribute__((used)) static inline int FUNC_23(struct i40e_ring *VAR_13, struct sk_buff *VAR_14,
         struct i40e_tx_buffer *VAR_15, u32 VAR_16,
         const u8 VAR_17, u32 VAR_18, u32 VAR_19)
{
 unsigned int VAR_20 = VAR_14->data_len;
 unsigned int VAR_21 = FUNC_16(VAR_14);
 skb_frag_t *VAR_22;
 struct i40e_tx_buffer *VAR_23;
 struct i40e_tx_desc *VAR_24;
 u16 VAR_25 = VAR_13->next_to_use;
 u32 VAR_26 = 0;
 dma_addr_t VAR_27;
 u16 VAR_28 = 1;

 if (VAR_16 & VAR_8) {
  VAR_18 |= VAR_6;
  VAR_26 = (VAR_16 & VAR_9) >>
    VAR_10;
 }

 VAR_15->tx_flags = VAR_16;

 VAR_27 = FUNC_4(VAR_13->dev, VAR_14->data, VAR_21, VAR_1);

 VAR_24 = FUNC_0(VAR_13, VAR_25);
 VAR_23 = VAR_15;

 for (VAR_22 = &FUNC_17(VAR_14)->frags[0];; VAR_22++) {
  unsigned int VAR_29 = VAR_3;

  if (FUNC_5(VAR_13->dev, VAR_27))
   goto dma_error;


  FUNC_7(VAR_23, VAR_12, VAR_21);
  FUNC_6(VAR_23, VAR_27, VAR_27);


  VAR_29 += -VAR_27 & (VAR_4 - 1);
  VAR_24->buffer_addr = FUNC_2(VAR_27);

  while (FUNC_20(VAR_21 > VAR_2)) {
   VAR_24->cmd_type_offset_bsz =
    FUNC_1(VAR_18, VAR_19,
        VAR_29, VAR_26);

   VAR_24++;
   VAR_25++;
   VAR_28++;

   if (VAR_25 == VAR_13->count) {
    VAR_24 = FUNC_0(VAR_13, 0);
    VAR_25 = 0;
   }

   VAR_27 += VAR_29;
   VAR_21 -= VAR_29;

   VAR_29 = VAR_3;
   VAR_24->buffer_addr = FUNC_2(VAR_27);
  }

  if (FUNC_10(!VAR_20))
   break;

  VAR_24->cmd_type_offset_bsz = FUNC_1(VAR_18, VAR_19,
         VAR_21, VAR_26);

  VAR_24++;
  VAR_25++;
  VAR_28++;

  if (VAR_25 == VAR_13->count) {
   VAR_24 = FUNC_0(VAR_13, 0);
   VAR_25 = 0;
  }

  VAR_21 = FUNC_15(VAR_22);
  VAR_20 -= VAR_21;

  VAR_27 = FUNC_14(VAR_13->dev, VAR_22, 0, VAR_21,
           VAR_1);

  VAR_23 = &VAR_13->tx_bi[VAR_25];
 }

 FUNC_11(FUNC_19(VAR_13), VAR_15->bytecount);

 VAR_25++;
 if (VAR_25 == VAR_13->count)
  VAR_25 = 0;

 VAR_13->next_to_use = VAR_25;

 FUNC_8(VAR_13, VAR_0);


 VAR_18 |= VAR_5;




 VAR_28 |= ++VAR_13->packet_stride;

 if (VAR_28 >= VAR_11) {

  VAR_18 |= VAR_7;
  VAR_13->packet_stride = 0;
 }

 VAR_24->cmd_type_offset_bsz =
   FUNC_1(VAR_18, VAR_19, VAR_21, VAR_26);

 FUNC_18(VAR_14);







 FUNC_21();


 VAR_15->next_to_watch = VAR_24;


 if (FUNC_13(FUNC_19(VAR_13)) || !FUNC_12()) {
  FUNC_22(VAR_25, VAR_13->tail);
 }

 return 0;

dma_error:
 FUNC_3(VAR_13->dev, "TX DMA map failed\n");


 for (;;) {
  VAR_23 = &VAR_13->tx_bi[VAR_25];
  FUNC_9(VAR_13, VAR_23);
  if (VAR_23 == VAR_15)
   break;
  if (VAR_25 == 0)
   VAR_25 = VAR_13->count;
  VAR_25--;
 }

 VAR_13->next_to_use = VAR_25;

 return -1;
}
