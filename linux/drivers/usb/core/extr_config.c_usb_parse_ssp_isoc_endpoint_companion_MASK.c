
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ssp_isoc_ep_comp_descriptor {scalar_t__ bDescriptorType; } ;
struct TYPE_2__ {int bEndpointAddress; } ;
struct usb_host_endpoint {int ssp_isoc_ep_comp; TYPE_1__ desc; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int,int,int ) ;
 int FUNC_1 (int *,struct usb_ssp_isoc_ep_comp_descriptor*,int) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_2,
  int VAR_3, int VAR_4, int VAR_5, struct usb_host_endpoint *VAR_6,
  unsigned char *VAR_7, int VAR_8)
{
 struct usb_ssp_isoc_ep_comp_descriptor *VAR_9;





 VAR_9 = (struct usb_ssp_isoc_ep_comp_descriptor *) VAR_7;
 if (VAR_9->bDescriptorType != VAR_0 ||
     VAR_8 < VAR_1) {
  FUNC_0(VAR_2, "Invalid SuperSpeedPlus isoc endpoint companion"
    "for config %d interface %d altsetting %d ep %d.\n",
    VAR_3, VAR_4, VAR_5, VAR_6->desc.bEndpointAddress);
  return;
 }
 FUNC_1(&VAR_6->ssp_isoc_ep_comp, VAR_9, VAR_1);
}
