
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; int data_len; int truesize; int ip_summed; } ;
struct sge_qset {int nomem; int napi; int * port_stats; struct cpl_rx_pkt* lro_va; TYPE_5__* netdev; } ;
struct TYPE_6__ {scalar_t__ page; } ;
struct sge_fl {size_t cidx; int alloc_size; TYPE_1__ pg_chunk; scalar_t__ buf_size; int credits; struct rx_sw_desc* sdesc; } ;
struct TYPE_7__ {scalar_t__ page; int offset; struct cpl_rx_pkt* va; int mapping; int * p_cnt; } ;
struct rx_sw_desc {TYPE_2__ pg_chunk; } ;
struct port_info {size_t first_qset; } ;
struct cpl_rx_pkt {scalar_t__ csum; int vlan; scalar_t__ vlan_valid; scalar_t__ csum_valid; } ;
struct TYPE_8__ {struct sge_qset* qs; } ;
struct adapter {TYPE_3__ sge; int pdev; } ;
typedef int skb_frag_t ;
struct TYPE_10__ {int features; } ;
struct TYPE_9__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct rx_sw_desc*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct port_info* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 TYPE_4__* FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_15(struct adapter *VAR_9, struct sge_qset *VAR_10,
    struct sge_fl *VAR_11, int VAR_12, int VAR_13)
{
 struct rx_sw_desc *VAR_14 = &VAR_11->sdesc[VAR_11->cidx];
 struct port_info *VAR_15 = FUNC_6(VAR_10->netdev);
 struct sk_buff *VAR_16 = ((void*)0);
 struct cpl_rx_pkt *VAR_17;
 skb_frag_t *VAR_18;
 int VAR_19;
 int VAR_20 = 0;

 if (!VAR_10->nomem) {
  VAR_16 = FUNC_4(&VAR_10->napi);
  VAR_10->nomem = !VAR_16;
 }

 VAR_11->credits--;

 FUNC_8(VAR_9->pdev,
        FUNC_2(VAR_14, VAR_8),
        VAR_11->buf_size - VAR_5,
        VAR_4);

 (*VAR_14->pg_chunk.p_cnt)--;
 if (!*VAR_14->pg_chunk.p_cnt && VAR_14->pg_chunk.page != VAR_11->pg_chunk.page)
  FUNC_9(VAR_9->pdev,
          VAR_14->pg_chunk.mapping,
          VAR_11->alloc_size,
          VAR_4);

 if (!VAR_16) {
  FUNC_10(VAR_14->pg_chunk.page);
  if (VAR_13)
   VAR_10->nomem = 0;
  return;
 }

 VAR_18 = FUNC_14(VAR_16)->frags;
 VAR_19 = FUNC_14(VAR_16)->nr_frags;

 if (!VAR_19) {
  VAR_20 = 2 + sizeof(struct cpl_rx_pkt);
  VAR_17 = VAR_10->lro_va = VAR_14->pg_chunk.va + 2;

  if ((VAR_10->netdev->features & VAR_3) &&
       VAR_17->csum_valid && VAR_17->csum == FUNC_3(0xffff)) {
   VAR_16->ip_summed = VAR_1;
   VAR_10->port_stats[VAR_6]++;
  } else
   VAR_16->ip_summed = VAR_0;
 } else
  VAR_17 = VAR_10->lro_va;

 VAR_12 -= VAR_20;

 VAR_18 += VAR_19;
 FUNC_0(VAR_18, VAR_14->pg_chunk.page);
 FUNC_11(VAR_18, VAR_14->pg_chunk.offset + VAR_20);
 FUNC_12(VAR_18, VAR_12);

 VAR_16->len += VAR_12;
 VAR_16->data_len += VAR_12;
 VAR_16->truesize += VAR_12;
 FUNC_14(VAR_16)->nr_frags++;

 if (!VAR_13)
  return;

 FUNC_13(VAR_16, VAR_10 - &VAR_9->sge.qs[VAR_15->first_qset]);

 if (VAR_17->vlan_valid) {
  VAR_10->port_stats[VAR_7]++;
  FUNC_1(VAR_16, FUNC_3(VAR_2), FUNC_7(VAR_17->vlan));
 }
 FUNC_5(&VAR_10->napi);
}
