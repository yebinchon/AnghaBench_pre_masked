
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unmap_refs_callback_data {int result; int completion; } ;
struct gntab_unmap_queue_data {struct unmap_refs_callback_data* data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(int VAR_0,
  struct gntab_unmap_queue_data *VAR_1)
{
 struct unmap_refs_callback_data *VAR_2 = VAR_1->data;

 VAR_2->result = VAR_0;
 FUNC_0(&VAR_2->completion);
}
