
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_gcu_priv {struct pxa3xx_gcu_batch* free; } ;
struct pxa3xx_gcu_batch {int phys; int ptr; struct pxa3xx_gcu_batch* next; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int,int ,int ) ;
 int FUNC_1 (struct pxa3xx_gcu_batch*) ;

__attribute__((used)) static void
FUNC_2(struct device *VAR_1,
   struct pxa3xx_gcu_priv *VAR_2)
{
 struct pxa3xx_gcu_batch *VAR_3, *VAR_4 = VAR_2->free;

 while (VAR_4) {
  VAR_3 = VAR_4->next;

  FUNC_0(VAR_1, VAR_0 * 4,
      VAR_4->ptr, VAR_4->phys);

  FUNC_1(VAR_4);
  VAR_4 = VAR_3;
 }

 VAR_2->free = ((void*)0);
}
