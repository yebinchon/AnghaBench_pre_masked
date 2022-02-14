
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rproc {TYPE_1__* mb; } ;
struct rproc {struct stm32_rproc* priv; } ;
struct TYPE_2__ {int * chan; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rproc *VAR_0)
{
 struct stm32_rproc *VAR_1 = VAR_0->priv;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->mb); VAR_2++) {
  if (VAR_1->mb[VAR_2].chan)
   FUNC_1(VAR_1->mb[VAR_2].chan);
  VAR_1->mb[VAR_2].chan = ((void*)0);
 }
}
