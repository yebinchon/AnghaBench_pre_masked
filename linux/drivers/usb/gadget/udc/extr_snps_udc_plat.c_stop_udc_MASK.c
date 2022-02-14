
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct udc {int dev; int lock; scalar_t__ connected; int * ep; int gadget; TYPE_2__* driver; TYPE_1__* regs; } ;
struct TYPE_4__ {int (* disconnect ) (int *) ;} ;
struct TYPE_3__ {int ctl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct udc*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct udc *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 FUNC_5(&VAR_2->lock);


 VAR_4 = FUNC_4(&VAR_2->regs->ctl);
 VAR_4 |= FUNC_0(VAR_0);
 FUNC_9(VAR_4, &VAR_2->regs->ctl);

 VAR_4 = FUNC_4(&VAR_2->regs->ctl);
 VAR_4 &= ~(FUNC_0(VAR_0));
 FUNC_9(VAR_4, &VAR_2->regs->ctl);
 FUNC_1(VAR_2->dev, "ep rx queue flushed\n");




 FUNC_8(VAR_2);


 if (VAR_2->driver) {
  FUNC_6(&VAR_2->lock);
  VAR_2->driver->disconnect(&VAR_2->gadget);
  FUNC_5(&VAR_2->lock);


  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_3(&VAR_2->ep[VAR_3]);
 }
 VAR_2->connected = 0;

 FUNC_6(&VAR_2->lock);
 FUNC_2(VAR_2->dev, "Device disconnected\n");
}
