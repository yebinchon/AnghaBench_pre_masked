
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_function {int dummy; } ;
struct TYPE_4__ {TYPE_1__* in_ep; } ;
struct f_ncm {unsigned int ctrl_id; TYPE_2__ port; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;


 struct f_ncm* FUNC_0 (struct usb_function*) ;

__attribute__((used)) static int FUNC_1(struct usb_function *VAR_0, unsigned VAR_1)
{
 struct f_ncm *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 == VAR_2->ctrl_id)
  return 0;
 return VAR_2->port.in_ep->enabled ? 1 : 0;
}
