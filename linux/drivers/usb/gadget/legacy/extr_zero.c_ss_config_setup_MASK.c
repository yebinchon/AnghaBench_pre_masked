
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ctrlrequest {int bRequest; } ;
struct usb_configuration {int dummy; } ;
struct TYPE_3__ {int (* setup ) (TYPE_1__*,struct usb_ctrlrequest const*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct usb_ctrlrequest const*) ;

__attribute__((used)) static int FUNC_1(struct usb_configuration *VAR_2,
  const struct usb_ctrlrequest *VAR_3)
{
 switch (VAR_3->bRequest) {
 case 0x5b:
 case 0x5c:
  return VAR_1->setup(VAR_1, VAR_3);
 default:
  return -VAR_0;
 }
}
