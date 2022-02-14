
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_host {int eventq; int flags; TYPE_1__* pdev; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct isci_host *VAR_2, enum sci_status VAR_3)
{
 if (VAR_3 != VAR_1)
  FUNC_1(&VAR_2->pdev->dev,
   "controller start timed out, continuing...\n");
 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_2(&VAR_2->eventq);
}
