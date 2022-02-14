
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint ;
struct wil_ring {int size; int * ctx; int pa; TYPE_3__* va; scalar_t__ swtail; scalar_t__ swhead; } ;
struct wil6210_priv {int dma_addr_size; } ;
struct TYPE_5__ {int status; } ;
struct vring_tx_desc {TYPE_2__ dma; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct vring_tx_desc legacy; } ;
struct TYPE_6__ {TYPE_1__ tx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (struct device*,size_t,int *,int ) ;
 int FUNC_3 (struct device*,int ) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct wil6210_priv*,char*,...) ;
 struct device* FUNC_7 (struct wil6210_priv*) ;

__attribute__((used)) static int FUNC_8(struct wil6210_priv *VAR_3, struct wil_ring *VAR_4)
{
 struct device *VAR_5 = FUNC_7(VAR_3);
 size_t VAR_6 = VAR_4->size * sizeof(VAR_4->va[0]);
 uint VAR_7;

 FUNC_6(VAR_3, "vring_alloc:\n");

 FUNC_0(sizeof(VAR_4->va[0]) != 32);

 VAR_4->swhead = 0;
 VAR_4->swtail = 0;
 VAR_4->ctx = FUNC_4(VAR_4->size, sizeof(VAR_4->ctx[0]), VAR_1);
 if (!VAR_4->ctx) {
  VAR_4->va = ((void*)0);
  return -VAR_0;
 }
 if (VAR_3->dma_addr_size > 32)
  FUNC_3(VAR_5, FUNC_1(32));

 VAR_4->va = FUNC_2(VAR_5, VAR_6, &VAR_4->pa, VAR_1);
 if (!VAR_4->va) {
  FUNC_5(VAR_4->ctx);
  VAR_4->ctx = ((void*)0);
  return -VAR_0;
 }

 if (VAR_3->dma_addr_size > 32)
  FUNC_3(VAR_5,
       FUNC_1(VAR_3->dma_addr_size));





 for (VAR_7 = 0; VAR_7 < VAR_4->size; VAR_7++) {
  volatile struct vring_tx_desc *VAR_8 =
   &VAR_4->va[VAR_7].tx.legacy;

  VAR_8->dma.status = VAR_2;
 }

 FUNC_6(VAR_3, "vring[%d] 0x%p:%pad 0x%p\n", VAR_4->size,
       VAR_4->va, &VAR_4->pa, VAR_4->ctx);

 return 0;
}
