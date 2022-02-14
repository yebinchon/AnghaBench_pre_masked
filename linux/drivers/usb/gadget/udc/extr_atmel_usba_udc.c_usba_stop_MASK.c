
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct usba_udc {int lock; TYPE_1__ gadget; scalar_t__ suspended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usba_udc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct usba_udc*) ;
 int FUNC_4 (struct usba_udc*,int ) ;
 int FUNC_5 (struct usba_udc*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct usba_udc *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->suspended)
  return;

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_3->gadget.speed = VAR_2;
 FUNC_0(VAR_3);


 FUNC_4(VAR_3, 0);
 FUNC_5(VAR_3, VAR_0, VAR_1);
 FUNC_2(&VAR_3->lock, VAR_4);

 FUNC_3(VAR_3);
}
