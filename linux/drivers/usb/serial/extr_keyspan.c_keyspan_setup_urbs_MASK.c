
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct keyspan_serial_private {int glocont_buf; void* glocont_urb; int indat_buf; void* indat_urb; int instat_buf; void* instat_urb; struct keyspan_device_details* device_details; } ;
struct keyspan_device_details {size_t msg_format; int glocont_endpoint; int indat_endpoint; int instat_endpoint; } ;
struct callbacks {int glocont_callback; int instat_callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct callbacks* VAR_5 ;
 void* FUNC_0 (struct usb_serial*,int ,int ,struct usb_serial*,int ,int ,int ) ;
 int VAR_6 ;
 struct keyspan_serial_private* FUNC_1 (struct usb_serial*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial *VAR_7)
{
 struct keyspan_serial_private *VAR_8;
 const struct keyspan_device_details *VAR_9;
 struct callbacks *VAR_10;

 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = VAR_8->device_details;


 VAR_10 = &VAR_5[VAR_9->msg_format];



 VAR_8->instat_urb = FUNC_0
  (VAR_7, VAR_9->instat_endpoint, VAR_3,
   VAR_7, VAR_8->instat_buf, VAR_2,
   VAR_10->instat_callback);

 VAR_8->indat_urb = FUNC_0
  (VAR_7, VAR_9->indat_endpoint, VAR_3,
   VAR_7, VAR_8->indat_buf, VAR_1,
   VAR_6);

 VAR_8->glocont_urb = FUNC_0
  (VAR_7, VAR_9->glocont_endpoint, VAR_4,
   VAR_7, VAR_8->glocont_buf, VAR_0,
   VAR_10->glocont_callback);
}
