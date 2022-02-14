
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct il_rx_queue {int * rb_stts; int * bd; int rb_stts_dma; int bd_dma; TYPE_2__* pool; } ;
struct il_rb_status {int dummy; } ;
struct TYPE_4__ {int rx_page_order; } ;
struct il_priv {TYPE_3__* pci_dev; TYPE_1__ hw_params; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int * page; int page_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct il_priv*,int *) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_4, struct il_rx_queue *VAR_5)
{
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_3 + VAR_2; VAR_6++) {
  if (VAR_5->pool[VAR_6].page != ((void*)0)) {
   FUNC_2(VAR_4->pci_dev, VAR_5->pool[VAR_6].page_dma,
           VAR_0 << VAR_4->hw_params.rx_page_order,
           VAR_1);
   FUNC_0(VAR_4, VAR_5->pool[VAR_6].page);
   VAR_5->pool[VAR_6].page = ((void*)0);
  }
 }

 FUNC_1(&VAR_4->pci_dev->dev, 4 * VAR_3, VAR_5->bd,
     VAR_5->bd_dma);
 FUNC_1(&VAR_4->pci_dev->dev, sizeof(struct il_rb_status),
     VAR_5->rb_stts, VAR_5->rb_stts_dma);
 VAR_5->bd = ((void*)0);
 VAR_5->rb_stts = ((void*)0);
}
