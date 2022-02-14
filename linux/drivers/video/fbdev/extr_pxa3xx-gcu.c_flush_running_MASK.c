
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_gcu_priv {struct pxa3xx_gcu_batch* running; struct pxa3xx_gcu_batch* free; } ;
struct pxa3xx_gcu_batch {struct pxa3xx_gcu_batch* next; } ;



__attribute__((used)) static void
FUNC_0(struct pxa3xx_gcu_priv *VAR_0)
{
 struct pxa3xx_gcu_batch *VAR_1 = VAR_0->running;
 struct pxa3xx_gcu_batch *VAR_2;

 while (VAR_1) {
  VAR_2 = VAR_1->next;
  VAR_1->next = VAR_0->free;
  VAR_0->free = VAR_1;
  VAR_1 = VAR_2;
 }

 VAR_0->running = ((void*)0);
}
