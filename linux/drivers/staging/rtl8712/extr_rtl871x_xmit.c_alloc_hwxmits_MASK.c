
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ head; } ;
struct xmit_priv {int hwxmit_entry; int bk_pending; TYPE_1__ bk_txqueue; int be_pending; TYPE_1__ be_txqueue; int vi_pending; TYPE_1__ vi_txqueue; int vo_pending; TYPE_1__ vo_txqueue; int bm_pending; TYPE_1__ bmc_txqueue; struct hw_xmit* hwxmits; } ;
struct hw_xmit {int * sta_queue; TYPE_1__* phwtxqueue; } ;
struct _adapter {struct xmit_priv xmitpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hw_xmit* FUNC_0 (int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct _adapter *VAR_2)
{
 struct hw_xmit *VAR_3;
 struct xmit_priv *VAR_4 = &VAR_2->xmitpriv;

 VAR_4->hwxmit_entry = VAR_1;
 VAR_4->hwxmits = FUNC_0(VAR_4->hwxmit_entry,
    sizeof(struct hw_xmit), VAR_0);
 if (!VAR_4->hwxmits)
  return;
 VAR_3 = VAR_4->hwxmits;
 if (VAR_4->hwxmit_entry == 5) {
  VAR_4->bmc_txqueue.head = 0;
  VAR_3[0] .phwtxqueue = &VAR_4->bmc_txqueue;
  VAR_3[0] .sta_queue = &VAR_4->bm_pending;
  VAR_4->vo_txqueue.head = 0;
  VAR_3[1] .phwtxqueue = &VAR_4->vo_txqueue;
  VAR_3[1] .sta_queue = &VAR_4->vo_pending;
  VAR_4->vi_txqueue.head = 0;
  VAR_3[2] .phwtxqueue = &VAR_4->vi_txqueue;
  VAR_3[2] .sta_queue = &VAR_4->vi_pending;
  VAR_4->bk_txqueue.head = 0;
  VAR_3[3] .phwtxqueue = &VAR_4->bk_txqueue;
  VAR_3[3] .sta_queue = &VAR_4->bk_pending;
  VAR_4->be_txqueue.head = 0;
  VAR_3[4] .phwtxqueue = &VAR_4->be_txqueue;
  VAR_3[4] .sta_queue = &VAR_4->be_pending;
 } else if (VAR_4->hwxmit_entry == 4) {
  VAR_4->vo_txqueue.head = 0;
  VAR_3[0] .phwtxqueue = &VAR_4->vo_txqueue;
  VAR_3[0] .sta_queue = &VAR_4->vo_pending;
  VAR_4->vi_txqueue.head = 0;
  VAR_3[1] .phwtxqueue = &VAR_4->vi_txqueue;
  VAR_3[1] .sta_queue = &VAR_4->vi_pending;
  VAR_4->be_txqueue.head = 0;
  VAR_3[2] .phwtxqueue = &VAR_4->be_txqueue;
  VAR_3[2] .sta_queue = &VAR_4->be_pending;
  VAR_4->bk_txqueue.head = 0;
  VAR_3[3] .phwtxqueue = &VAR_4->bk_txqueue;
  VAR_3[3] .sta_queue = &VAR_4->bk_pending;
 }
}
