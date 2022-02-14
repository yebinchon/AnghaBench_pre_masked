
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union gve_tx_desc {int dummy; } gve_tx_desc ;
typedef size_t u32 ;
struct sk_buff {int len; } ;
struct TYPE_6__ {TYPE_1__* qpl; scalar_t__ base; } ;
struct gve_tx_ring {size_t req; size_t mask; TYPE_2__ tx_fifo; union gve_tx_desc* desc; struct gve_tx_buffer_state* info; } ;
struct gve_tx_buffer_state {TYPE_4__* iov; struct sk_buff* skb; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int iov_len; scalar_t__ iov_offset; } ;
struct TYPE_5__ {int page_buses; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,int,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (union gve_tx_desc*,struct sk_buff*,int,int,int,int,scalar_t__) ;
 int FUNC_5 (union gve_tx_desc*,struct sk_buff*,int,int,scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int,scalar_t__,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct gve_tx_ring *VAR_0, struct sk_buff *VAR_1,
     struct device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 union gve_tx_desc *VAR_8, *VAR_9;
 struct gve_tx_buffer_state *VAR_10;
 bool VAR_11 = FUNC_9(VAR_1);
 u32 VAR_12 = VAR_0->req & VAR_0->mask;
 int VAR_13 = 2;
 int VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_10 = &VAR_0->info[VAR_12];
 VAR_8 = &VAR_0->desc[VAR_12];

 VAR_7 = FUNC_6(VAR_1);





 VAR_4 = VAR_11 ? VAR_7 + FUNC_10(VAR_1) :
   FUNC_8(VAR_1);

 VAR_10->skb = VAR_1;



 VAR_3 = FUNC_3(&VAR_0->tx_fifo, VAR_4);
 VAR_5 = FUNC_2(&VAR_0->tx_fifo, VAR_4 + VAR_3,
           &VAR_10->iov[0]);
 FUNC_0(!VAR_5, "hdr_nfrags should never be 0!");
 VAR_6 = FUNC_2(&VAR_0->tx_fifo, VAR_1->len - VAR_4,
        &VAR_10->iov[VAR_13]);

 FUNC_4(VAR_8, VAR_1, VAR_11, VAR_7,
        1 + VAR_6, VAR_4,
        VAR_10->iov[VAR_5 - 1].iov_offset);

 FUNC_7(VAR_1, 0,
        VAR_0->tx_fifo.base + VAR_10->iov[VAR_5 - 1].iov_offset,
        VAR_4);
 FUNC_1(VAR_2, VAR_0->tx_fifo.qpl->page_buses,
    VAR_10->iov[VAR_5 - 1].iov_offset,
    VAR_10->iov[VAR_5 - 1].iov_len);
 VAR_14 = VAR_4;

 for (VAR_16 = VAR_13; VAR_16 < VAR_6 + VAR_13; VAR_16++) {
  VAR_15 = (VAR_0->req + 1 + VAR_16 - VAR_13) & VAR_0->mask;
  VAR_9 = &VAR_0->desc[VAR_15];

  FUNC_5(VAR_9, VAR_1, VAR_11,
         VAR_10->iov[VAR_16].iov_len,
         VAR_10->iov[VAR_16].iov_offset);

  FUNC_7(VAR_1, VAR_14,
         VAR_0->tx_fifo.base + VAR_10->iov[VAR_16].iov_offset,
         VAR_10->iov[VAR_16].iov_len);
  FUNC_1(VAR_2, VAR_0->tx_fifo.qpl->page_buses,
     VAR_10->iov[VAR_16].iov_offset,
     VAR_10->iov[VAR_16].iov_len);
  VAR_14 += VAR_10->iov[VAR_16].iov_len;
 }

 return 1 + VAR_6;
}
