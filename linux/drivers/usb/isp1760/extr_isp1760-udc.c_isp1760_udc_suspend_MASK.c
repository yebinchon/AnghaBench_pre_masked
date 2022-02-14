
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct isp1760_udc {TYPE_2__ gadget; TYPE_1__* driver; } ;
struct TYPE_3__ {int (* suspend ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct isp1760_udc *VAR_1)
{
 if (VAR_1->gadget.state < VAR_0)
  return;

 if (VAR_1->driver->suspend)
  VAR_1->driver->suspend(&VAR_1->gadget);
}
