
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td_node {int dma; int ptr; } ;
struct ci_hw_ep {struct td_node* pending_td; int td_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct td_node*) ;

__attribute__((used)) static void FUNC_2(struct ci_hw_ep *VAR_0)
{
 struct td_node *VAR_1 = VAR_0->pending_td;

 FUNC_0(VAR_0->td_pool, VAR_1->ptr, VAR_1->dma);
 VAR_0->pending_td = ((void*)0);
 FUNC_1(VAR_1);
}
