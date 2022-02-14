
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {unsigned char* data; unsigned int data_len; } ;
struct fm10k_tx_desc {scalar_t__ vlan; } ;
struct fm10k_tx_buffer {struct fm10k_tx_desc* next_to_watch; struct sk_buff* skb; int bytecount; int tx_flags; } ;
struct fm10k_ring {size_t next_to_use; size_t count; struct fm10k_tx_buffer* tx_buffer; int dev; int tail; } ;
typedef int skb_frag_t ;
typedef unsigned int dma_addr_t ;
struct TYPE_2__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct fm10k_tx_desc* FUNC_0 (struct fm10k_ring*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (int ,unsigned char*,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct fm10k_tx_buffer*,unsigned int,unsigned int) ;
 int FUNC_6 (struct fm10k_tx_buffer*,int ,unsigned int) ;
 int FUNC_7 (struct fm10k_ring*,int ) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (struct fm10k_ring*,struct fm10k_tx_desc*,int ,unsigned int,unsigned int,int ) ;
 int FUNC_10 (struct fm10k_ring*,struct fm10k_tx_buffer*) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;
 unsigned int FUNC_15 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_16 (int *) ;
 unsigned int FUNC_17 (struct sk_buff*) ;
 TYPE_1__* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct fm10k_ring*) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 () ;
 int FUNC_25 (size_t,int ) ;

__attribute__((used)) static void FUNC_26(struct fm10k_ring *VAR_5,
    struct fm10k_tx_buffer *VAR_6)
{
 struct sk_buff *VAR_7 = VAR_6->skb;
 struct fm10k_tx_buffer *VAR_8;
 struct fm10k_tx_desc *VAR_9;
 skb_frag_t *VAR_10;
 unsigned char *VAR_11;
 dma_addr_t VAR_12;
 unsigned int VAR_13, VAR_14;
 u32 VAR_15 = VAR_6->tx_flags;
 u16 VAR_16 = VAR_5->next_to_use;
 u8 VAR_17 = FUNC_8(VAR_7, VAR_15);

 VAR_9 = FUNC_0(VAR_5, VAR_16);


 if (FUNC_21(VAR_7))
  VAR_9->vlan = FUNC_1(FUNC_20(VAR_7));
 else
  VAR_9->vlan = 0;

 VAR_14 = FUNC_17(VAR_7);
 VAR_11 = VAR_7->data;

 VAR_12 = FUNC_3(VAR_5->dev, VAR_11, VAR_14, VAR_1);

 VAR_13 = VAR_7->data_len;
 VAR_8 = VAR_6;

 for (VAR_10 = &FUNC_18(VAR_7)->frags[0];; VAR_10++) {
  if (FUNC_4(VAR_5->dev, VAR_12))
   goto dma_error;


  FUNC_6(VAR_8, VAR_4, VAR_14);
  FUNC_5(VAR_8, VAR_12, VAR_12);

  while (FUNC_23(VAR_14 > VAR_2)) {
   if (FUNC_9(VAR_5, VAR_9++, VAR_16++, VAR_12,
            VAR_2, VAR_17)) {
    VAR_9 = FUNC_0(VAR_5, 0);
    VAR_16 = 0;
   }

   VAR_12 += VAR_2;
   VAR_14 -= VAR_2;
  }

  if (FUNC_11(!VAR_13))
   break;

  if (FUNC_9(VAR_5, VAR_9++, VAR_16++,
           VAR_12, VAR_14, VAR_17)) {
   VAR_9 = FUNC_0(VAR_5, 0);
   VAR_16 = 0;
  }

  VAR_14 = FUNC_16(VAR_10);
  VAR_13 -= VAR_14;

  VAR_12 = FUNC_15(VAR_5->dev, VAR_10, 0, VAR_14,
           VAR_1);

  VAR_8 = &VAR_5->tx_buffer[VAR_16];
 }


 VAR_17 |= VAR_3;

 if (FUNC_9(VAR_5, VAR_9, VAR_16++, VAR_12, VAR_14, VAR_17))
  VAR_16 = 0;


 FUNC_12(FUNC_22(VAR_5), VAR_6->bytecount);


 FUNC_19(VAR_6->skb);
 FUNC_24();


 VAR_6->next_to_watch = VAR_9;

 VAR_5->next_to_use = VAR_16;


 FUNC_7(VAR_5, VAR_0);


 if (FUNC_14(FUNC_22(VAR_5)) || !FUNC_13()) {
  FUNC_25(VAR_16, VAR_5->tail);
 }

 return;
dma_error:
 FUNC_2(VAR_5->dev, "TX DMA map failed\n");


 for (;;) {
  VAR_8 = &VAR_5->tx_buffer[VAR_16];
  FUNC_10(VAR_5, VAR_8);
  if (VAR_8 == VAR_6)
   break;
  if (VAR_16 == 0)
   VAR_16 = VAR_5->count;
  VAR_16--;
 }

 VAR_5->next_to_use = VAR_16;
}
