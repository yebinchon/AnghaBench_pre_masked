
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct isp1760_udc {int lock; int driver; TYPE_1__ gadget; int ep0_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isp1760_udc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct isp1760_udc *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);





 FUNC_0(VAR_2);

 VAR_2->ep0_state = VAR_0;
 VAR_2->gadget.speed = VAR_1;

 FUNC_3(&VAR_2->gadget, VAR_2->driver);

 FUNC_2(&VAR_2->lock, VAR_3);
}
