
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_endpoint_descriptor {int dummy; } ;
struct TYPE_3__ {scalar_t__ dir_out; scalar_t__ dir_in; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;
struct cdns3_endpoint {TYPE_2__ endpoint; } ;


 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_2(struct usb_endpoint_descriptor *VAR_0,
       struct cdns3_endpoint *VAR_1)
{
 return (VAR_1->endpoint.caps.dir_in && FUNC_0(VAR_0)) ||
        (VAR_1->endpoint.caps.dir_out && FUNC_1(VAR_0));
}
