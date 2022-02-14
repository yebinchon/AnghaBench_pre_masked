
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * user_data; int * user_handler; int irq; TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ,TYPE_2__*) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void *VAR_1)
{
 FUNC_0(&VAR_0.pdev->dev, VAR_0.irq, &VAR_0);

 VAR_0.user_handler = ((void*)0);
 VAR_0.user_data = ((void*)0);
}
