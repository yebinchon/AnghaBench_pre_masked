
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pmcraid_instance {TYPE_1__ cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pmcraid_instance *VAR_2)
{
 FUNC_4(FUNC_0(VAR_2->cdev.dev));
 FUNC_3(VAR_0,
         FUNC_1(VAR_1, FUNC_0(VAR_2->cdev.dev)));
 FUNC_2(&VAR_2->cdev);
}
