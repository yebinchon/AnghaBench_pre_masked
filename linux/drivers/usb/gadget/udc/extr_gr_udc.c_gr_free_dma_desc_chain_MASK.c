
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gr_udc {int dummy; } ;
struct gr_request {struct gr_dma_desc* last_desc; int * curr_desc; struct gr_dma_desc* first_desc; } ;
struct gr_dma_desc {struct gr_dma_desc* next_desc; } ;


 int FUNC_0 (struct gr_udc*,struct gr_dma_desc*) ;

__attribute__((used)) static void FUNC_1(struct gr_udc *VAR_0, struct gr_request *VAR_1)
{
 struct gr_dma_desc *VAR_2;
 struct gr_dma_desc *VAR_3;

 VAR_3 = VAR_1->first_desc;
 if (!VAR_3)
  return;

 do {
  VAR_2 = VAR_3;
  VAR_3 = VAR_2->next_desc;
  FUNC_0(VAR_0, VAR_2);
 } while (VAR_2 != VAR_1->last_desc);

 VAR_1->first_desc = ((void*)0);
 VAR_1->curr_desc = ((void*)0);
 VAR_1->last_desc = ((void*)0);
}
