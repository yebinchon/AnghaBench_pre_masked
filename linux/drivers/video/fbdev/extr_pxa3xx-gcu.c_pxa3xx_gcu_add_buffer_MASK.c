
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_gcu_priv {struct pxa3xx_gcu_batch* free; } ;
struct pxa3xx_gcu_batch {struct pxa3xx_gcu_batch* next; int ptr; int phys; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int,int *,int ) ;
 int FUNC_1 (struct pxa3xx_gcu_batch*) ;
 struct pxa3xx_gcu_batch* FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct device *VAR_3,
        struct pxa3xx_gcu_priv *VAR_4)
{
 struct pxa3xx_gcu_batch *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct pxa3xx_gcu_batch), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->ptr = FUNC_0(VAR_3, VAR_2 * 4,
      &VAR_5->phys, VAR_1);
 if (!VAR_5->ptr) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }

 VAR_5->next = VAR_4->free;
 VAR_4->free = VAR_5;

 return 0;
}
