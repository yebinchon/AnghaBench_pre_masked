
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct gve_queue_page_list {size_t id; int num_entries; int * page_buses; int * pages; } ;
struct gve_priv {scalar_t__ num_registered_pages; scalar_t__ max_registered_pages; TYPE_1__* pdev; int dev; struct gve_queue_page_list* qpls; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (struct gve_priv*,size_t) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct gve_priv*,int ,int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gve_priv *VAR_4, u32 VAR_5,
         int VAR_6)
{
 struct gve_queue_page_list *VAR_7 = &VAR_4->qpls[VAR_5];
 int VAR_8;
 int VAR_9;

 if (VAR_6 + VAR_4->num_registered_pages > VAR_4->max_registered_pages) {
  FUNC_3(VAR_4, VAR_3, VAR_4->dev,
     "Reached max number of registered pages %llu > %llu\n",
     VAR_6 + VAR_4->num_registered_pages,
     VAR_4->max_registered_pages);
  return -VAR_0;
 }

 VAR_7->id = VAR_5;
 VAR_7->num_entries = VAR_6;
 VAR_7->pages = FUNC_2(VAR_6 * sizeof(*VAR_7->pages), VAR_2);

 if (!VAR_7->pages)
  return -VAR_1;
 VAR_7->page_buses = FUNC_2(VAR_6 * sizeof(*VAR_7->page_buses),
       VAR_2);

 if (!VAR_7->page_buses)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_0(&VAR_4->pdev->dev, &VAR_7->pages[VAR_9],
         &VAR_7->page_buses[VAR_9],
         FUNC_1(VAR_4, VAR_5));

  if (VAR_8)
   return -VAR_1;
 }
 VAR_4->num_registered_pages += VAR_6;

 return 0;
}
