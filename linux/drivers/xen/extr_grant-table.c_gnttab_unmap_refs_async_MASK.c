
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntab_unmap_queue_data {scalar_t__ age; int gnttab_work; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct gntab_unmap_queue_data*) ;
 int VAR_0 ;

void FUNC_2(struct gntab_unmap_queue_data* VAR_1)
{
 FUNC_0(&VAR_1->gnttab_work, VAR_0);
 VAR_1->age = 0;

 FUNC_1(VAR_1);
}
