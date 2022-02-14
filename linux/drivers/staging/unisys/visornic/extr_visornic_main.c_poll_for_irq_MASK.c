
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visornic_devdata {int irq_poll_timer; int interrupt_rcvd; int napi; TYPE_1__* dev; } ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int visorchannel; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct visornic_devdata* VAR_1 ;
 struct visornic_devdata* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct visornic_devdata *VAR_4 = FUNC_1(VAR_4, VAR_3,
            VAR_2);

 if (!FUNC_5(
       VAR_4->dev->visorchannel,
       VAR_0))
  FUNC_4(&VAR_4->napi);

 FUNC_0(&VAR_4->interrupt_rcvd, 0);

 FUNC_2(&VAR_4->irq_poll_timer, FUNC_3(2));
}
