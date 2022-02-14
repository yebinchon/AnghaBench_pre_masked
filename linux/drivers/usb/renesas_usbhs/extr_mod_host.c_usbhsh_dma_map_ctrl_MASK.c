
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_request {struct urb* urb; } ;
struct usbhs_pkt {int dma; } ;
struct urb {int transfer_dma; scalar_t__ num_sgs; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct usbhsh_request* FUNC_0 (struct usbhs_pkt*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, struct usbhs_pkt *VAR_2,
          int VAR_3)
{
 if (VAR_3) {
  struct usbhsh_request *VAR_4 = FUNC_0(VAR_2);
  struct urb *VAR_5 = VAR_4->urb;


  if (VAR_5->num_sgs)
   return -VAR_0;

  VAR_2->dma = VAR_5->transfer_dma;
  if (!VAR_2->dma)
   return -VAR_0;
 }

 return 0;
}
