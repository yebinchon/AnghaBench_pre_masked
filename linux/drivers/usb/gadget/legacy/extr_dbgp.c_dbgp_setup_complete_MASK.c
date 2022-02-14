
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_request {int length; int actual; int status; } ;
struct usb_ep {int dummy; } ;
struct TYPE_4__ {TYPE_1__* gadget; } ;
struct TYPE_3__ {int dev; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct usb_ep *VAR_1,
    struct usb_request *VAR_2)
{
 FUNC_0(&VAR_0.gadget->dev, "setup complete: %d, %d/%d\n",
  VAR_2->status, VAR_2->actual, VAR_2->length);
}
