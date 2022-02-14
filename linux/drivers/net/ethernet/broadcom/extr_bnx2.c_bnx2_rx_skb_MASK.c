
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {unsigned int len; unsigned int tail; unsigned int data_len; int truesize; } ;
struct bnx2_sw_pg {int * page; } ;
struct bnx2_rx_ring_info {size_t rx_pg_cons; size_t rx_pg_prod; struct bnx2_sw_pg* rx_pg_ring; } ;
struct bnx2 {TYPE_1__* pdev; int rx_buf_use_size; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int * frags; } ;
struct TYPE_3__ {int dev; } ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (size_t) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bnx2*,struct bnx2_rx_ring_info*,size_t,int ) ;
 int FUNC_4 (struct bnx2*,struct bnx2_rx_ring_info*,size_t,int ) ;
 int FUNC_5 (struct bnx2*,struct bnx2_rx_ring_info*,int *,size_t,size_t) ;
 int FUNC_6 (struct bnx2*,struct bnx2_rx_ring_info*,struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_7 (int *,int ) ;
 int FUNC_8 (struct bnx2_sw_pg*,int ) ;
 int FUNC_9 (int *,int ,scalar_t__,int ) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_5 ;
 unsigned int FUNC_13 (unsigned int,unsigned int) ;
 int FUNC_14 (struct sk_buff*,unsigned int,int *,int ,unsigned int) ;
 int FUNC_15 (int *,unsigned int) ;
 int FUNC_16 (struct sk_buff*,unsigned int) ;
 int FUNC_17 (struct sk_buff*,scalar_t__) ;
 TYPE_2__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static struct sk_buff *
FUNC_20(struct bnx2 *VAR_6, struct bnx2_rx_ring_info *VAR_7, u8 *VAR_8,
     unsigned int VAR_9, unsigned int VAR_10, dma_addr_t VAR_11,
     u32 VAR_12)
{
 int VAR_13;
 u16 VAR_14 = VAR_12 & 0xffff;
 struct sk_buff *VAR_15;

 VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_14, VAR_1);
 if (FUNC_19(VAR_13)) {
  FUNC_5(VAR_6, VAR_7, VAR_8, (u16) (VAR_12 >> 16), VAR_14);
error:
  if (VAR_10) {
   unsigned int VAR_16 = VAR_9 + 4;
   int VAR_17 = FUNC_2(VAR_16 - VAR_10) >> VAR_2;

   FUNC_6(VAR_6, VAR_7, ((void*)0), VAR_17);
  }
  return ((void*)0);
 }

 FUNC_10(&VAR_6->pdev->dev, VAR_11, VAR_6->rx_buf_use_size,
    VAR_4);
 VAR_15 = FUNC_7(VAR_8, 0);
 if (!VAR_15) {
  FUNC_12(VAR_8);
  goto error;
 }
 FUNC_17(VAR_15, ((u8 *)FUNC_11(VAR_8) - VAR_8) + VAR_0);
 if (VAR_10 == 0) {
  FUNC_16(VAR_15, VAR_9);
  return VAR_15;
 } else {
  unsigned int VAR_18, VAR_19, VAR_20, VAR_21;
  struct bnx2_sw_pg *VAR_22;
  u16 VAR_23 = VAR_7->rx_pg_cons;
  u16 VAR_24 = VAR_7->rx_pg_prod;

  VAR_20 = VAR_9 + 4 - VAR_10;
  VAR_21 = FUNC_2(VAR_20) >> VAR_2;
  FUNC_16(VAR_15, VAR_10);

  for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++) {
   dma_addr_t VAR_25;

   VAR_19 = FUNC_13(VAR_20, (unsigned int) VAR_3);
   if (FUNC_19(VAR_19 <= 4)) {
    unsigned int VAR_26 = 4 - VAR_19;

    VAR_7->rx_pg_cons = VAR_23;
    VAR_7->rx_pg_prod = VAR_24;
    FUNC_6(VAR_6, VAR_7, ((void*)0),
       VAR_21 - VAR_18);
    VAR_15->len -= VAR_26;
    if (VAR_18 == 0) {
     VAR_15->tail -= VAR_26;
    } else {
     skb_frag_t *VAR_27 =
      &FUNC_18(VAR_15)->frags[VAR_18 - 1];
     FUNC_15(VAR_27, VAR_26);
     VAR_15->data_len -= VAR_26;
    }
    return VAR_15;
   }
   VAR_22 = &VAR_7->rx_pg_ring[VAR_23];




   VAR_25 = FUNC_8(VAR_22, VAR_5);
   if (VAR_18 == VAR_21 - 1)
    VAR_19 -= 4;

   FUNC_14(VAR_15, VAR_18, VAR_22->page, 0, VAR_19);
   VAR_22->page = ((void*)0);

   VAR_13 = FUNC_4(VAR_6, VAR_7,
       FUNC_1(VAR_24),
       VAR_1);
   if (FUNC_19(VAR_13)) {
    VAR_7->rx_pg_cons = VAR_23;
    VAR_7->rx_pg_prod = VAR_24;
    FUNC_6(VAR_6, VAR_7, VAR_15,
       VAR_21 - VAR_18);
    return ((void*)0);
   }

   FUNC_9(&VAR_6->pdev->dev, VAR_25,
           VAR_3, VAR_4);

   VAR_20 -= VAR_19;
   VAR_15->data_len += VAR_19;
   VAR_15->truesize += VAR_3;
   VAR_15->len += VAR_19;

   VAR_24 = FUNC_0(VAR_24);
   VAR_23 = FUNC_1(FUNC_0(VAR_23));
  }
  VAR_7->rx_pg_prod = VAR_24;
  VAR_7->rx_pg_cons = VAR_23;
 }
 return VAR_15;
}
