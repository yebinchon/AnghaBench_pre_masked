
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_adapter {int reg_pmcs; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct jme_adapter*) ;
 int FUNC_2 (struct jme_adapter*) ;
 int FUNC_3 (struct jme_adapter*) ;
 int FUNC_4 (struct jme_adapter*) ;

__attribute__((used)) static void
FUNC_5(struct jme_adapter *VAR_2)
{
 if (VAR_2->reg_pmcs && FUNC_0(&VAR_2->pdev->dev)) {
  FUNC_3(VAR_2);
  if (VAR_2->reg_pmcs & (VAR_0 | VAR_1))
   FUNC_4(VAR_2);
  FUNC_1(VAR_2);
 } else {
  FUNC_2(VAR_2);
 }
}
