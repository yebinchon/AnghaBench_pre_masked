
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unmap_refs_callback_data {int result; int completion; } ;
struct gntab_unmap_queue_data {int * done; struct unmap_refs_callback_data* data; } ;


 int FUNC_0 (struct gntab_unmap_queue_data*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct gntab_unmap_queue_data *VAR_1)
{
 struct unmap_refs_callback_data VAR_2;

 FUNC_1(&VAR_2.completion);
 VAR_1->data = &VAR_2;
 VAR_1->done = &VAR_0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_2.completion);

 return VAR_2.result;
}
