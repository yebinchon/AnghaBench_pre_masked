
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* va; int pa; } ;
struct wil_ring {int size; int * ctx; int * va; int pa; scalar_t__ is_rx; TYPE_1__ edma_rx_swtail; scalar_t__ swtail; scalar_t__ swhead; } ;
struct wil6210_priv {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct device*,size_t,int *,int ) ;
 int FUNC_2 (struct device*,int,void*,int ) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wil6210_priv*,char*,...) ;
 struct device* FUNC_6 (struct wil6210_priv*) ;

__attribute__((used)) static int FUNC_7(struct wil6210_priv *VAR_2,
        struct wil_ring *VAR_3)
{
 struct device *VAR_4 = FUNC_6(VAR_2);
 size_t VAR_5 = VAR_3->size * sizeof(VAR_3->va[0]);

 FUNC_5(VAR_2, "alloc_desc_ring:\n");

 FUNC_0(sizeof(VAR_3->va[0]) != 32);

 VAR_3->swhead = 0;
 VAR_3->swtail = 0;
 VAR_3->ctx = FUNC_3(VAR_3->size, sizeof(VAR_3->ctx[0]), VAR_1);
 if (!VAR_3->ctx)
  goto err;

 VAR_3->va = FUNC_1(VAR_4, VAR_5, &VAR_3->pa, VAR_1);
 if (!VAR_3->va)
  goto err_free_ctx;

 if (VAR_3->is_rx) {
  VAR_5 = sizeof(*VAR_3->edma_rx_swtail.va);
  VAR_3->edma_rx_swtail.va =
   FUNC_1(VAR_4, VAR_5, &VAR_3->edma_rx_swtail.pa,
        VAR_1);
  if (!VAR_3->edma_rx_swtail.va)
   goto err_free_va;
 }

 FUNC_5(VAR_2, "%s ring[%d] 0x%p:%pad 0x%p\n",
       VAR_3->is_rx ? "RX" : "TX",
       VAR_3->size, VAR_3->va, &VAR_3->pa, VAR_3->ctx);

 return 0;
err_free_va:
 FUNC_2(VAR_4, VAR_3->size * sizeof(VAR_3->va[0]),
     (void *)VAR_3->va, VAR_3->pa);
 VAR_3->va = ((void*)0);
err_free_ctx:
 FUNC_4(VAR_3->ctx);
 VAR_3->ctx = ((void*)0);
err:
 return -VAR_0;
}
