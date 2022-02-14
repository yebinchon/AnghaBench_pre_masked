
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union wil_tx_desc {int dummy; } wil_tx_desc ;
struct wil_tx_enhanced_desc {int dummy; } ;
struct TYPE_4__ {void* va; int pa; } ;
struct wil_ring {int size; size_t swtail; struct wil_ctx* ctx; TYPE_3__* va; int pa; TYPE_1__ edma_rx_swtail; scalar_t__ is_rx; } ;
struct wil_ctx {scalar_t__ skb; } ;
struct wil6210_priv {struct wil_ring* ring_tx; int mutex; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int enhanced; } ;
struct TYPE_6__ {TYPE_2__ tx; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,size_t,void*,int ) ;
 int FUNC_2 (struct wil_ctx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wil6210_priv*,char*,int,...) ;
 int FUNC_5 (struct wil6210_priv*,char*,size_t) ;
 int FUNC_6 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_7 (struct wil_ring*) ;
 void* FUNC_8 (struct wil_ring*) ;
 struct device* FUNC_9 (struct wil6210_priv*) ;
 int FUNC_10 (struct device*,union wil_tx_desc*,struct wil_ctx*) ;

__attribute__((used)) static void FUNC_11(struct wil6210_priv *VAR_0, struct wil_ring *VAR_1)
{
 struct device *VAR_2 = FUNC_9(VAR_0);
 size_t VAR_3;
 int VAR_4 = 0;

 if (!VAR_1->va)
  return;

 VAR_3 = VAR_1->size * sizeof(VAR_1->va[0]);

 FUNC_3(&VAR_0->mutex);
 if (VAR_1->is_rx) {
  FUNC_4(VAR_0, "free Rx ring [%d] 0x%p:%pad 0x%p\n",
        VAR_1->size, VAR_1->va,
        &VAR_1->pa, VAR_1->ctx);

  FUNC_6(VAR_0, VAR_1);
  FUNC_1(VAR_2, sizeof(*VAR_1->edma_rx_swtail.va),
      VAR_1->edma_rx_swtail.va,
      VAR_1->edma_rx_swtail.pa);
  goto out;
 }


 VAR_4 = VAR_1 - VAR_0->ring_tx;

 FUNC_4(VAR_0, "free Tx ring %d [%d] 0x%p:%pad 0x%p\n",
       VAR_4, VAR_1->size, VAR_1->va,
       &VAR_1->pa, VAR_1->ctx);

 while (!FUNC_7(VAR_1)) {
  struct wil_ctx *VAR_5;

  struct wil_tx_enhanced_desc VAR_6, *VAR_7 = &VAR_6;
  struct wil_tx_enhanced_desc *VAR_8 =
   (struct wil_tx_enhanced_desc *)
   &VAR_1->va[VAR_1->swtail].tx.enhanced;

  VAR_5 = &VAR_1->ctx[VAR_1->swtail];
  if (!VAR_5) {
   FUNC_5(VAR_0,
         "ctx(%d) was already completed\n",
         VAR_1->swtail);
   VAR_1->swtail = FUNC_8(VAR_1);
   continue;
  }
  *VAR_7 = *VAR_8;
  FUNC_10(VAR_2, (union wil_tx_desc *)VAR_7, VAR_5);
  if (VAR_5->skb)
   FUNC_0(VAR_5->skb);
  VAR_1->swtail = FUNC_8(VAR_1);
 }

out:
 FUNC_1(VAR_2, VAR_3, (void *)VAR_1->va, VAR_1->pa);
 FUNC_2(VAR_1->ctx);
 VAR_1->pa = 0;
 VAR_1->va = ((void*)0);
 VAR_1->ctx = ((void*)0);
}
