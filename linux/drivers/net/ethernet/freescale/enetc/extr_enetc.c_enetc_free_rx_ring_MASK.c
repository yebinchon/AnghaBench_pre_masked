
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_rx_swbd {int * page; int dma; } ;
struct enetc_bdr {int bd_count; scalar_t__ next_to_alloc; scalar_t__ next_to_use; scalar_t__ next_to_clean; int dev; struct enetc_rx_swbd* rx_swbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct enetc_bdr *VAR_2)
{
 int VAR_3;

 if (!VAR_2->rx_swbd)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->bd_count; VAR_3++) {
  struct enetc_rx_swbd *VAR_4 = &VAR_2->rx_swbd[VAR_3];

  if (!VAR_4->page)
   continue;

  FUNC_1(VAR_2->dev, VAR_4->dma,
          VAR_1, VAR_0);
  FUNC_0(VAR_4->page);
  VAR_4->page = ((void*)0);
 }

 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;
 VAR_2->next_to_alloc = 0;
}
