
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union wil_tx_desc {int dummy; } wil_tx_desc ;
typedef int u16 ;
struct wil_ring {int size; size_t swtail; size_t swhead; struct wil_ctx* ctx; TYPE_4__* va; int pa; int is_rx; } ;
struct wil_ctx {scalar_t__ skb; } ;
struct wil6210_priv {struct wil_ring* ring_tx; int mutex; } ;
struct vring_tx_desc {int dummy; } ;
struct TYPE_7__ {int length; int addr; } ;
struct vring_rx_desc {TYPE_3__ dma; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {struct vring_rx_desc legacy; } ;
struct TYPE_5__ {struct vring_tx_desc legacy; } ;
struct TYPE_8__ {TYPE_2__ rx; TYPE_1__ tx; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,size_t,void*,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct wil_ctx*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wil6210_priv*,char*,int,...) ;
 int FUNC_8 (struct wil6210_priv*,char*,size_t) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wil_ring*,int) ;
 int FUNC_11 (struct wil_ring*) ;
 void* FUNC_12 (struct wil_ring*) ;
 struct device* FUNC_13 (struct wil6210_priv*) ;
 int FUNC_14 (struct device*,union wil_tx_desc*,struct wil_ctx*) ;

__attribute__((used)) static void FUNC_15(struct wil6210_priv *VAR_1, struct wil_ring *VAR_2)
{
 struct device *VAR_3 = FUNC_13(VAR_1);
 size_t VAR_4 = VAR_2->size * sizeof(VAR_2->va[0]);

 FUNC_6(&VAR_1->mutex);
 if (!VAR_2->is_rx) {
  int VAR_5 = VAR_2 - VAR_1->ring_tx;

  FUNC_7(VAR_1, "free Tx vring %d [%d] 0x%p:%pad 0x%p\n",
        VAR_5, VAR_2->size, VAR_2->va,
        &VAR_2->pa, VAR_2->ctx);
 } else {
  FUNC_7(VAR_1, "free Rx vring [%d] 0x%p:%pad 0x%p\n",
        VAR_2->size, VAR_2->va,
        &VAR_2->pa, VAR_2->ctx);
 }

 while (!FUNC_11(VAR_2)) {
  dma_addr_t VAR_6;
  u16 VAR_7;
  struct wil_ctx *VAR_8;

  if (!VAR_2->is_rx) {
   struct vring_tx_desc VAR_9, *VAR_10 = &VAR_9;
   volatile struct vring_tx_desc *VAR_11 =
     &VAR_2->va[VAR_2->swtail].tx.legacy;

   VAR_8 = &VAR_2->ctx[VAR_2->swtail];
   if (!VAR_8) {
    FUNC_8(VAR_1,
          "ctx(%d) was already completed\n",
          VAR_2->swtail);
    VAR_2->swtail = FUNC_12(VAR_2);
    continue;
   }
   *VAR_10 = *VAR_11;
   FUNC_14(VAR_3, (union wil_tx_desc *)VAR_10, VAR_8);
   if (VAR_8->skb)
    FUNC_0(VAR_8->skb);
   VAR_2->swtail = FUNC_12(VAR_2);
  } else {
   struct vring_rx_desc VAR_12, *VAR_13 = &VAR_12;
   volatile struct vring_rx_desc *VAR_14 =
    &VAR_2->va[VAR_2->swhead].rx.legacy;

   VAR_8 = &VAR_2->ctx[VAR_2->swhead];
   *VAR_13 = *VAR_14;
   VAR_6 = FUNC_9(&VAR_13->dma.addr);
   VAR_7 = FUNC_5(VAR_13->dma.length);
   FUNC_2(VAR_3, VAR_6, VAR_7, VAR_0);
   FUNC_4(VAR_8->skb);
   FUNC_10(VAR_2, 1);
  }
 }
 FUNC_1(VAR_3, VAR_4, (void *)VAR_2->va, VAR_2->pa);
 FUNC_3(VAR_2->ctx);
 VAR_2->pa = 0;
 VAR_2->va = ((void*)0);
 VAR_2->ctx = ((void*)0);
}
