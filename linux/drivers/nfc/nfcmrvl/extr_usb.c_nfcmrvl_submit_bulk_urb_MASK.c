
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct nfcmrvl_usb_drv_data {TYPE_2__* udev; int bulk_anchor; TYPE_1__* bulk_rx_ep; } ;
typedef int gfp_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,char*,struct urb*,int) ;
 int VAR_5 ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int *) ;
 int FUNC_4 (struct urb*,TYPE_2__*,unsigned int,unsigned char*,int,int ,struct nfcmrvl_usb_drv_data*) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (TYPE_2__*) ;
 unsigned int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static int
FUNC_10(struct nfcmrvl_usb_drv_data *VAR_6, gfp_t VAR_7)
{
 struct urb *VAR_8;
 unsigned char *VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12 = VAR_3;

 if (!VAR_6->bulk_rx_ep)
  return -VAR_0;

 VAR_8 = FUNC_2(0, VAR_7);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_12, VAR_7);
 if (!VAR_9) {
  FUNC_5(VAR_8);
  return -VAR_1;
 }

 VAR_10 = FUNC_7(VAR_6->udev,
          VAR_6->bulk_rx_ep->bEndpointAddress);

 FUNC_4(VAR_8, VAR_6->udev, VAR_10, VAR_9, VAR_12,
     VAR_5, VAR_6);

 VAR_8->transfer_flags |= VAR_4;

 FUNC_6(VAR_6->udev);
 FUNC_3(VAR_8, &VAR_6->bulk_anchor);

 VAR_11 = FUNC_8(VAR_8, VAR_7);
 if (VAR_11) {
  if (VAR_11 != -VAR_2 && VAR_11 != -VAR_0)
   FUNC_1(&VAR_6->udev->dev,
    "urb %p submission failed (%d)\n", VAR_8, -VAR_11);
  FUNC_9(VAR_8);
 }

 FUNC_5(VAR_8);

 return VAR_11;
}
