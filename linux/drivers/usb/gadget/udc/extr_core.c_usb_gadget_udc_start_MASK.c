
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_udc {int driver; TYPE_2__* gadget; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* udc_start ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct usb_udc *VAR_0)
{
 return VAR_0->gadget->ops->udc_start(VAR_0->gadget, VAR_0->driver);
}
