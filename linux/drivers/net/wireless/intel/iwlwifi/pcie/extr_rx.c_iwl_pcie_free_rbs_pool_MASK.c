
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int rx_page_order; TYPE_1__* rx_pool; } ;
struct iwl_trans {int dev; } ;
struct TYPE_2__ {int * page; int page_dma; } ;


 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int,int ) ;

void FUNC_3(struct iwl_trans *VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (!VAR_4->rx_pool[VAR_5].page)
   continue;
  FUNC_2(VAR_3->dev, VAR_4->rx_pool[VAR_5].page_dma,
          VAR_1 << VAR_4->rx_page_order,
          VAR_0);
  FUNC_1(VAR_4->rx_pool[VAR_5].page,
        VAR_4->rx_page_order);
  VAR_4->rx_pool[VAR_5].page = ((void*)0);
 }
}
