
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dma; int num_sgs; } ;
struct usbhsg_request {struct usb_request req; } ;
struct usbhs_pkt {int dma; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,struct usb_request*,int) ;
 int FUNC_2 (struct device*,struct usb_request*,int) ;
 int FUNC_3 (struct usbhs_pipe*) ;
 struct usbhsg_request* FUNC_4 (struct usbhs_pkt*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, struct usbhs_pkt *VAR_1,
          int VAR_2)
{
 struct usbhsg_request *VAR_3 = FUNC_4(VAR_1);
 struct usb_request *VAR_4 = &VAR_3->req;
 struct usbhs_pipe *VAR_5 = VAR_1->pipe;
 enum dma_data_direction VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_5);

 if (VAR_2) {

  FUNC_0(VAR_4->num_sgs);

  VAR_7 = FUNC_1(VAR_0, VAR_4, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_1->dma = VAR_4->dma;
 } else {
  FUNC_2(VAR_0, VAR_4, VAR_6);
 }

 return VAR_7;
}
