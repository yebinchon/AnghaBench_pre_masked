
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int id; int pmu; scalar_t__ base; int node; } ;
struct arm_ccn {int num_xps; TYPE_2__ dt; TYPE_1__* xp; scalar_t__ irq; } ;
struct TYPE_3__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct arm_ccn *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2,
         &VAR_4->dt.node);
 if (VAR_4->irq)
  FUNC_2(VAR_4->irq, ((void*)0));
 for (VAR_5 = 0; VAR_5 < VAR_4->num_xps; VAR_5++)
  FUNC_4(0, VAR_4->xp[VAR_5].base + VAR_1);
 FUNC_4(0, VAR_4->dt.base + VAR_0);
 FUNC_3(&VAR_4->dt.pmu);
 FUNC_1(&VAR_3, VAR_4->dt.id);
}
