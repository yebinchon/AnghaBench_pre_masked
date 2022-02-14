
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_queue_page_list {int num_entries; int * pages; int * page_buses; } ;
struct gve_priv {int num_registered_pages; TYPE_1__* pdev; struct gve_queue_page_list* qpls; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct gve_priv*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gve_priv *VAR_0,
         int VAR_1)
{
 struct gve_queue_page_list *VAR_2 = &VAR_0->qpls[VAR_1];
 int VAR_3;

 if (!VAR_2->pages)
  return;
 if (!VAR_2->page_buses)
  goto free_pages;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_entries; VAR_3++)
  FUNC_0(&VAR_0->pdev->dev, VAR_2->pages[VAR_3],
         VAR_2->page_buses[VAR_3], FUNC_1(VAR_0, VAR_1));

 FUNC_2(VAR_2->page_buses);
free_pages:
 FUNC_2(VAR_2->pages);
 VAR_0->num_registered_pages -= VAR_2->num_entries;
}
