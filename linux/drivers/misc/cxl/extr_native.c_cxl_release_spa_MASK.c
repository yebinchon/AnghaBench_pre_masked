
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {TYPE_1__* native; } ;
struct TYPE_2__ {int * spa; int spa_order; } ;


 int FUNC_0 (unsigned long,int ) ;

void FUNC_1(struct cxl_afu *VAR_0)
{
 if (VAR_0->native->spa) {
  FUNC_0((unsigned long) VAR_0->native->spa,
   VAR_0->native->spa_order);
  VAR_0->native->spa = ((void*)0);
 }
}
