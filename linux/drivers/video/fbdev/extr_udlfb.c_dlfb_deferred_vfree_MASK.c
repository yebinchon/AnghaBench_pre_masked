
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlfb_deferred_free {int list; void* mem; } ;
struct dlfb_data {int deferred_free; } ;


 int VAR_0 ;
 struct dlfb_deferred_free* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct dlfb_data *VAR_1, void *VAR_2)
{
 struct dlfb_deferred_free *VAR_3 = FUNC_0(sizeof(struct dlfb_deferred_free), VAR_0);
 if (!VAR_3)
  return;
 VAR_3->mem = VAR_2;
 FUNC_1(&VAR_3->list, &VAR_1->deferred_free);
}
