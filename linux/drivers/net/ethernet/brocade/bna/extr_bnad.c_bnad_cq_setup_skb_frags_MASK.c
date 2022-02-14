
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int data_len; int len; int truesize; } ;
struct bnad_rx_unmap_q {struct bnad_rx_unmap* unmap; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct bnad_rx_unmap {TYPE_3__ vector; int * page; scalar_t__ page_offset; } ;
struct bnad {TYPE_1__* pcidev; } ;
struct bna_rcb {size_t consumer_index; int q_depth; struct bnad* bnad; struct bnad_rx_unmap_q* unmap_q; } ;
struct bna_cq_entry {int length; int rxq_id; } ;
struct bna_ccb {size_t producer_index; int q_depth; struct bna_rcb** rcb; struct bna_cq_entry* sw_q; } ;
struct TYPE_5__ {int nr_frags; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int ,int *,scalar_t__,size_t) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_9(struct bna_ccb *VAR_2, struct sk_buff *VAR_3, u32 VAR_4)
{
 struct bna_rcb *VAR_5;
 struct bnad *VAR_6;
 struct bnad_rx_unmap_q *VAR_7;
 struct bna_cq_entry *VAR_8, *VAR_9;
 u32 VAR_10, VAR_11, VAR_12 = 0;

 VAR_8 = VAR_2->sw_q;
 VAR_11 = VAR_2->producer_index;
 VAR_9 = &VAR_8[VAR_11];

 VAR_5 = FUNC_1(VAR_9->rxq_id) ? VAR_2->rcb[1] : VAR_2->rcb[0];
 VAR_7 = VAR_5->unmap_q;
 VAR_6 = VAR_5->bnad;
 VAR_10 = VAR_5->consumer_index;


 FUNC_6(FUNC_5(VAR_7->unmap[VAR_10].page) +
   VAR_7->unmap[VAR_10].page_offset);

 while (VAR_4--) {
  struct bnad_rx_unmap *VAR_13;
  u32 VAR_14;

  VAR_13 = &VAR_7->unmap[VAR_10];
  FUNC_0(VAR_10, VAR_5->q_depth);

  FUNC_3(&VAR_6->pcidev->dev,
          FUNC_2(&VAR_13->vector, VAR_1),
          VAR_13->vector.len, VAR_0);

  VAR_14 = FUNC_4(VAR_9->length);
  VAR_3->truesize += VAR_13->vector.len;
  VAR_12 += VAR_14;

  FUNC_7(VAR_3, FUNC_8(VAR_3)->nr_frags,
       VAR_13->page, VAR_13->page_offset, VAR_14);

  VAR_13->page = ((void*)0);
  VAR_13->vector.len = 0;

  FUNC_0(VAR_11, VAR_2->q_depth);
  VAR_9 = &VAR_8[VAR_11];
 }

 VAR_3->len += VAR_12;
 VAR_3->data_len += VAR_12;
}
