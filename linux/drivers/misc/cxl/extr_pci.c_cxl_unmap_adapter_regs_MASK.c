
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct cxl {TYPE_1__ dev; TYPE_2__* native; } ;
struct TYPE_4__ {int * p2_mmio; int * p1_mmio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cxl *VAR_0)
{
 if (VAR_0->native->p1_mmio) {
  FUNC_0(VAR_0->native->p1_mmio);
  VAR_0->native->p1_mmio = ((void*)0);
  FUNC_1(FUNC_2(VAR_0->dev.parent), 2);
 }
 if (VAR_0->native->p2_mmio) {
  FUNC_0(VAR_0->native->p2_mmio);
  VAR_0->native->p2_mmio = ((void*)0);
  FUNC_1(FUNC_2(VAR_0->dev.parent), 0);
 }
}
