
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned int len; unsigned int data_len; unsigned int truesize; int data; } ;
struct sge_rspq {scalar_t__ rx_recycle_buf; struct sk_buff* pg_skb; } ;
struct TYPE_4__ {scalar_t__ page; } ;
struct sge_fl {size_t cidx; unsigned int credits; int alloc_size; TYPE_1__ pg_chunk; struct rx_sw_desc* sdesc; } ;
struct TYPE_5__ {scalar_t__ page; scalar_t__ offset; int va; int mapping; int * p_cnt; } ;
struct rx_sw_desc {TYPE_2__ pg_chunk; } ;
struct adapter {int pdev; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_1 (unsigned int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct rx_sw_desc*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int,int ) ;
 int FUNC_6 (int ,int ,unsigned int,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct adapter*,struct sge_fl*,size_t) ;
 int FUNC_10 (struct sk_buff*,int ,scalar_t__,scalar_t__,unsigned int) ;
 TYPE_3__* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct adapter *VAR_5, struct sge_fl *VAR_6,
         struct sge_rspq *VAR_7, unsigned int VAR_8,
         unsigned int VAR_9)
{
 struct sk_buff *VAR_10, *VAR_11;
 struct rx_sw_desc *VAR_12 = &VAR_6->sdesc[VAR_6->cidx];

 dma_addr_t VAR_13 = FUNC_2(VAR_12, VAR_13);

 VAR_10 = VAR_11 = VAR_7->pg_skb;
 if (!VAR_11 && (VAR_8 <= VAR_2)) {
  VAR_10 = FUNC_1(VAR_8, VAR_0);
  if (FUNC_3(VAR_10 != ((void*)0))) {
   FUNC_0(VAR_10, VAR_8);
   FUNC_5(VAR_5->pdev, VAR_13, VAR_8,
         VAR_1);
   FUNC_4(VAR_10->data, VAR_12->pg_chunk.va, VAR_8);
   FUNC_6(VAR_5->pdev, VAR_13,
             VAR_8,
             VAR_1);
  } else if (!VAR_9)
   return ((void*)0);
recycle:
  VAR_6->credits--;
  FUNC_9(VAR_5, VAR_6, VAR_6->cidx);
  VAR_7->rx_recycle_buf++;
  return VAR_10;
 }

 if (FUNC_12(VAR_7->rx_recycle_buf || (!VAR_11 && VAR_6->credits <= VAR_9)))
  goto recycle;

 FUNC_8(VAR_12->pg_chunk.p_cnt);

 if (!VAR_11)
  VAR_10 = FUNC_1(VAR_3, VAR_0);

 if (FUNC_12(!VAR_10)) {
  if (!VAR_9)
   return ((void*)0);
  goto recycle;
 }

 FUNC_5(VAR_5->pdev, VAR_13, VAR_8,
        VAR_1);
 (*VAR_12->pg_chunk.p_cnt)--;
 if (!*VAR_12->pg_chunk.p_cnt && VAR_12->pg_chunk.page != VAR_6->pg_chunk.page)
  FUNC_7(VAR_5->pdev,
          VAR_12->pg_chunk.mapping,
          VAR_6->alloc_size,
          VAR_1);
 if (!VAR_11) {
  FUNC_0(VAR_10, VAR_3);
  FUNC_4(VAR_10->data, VAR_12->pg_chunk.va, VAR_3);
  FUNC_10(VAR_10, 0, VAR_12->pg_chunk.page,
       VAR_12->pg_chunk.offset + VAR_3,
       VAR_8 - VAR_3);
  VAR_10->len = VAR_8;
  VAR_10->data_len = VAR_8 - VAR_3;
  VAR_10->truesize += VAR_10->data_len;
 } else {
  FUNC_10(VAR_10, FUNC_11(VAR_10)->nr_frags,
       VAR_12->pg_chunk.page,
       VAR_12->pg_chunk.offset, VAR_8);
  VAR_10->len += VAR_8;
  VAR_10->data_len += VAR_8;
  VAR_10->truesize += VAR_8;
 }

 VAR_6->credits--;




 return VAR_10;
}
