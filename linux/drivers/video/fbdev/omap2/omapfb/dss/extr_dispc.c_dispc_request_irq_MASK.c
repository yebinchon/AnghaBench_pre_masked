
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * irq_handler_t ;
struct TYPE_5__ {int * user_data; int * user_handler; int irq; TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,char*,TYPE_2__*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;

int FUNC_2(irq_handler_t VAR_4, void *VAR_5)
{
 int VAR_6;

 if (VAR_2.user_handler != ((void*)0))
  return -VAR_0;

 VAR_2.user_handler = VAR_4;
 VAR_2.user_data = VAR_5;


 FUNC_1();

 VAR_6 = FUNC_0(&VAR_2.pdev->dev, VAR_2.irq, VAR_3,
        VAR_1, "OMAP DISPC", &VAR_2);
 if (VAR_6) {
  VAR_2.user_handler = ((void*)0);
  VAR_2.user_data = ((void*)0);
 }

 return VAR_6;
}
