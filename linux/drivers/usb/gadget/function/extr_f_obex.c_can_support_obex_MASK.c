
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_configuration {TYPE_1__* cdev; } ;
struct TYPE_2__ {int gadget; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct usb_configuration *VAR_0)
{





 if (!FUNC_0(VAR_0->cdev->gadget))
  return 0;


 return 1;
}
