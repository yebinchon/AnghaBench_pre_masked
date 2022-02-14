
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {unsigned int queue_mapping; scalar_t__ len; } ;
struct TYPE_8__ {int bytes; int packets; } ;
struct TYPE_9__ {TYPE_3__ tx; } ;
struct aq_ring_s {TYPE_4__ stats; int idx; } ;
struct TYPE_6__ {unsigned int vecs; } ;
struct aq_nic_s {int aq_hw; TYPE_2__* aq_hw_ops; int ndev; struct aq_ring_s** aq_ring_tx; TYPE_1__ aq_nic_cfg; } ;
struct TYPE_10__ {int nr_frags; } ;
struct TYPE_7__ {int (* hw_ring_tx_xmit ) (int ,struct aq_ring_s*,unsigned int) ;} ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (struct aq_nic_s*,unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (struct aq_nic_s*,struct sk_buff*,struct aq_ring_s*) ;
 int FUNC_3 (struct aq_ring_s*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,struct aq_ring_s*,unsigned int) ;

int FUNC_8(struct aq_nic_s *VAR_3, struct sk_buff *VAR_4)
{
 struct aq_ring_s *VAR_5 = ((void*)0);
 unsigned int VAR_6 = 0U;
 unsigned int VAR_7 = VAR_4->queue_mapping % VAR_3->aq_nic_cfg.vecs;
 unsigned int VAR_8 = 0U;
 int VAR_9 = VAR_2;

 VAR_6 = FUNC_6(VAR_4)->nr_frags + 1;

 VAR_5 = VAR_3->aq_ring_tx[FUNC_0(VAR_3, VAR_8, VAR_7)];

 if (VAR_6 > VAR_0) {
  FUNC_4(VAR_4);
  goto err_exit;
 }

 FUNC_3(VAR_5);


 if (FUNC_1(VAR_3->ndev, VAR_5->idx)) {
  VAR_9 = VAR_1;
  goto err_exit;
 }

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);

 if (FUNC_5(VAR_6)) {
  VAR_9 = VAR_3->aq_hw_ops->hw_ring_tx_xmit(VAR_3->aq_hw,
             VAR_5, VAR_6);
  if (VAR_9 >= 0) {
   ++VAR_5->stats.tx.packets;
   VAR_5->stats.tx.bytes += VAR_4->len;
  }
 } else {
  VAR_9 = VAR_1;
 }

err_exit:
 return VAR_9;
}
