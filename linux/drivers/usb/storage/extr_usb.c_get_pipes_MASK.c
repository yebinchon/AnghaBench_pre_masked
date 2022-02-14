
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_interface {int dummy; } ;
struct usb_endpoint_descriptor {int bInterval; } ;
struct us_data {scalar_t__ protocol; int ep_bInterval; int pusb_dev; int recv_intr_pipe; int recv_bulk_pipe; int send_bulk_pipe; int recv_ctrl_pipe; int send_ctrl_pipe; TYPE_1__* pusb_intf; } ;
struct TYPE_2__ {struct usb_host_interface* cur_altsetting; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_endpoint_descriptor*) ;
 int FUNC_1 (struct usb_host_interface*,struct usb_endpoint_descriptor**,struct usb_endpoint_descriptor**,int *,int *) ;
 int FUNC_2 (struct usb_host_interface*,struct usb_endpoint_descriptor**) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct us_data*,char*) ;

__attribute__((used)) static int FUNC_9(struct us_data *VAR_1)
{
 struct usb_host_interface *VAR_2 = VAR_1->pusb_intf->cur_altsetting;
 struct usb_endpoint_descriptor *VAR_3;
 struct usb_endpoint_descriptor *VAR_4;
 struct usb_endpoint_descriptor *VAR_5;
 int VAR_6;







 VAR_6 = FUNC_1(VAR_2, &VAR_3, &VAR_4, ((void*)0), ((void*)0));
 if (VAR_6) {
  FUNC_8(VAR_1, "bulk endpoints not found\n");
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_6 && VAR_1->protocol == VAR_0) {
  FUNC_8(VAR_1, "interrupt endpoint not found\n");
  return VAR_6;
 }


 VAR_1->send_ctrl_pipe = FUNC_7(VAR_1->pusb_dev, 0);
 VAR_1->recv_ctrl_pipe = FUNC_4(VAR_1->pusb_dev, 0);
 VAR_1->send_bulk_pipe = FUNC_6(VAR_1->pusb_dev,
  FUNC_0(VAR_4));
 VAR_1->recv_bulk_pipe = FUNC_3(VAR_1->pusb_dev,
  FUNC_0(VAR_3));
 if (VAR_5) {
  VAR_1->recv_intr_pipe = FUNC_5(VAR_1->pusb_dev,
   FUNC_0(VAR_5));
  VAR_1->ep_bInterval = VAR_5->bInterval;
 }
 return 0;
}
