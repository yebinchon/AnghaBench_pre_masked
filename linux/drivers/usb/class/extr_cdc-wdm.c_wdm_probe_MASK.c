
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_interface {struct usb_host_interface* cur_altsetting; TYPE_1__* altsetting; } ;
struct TYPE_7__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_4__* endpoint; TYPE_3__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_cdc_parsed_header {TYPE_2__* usb_cdc_dmm_desc; } ;
struct TYPE_8__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_6__ {int wMaxCommand; } ;
struct TYPE_5__ {int extralen; int * extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_cdc_parsed_header*,struct usb_interface*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_interface*,struct usb_endpoint_descriptor*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_3, const struct usb_device_id *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct usb_host_interface *VAR_6;
 struct usb_endpoint_descriptor *VAR_7;
 struct usb_cdc_parsed_header VAR_8;
 u8 *VAR_9 = VAR_3->altsetting->extra;
 int VAR_10 = VAR_3->altsetting->extralen;
 u16 VAR_11 = VAR_1;

 if (!VAR_9)
  goto err;

 FUNC_0(&VAR_8, VAR_3, VAR_9, VAR_10);

 if (VAR_8.usb_cdc_dmm_desc)
  VAR_11 = FUNC_1(VAR_8.usb_cdc_dmm_desc->wMaxCommand);

 VAR_6 = VAR_3->cur_altsetting;
 if (VAR_6->desc.bNumEndpoints != 1)
  goto err;
 VAR_7 = &VAR_6->endpoint[0].desc;

 VAR_5 = FUNC_2(VAR_3, VAR_7, VAR_11, &VAR_2);

err:
 return VAR_5;
}
