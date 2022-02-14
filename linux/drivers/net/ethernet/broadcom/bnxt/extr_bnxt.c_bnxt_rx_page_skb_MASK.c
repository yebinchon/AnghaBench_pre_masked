
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int data; unsigned int data_len; unsigned int tail; } ;
struct page {int dummy; } ;
struct bnxt_rx_ring_info {TYPE_2__* bnapi; int rx_prod; } ;
struct bnxt {int dev; int rx_dir; TYPE_1__* pdev; scalar_t__ rx_dma_offset; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int * frags; } ;
struct TYPE_5__ {int napi; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct bnxt*,struct bnxt_rx_ring_info*,int ,int ) ;
 int FUNC_2 (struct bnxt_rx_ring_info*,int ,void*) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 unsigned int FUNC_4 (int ,int *,unsigned int) ;
 int FUNC_5 (int,int *,int) ;
 struct sk_buff* FUNC_6 (int *,unsigned int) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (struct sk_buff*,int ,struct page*,int,unsigned int,int ) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int *,unsigned int) ;
 TYPE_3__* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct bnxt *VAR_4,
     struct bnxt_rx_ring_info *VAR_5,
     u16 VAR_6, void *VAR_7, u8 *VAR_8,
     dma_addr_t VAR_9,
     unsigned int VAR_10)
{
 unsigned int VAR_11 = VAR_10 >> 16;
 unsigned int VAR_12 = VAR_10 & 0xffff;
 skb_frag_t *VAR_13;
 struct page *VAR_14 = VAR_7;
 u16 VAR_15 = VAR_5->rx_prod;
 struct sk_buff *VAR_16;
 int VAR_17, VAR_18;

 VAR_18 = FUNC_1(VAR_4, VAR_5, VAR_15, VAR_1);
 if (FUNC_12(VAR_18)) {
  FUNC_2(VAR_5, VAR_6, VAR_7);
  return ((void*)0);
 }
 VAR_9 -= VAR_4->rx_dma_offset;
 FUNC_3(&VAR_4->pdev->dev, VAR_9, VAR_3, VAR_4->rx_dir,
        VAR_0);

 if (FUNC_12(!VAR_11))
  VAR_11 = FUNC_4(VAR_4->dev, VAR_8, VAR_12);

 VAR_16 = FUNC_6(&VAR_5->bnapi->napi, VAR_11);
 if (!VAR_16) {
  FUNC_0(VAR_14);
  return ((void*)0);
 }

 VAR_17 = (void *)VAR_8 - FUNC_7(VAR_14);
 FUNC_8(VAR_16, 0, VAR_14, VAR_17, VAR_12, VAR_3);
 FUNC_5(VAR_16->data - VAR_2, VAR_8 - VAR_2,
        VAR_11 + VAR_2);

 VAR_13 = &FUNC_11(VAR_16)->frags[0];
 FUNC_10(VAR_13, VAR_11);
 FUNC_9(VAR_13, VAR_11);
 VAR_16->data_len -= VAR_11;
 VAR_16->tail += VAR_11;

 return VAR_16;
}
