
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_5__ {void* addr; } ;
struct alx_txd {int word1; void* len; TYPE_1__ adrl; int vlan_tag; } ;
struct alx_tx_queue {int write_idx; int count; TYPE_3__* bufs; int dev; struct alx_txd* tpd; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_7__ {struct sk_buff* skb; } ;
struct TYPE_6__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alx_tx_queue*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int VAR_4 ;
 int FUNC_8 (int ,int *,int ,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct alx_tx_queue *VAR_5, struct sk_buff *VAR_6)
{
 struct alx_txd *VAR_7, *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10, VAR_11, VAR_12 = VAR_5->write_idx;

 VAR_8 = &VAR_5->tpd[VAR_5->write_idx];
 VAR_7 = VAR_8;

 if (VAR_7->word1 & (1 << VAR_3)) {
  if (++VAR_5->write_idx == VAR_5->count)
   VAR_5->write_idx = 0;

  VAR_7 = &VAR_5->tpd[VAR_5->write_idx];
  VAR_7->len = VAR_8->len;
  VAR_7->vlan_tag = VAR_8->vlan_tag;
  VAR_7->word1 = VAR_8->word1;
 }

 VAR_10 = FUNC_10(VAR_6);
 VAR_9 = FUNC_4(VAR_5->dev, VAR_6->data, VAR_10,
        VAR_0);
 if (FUNC_5(VAR_5->dev, VAR_9))
  goto err_dma;

 FUNC_7(&VAR_5->bufs[VAR_5->write_idx], VAR_4, VAR_10);
 FUNC_6(&VAR_5->bufs[VAR_5->write_idx], VAR_9, VAR_9);

 VAR_7->adrl.addr = FUNC_3(VAR_9);
 VAR_7->len = FUNC_1(VAR_10);

 for (VAR_11 = 0; VAR_11 < FUNC_11(VAR_6)->nr_frags; VAR_11++) {
  skb_frag_t *VAR_13 = &FUNC_11(VAR_6)->frags[VAR_11];

  if (++VAR_5->write_idx == VAR_5->count)
   VAR_5->write_idx = 0;
  VAR_7 = &VAR_5->tpd[VAR_5->write_idx];

  VAR_7->word1 = VAR_8->word1;

  VAR_10 = FUNC_9(VAR_13);
  VAR_9 = FUNC_8(VAR_5->dev, VAR_13, 0,
           VAR_10, VAR_0);
  if (FUNC_5(VAR_5->dev, VAR_9))
   goto err_dma;
  FUNC_7(&VAR_5->bufs[VAR_5->write_idx], VAR_4, VAR_10);
  FUNC_6(&VAR_5->bufs[VAR_5->write_idx], VAR_9, VAR_9);

  VAR_7->adrl.addr = FUNC_3(VAR_9);
  VAR_7->len = FUNC_1(VAR_10);
 }


 VAR_7->word1 |= FUNC_2(1 << VAR_2);
 VAR_5->bufs[VAR_5->write_idx].skb = VAR_6;

 if (++VAR_5->write_idx == VAR_5->count)
  VAR_5->write_idx = 0;

 return 0;

err_dma:
 VAR_11 = VAR_12;
 while (VAR_11 != VAR_5->write_idx) {
  FUNC_0(VAR_5, VAR_11);
  if (++VAR_11 == VAR_5->count)
   VAR_11 = 0;
 }
 return -VAR_1;
}
