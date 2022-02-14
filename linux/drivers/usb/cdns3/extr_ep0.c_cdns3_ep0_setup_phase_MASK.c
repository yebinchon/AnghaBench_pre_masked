
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int wLength; } ;
struct cdns3_endpoint {int dir; int pending_req_list; } ;
struct cdns3_device {int ep0_data_dir; scalar_t__ ep0_stage; struct cdns3_endpoint** eps; struct usb_ctrlrequest* setup_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cdns3_device*,int,int) ;
 int FUNC_1 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_2 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_3 (struct cdns3_endpoint*,int ,int ) ;
 struct usb_request* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_request*) ;
 int FUNC_8 (struct usb_ctrlrequest*) ;

__attribute__((used)) static void FUNC_9(struct cdns3_device *VAR_7)
{
 struct usb_ctrlrequest *VAR_8 = VAR_7->setup_buf;
 struct cdns3_endpoint *VAR_9 = VAR_7->eps[0];
 int VAR_10;

 VAR_7->ep0_data_dir = VAR_8->bRequestType & VAR_3;

 FUNC_8(VAR_8);

 if (!FUNC_6(&VAR_9->pending_req_list)) {
  struct usb_request *VAR_11;

  VAR_11 = FUNC_4(&VAR_9->pending_req_list);
  VAR_9->dir = VAR_7->ep0_data_dir;
  FUNC_3(VAR_9, FUNC_7(VAR_11),
          -VAR_2);
 }

 if (FUNC_5(VAR_8->wLength))
  VAR_7->ep0_stage = VAR_0;
 else
  VAR_7->ep0_stage = VAR_1;

 if ((VAR_8->bRequestType & VAR_5) == VAR_6)
  VAR_10 = FUNC_2(VAR_7, VAR_8);
 else
  VAR_10 = FUNC_1(VAR_7, VAR_8);

 if (VAR_10 == VAR_4)
  return;

 if (VAR_10 < 0)
  FUNC_0(VAR_7, 1, 1);
 else if (VAR_7->ep0_stage == VAR_1)
  FUNC_0(VAR_7, 0, 1);
}
