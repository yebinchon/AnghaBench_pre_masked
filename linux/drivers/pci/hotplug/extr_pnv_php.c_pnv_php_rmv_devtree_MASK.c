
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pnv_php_slot {int * fdt; TYPE_1__* dn; int * dt; int ocs; } ;
struct TYPE_3__ {int * child; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct pnv_php_slot *VAR_0)
{
 FUNC_3(VAR_0->dn);





 if (VAR_0->fdt)
  FUNC_1(&VAR_0->ocs);
 FUNC_2(VAR_0->dn);

 if (VAR_0->fdt) {
  FUNC_0(VAR_0->dt);
  FUNC_0(VAR_0->fdt);
  VAR_0->dt = ((void*)0);
  VAR_0->dn->child = ((void*)0);
  VAR_0->fdt = ((void*)0);
 }
}
