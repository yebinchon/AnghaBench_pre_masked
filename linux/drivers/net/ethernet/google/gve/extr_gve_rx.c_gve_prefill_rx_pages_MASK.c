
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct TYPE_3__ {int * data_ring; int * page_info; TYPE_2__* qpl; } ;
struct gve_rx_ring {int mask; TYPE_1__ data; struct gve_priv* gve; } ;
struct gve_priv {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct page** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct gve_priv*) ;
 int FUNC_1 (int *,int *,int,struct page*) ;
 int * FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct gve_rx_ring *VAR_3)
{
 struct gve_priv *VAR_4 = VAR_3->gve;
 u32 VAR_5;
 int VAR_6;




 VAR_5 = VAR_3->mask + 1;

 VAR_3->data.page_info = FUNC_2(VAR_5 *
          sizeof(*VAR_3->data.page_info), VAR_1);
 if (!VAR_3->data.page_info)
  return -VAR_0;

 VAR_3->data.qpl = FUNC_0(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct page *VAR_7 = VAR_3->data.qpl->pages[VAR_6];
  dma_addr_t VAR_8 = VAR_6 * VAR_2;

  FUNC_1(&VAR_3->data.page_info[VAR_6],
        &VAR_3->data.data_ring[VAR_6], VAR_8, VAR_7);
 }

 return VAR_5;
}
