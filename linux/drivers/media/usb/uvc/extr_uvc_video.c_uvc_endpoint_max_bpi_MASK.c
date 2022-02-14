
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct TYPE_2__ {int wBytesPerInterval; } ;
struct usb_host_endpoint {int desc; TYPE_1__ ss_ep_comp; } ;
struct usb_device {int speed; } ;






 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct usb_device *VAR_0,
      struct usb_host_endpoint *VAR_1)
{
 u16 VAR_2;
 u16 VAR_3;

 switch (VAR_0->speed) {
 case 130:
 case 129:
  return FUNC_0(VAR_1->ss_ep_comp.wBytesPerInterval);
 case 131:
  VAR_2 = FUNC_1(&VAR_1->desc);
  VAR_3 = FUNC_2(&VAR_1->desc);
  return VAR_2 * VAR_3;
 case 128:
  VAR_2 = FUNC_1(&VAR_1->desc);
  return VAR_2;
 default:
  VAR_2 = FUNC_1(&VAR_1->desc);
  return VAR_2;
 }
}
