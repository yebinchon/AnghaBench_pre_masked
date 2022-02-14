
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc16is7xx_port {int efr_lock; TYPE_1__* devtype; } ;
struct kthread_work {int dummy; } ;
struct TYPE_2__ {int nr_uart; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sc16is7xx_port*,int) ;
 struct sc16is7xx_port* FUNC_3 (struct kthread_work*,int ) ;

__attribute__((used)) static void FUNC_4(struct kthread_work *VAR_1)
{
 struct sc16is7xx_port *VAR_2 = FUNC_3(VAR_1, VAR_0);

 FUNC_0(&VAR_2->efr_lock);

 while (1) {
  bool VAR_3 = 0;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_2->devtype->nr_uart; ++VAR_4)
   VAR_3 |= FUNC_2(VAR_2, VAR_4);
  if (!VAR_3)
   break;
 }

 FUNC_1(&VAR_2->efr_lock);
}
