
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntab_unmap_queue_data {int count; int age; int (* done ) (int,struct gntab_unmap_queue_data*) ;int * pages; int kunmap_ops; int unmap_ops; int gnttab_work; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,struct gntab_unmap_queue_data*) ;

__attribute__((used)) static void FUNC_5(struct gntab_unmap_queue_data* VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++) {
  if (FUNC_2(VAR_1->pages[VAR_3]) > 1) {
   unsigned long VAR_4 = VAR_0 * (VAR_1->age + 1);
   FUNC_3(&VAR_1->gnttab_work,
           FUNC_1(VAR_4));
   return;
  }
 }

 VAR_2 = FUNC_0(VAR_1->unmap_ops, VAR_1->kunmap_ops,
    VAR_1->pages, VAR_1->count);
 VAR_1->done(VAR_2, VAR_1);
}
