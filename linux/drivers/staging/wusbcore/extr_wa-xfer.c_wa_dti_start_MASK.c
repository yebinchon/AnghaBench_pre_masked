
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {int * dti_urb; int usb_dev; int * buf_in_urbs; int dti_buf_size; int * dti_buf; TYPE_1__* usb_iface; struct usb_endpoint_descriptor* dti_epd; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ,int *,int ,int ,struct wahc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(struct wahc *VAR_5)
{
 const struct usb_endpoint_descriptor *VAR_6 = VAR_5->dti_epd;
 struct device *VAR_7 = &VAR_5->usb_iface->dev;
 int VAR_8 = -VAR_0, VAR_9;

 if (VAR_5->dti_urb != ((void*)0))
  goto out;

 VAR_5->dti_urb = FUNC_1(0, VAR_1);
 if (VAR_5->dti_urb == ((void*)0))
  goto error_dti_urb_alloc;
 FUNC_2(
  VAR_5->dti_urb, VAR_5->usb_dev,
  FUNC_4(VAR_5->usb_dev, 0x80 | VAR_6->bEndpointAddress),
  VAR_5->dti_buf, VAR_5->dti_buf_size,
  VAR_4, VAR_5);


 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
  FUNC_2(
   &(VAR_5->buf_in_urbs[VAR_9]), VAR_5->usb_dev,
   FUNC_4(VAR_5->usb_dev,
    0x80 | VAR_6->bEndpointAddress),
   ((void*)0), 0, VAR_3, VAR_5);
 }
 VAR_8 = FUNC_5(VAR_5->dti_urb, VAR_1);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7, "DTI Error: Could not submit DTI URB (%d) resetting\n",
   VAR_8);
  goto error_dti_urb_submit;
 }
out:
 return 0;

error_dti_urb_submit:
 FUNC_3(VAR_5->dti_urb);
 VAR_5->dti_urb = ((void*)0);
error_dti_urb_alloc:
 return VAR_8;
}
