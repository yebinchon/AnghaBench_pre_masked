
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usb_hcd {int dummy; } ;
struct gb_usb_hub_control_response {int buf; } ;
struct gb_usb_hub_control_request {void* wLength; void* wIndex; void* wValue; void* typeReq; } ;
struct gb_usb_device {int connection; } ;
struct gb_operation {TYPE_2__* response; TYPE_1__* request; } ;
struct TYPE_4__ {struct gb_usb_hub_control_response* payload; } ;
struct TYPE_3__ {struct gb_usb_hub_control_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct gb_operation* FUNC_1 (int ,int ,int,size_t,int ) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (char*,int ,int) ;
 struct gb_usb_device* FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_3, u16 VAR_4, u16 VAR_5, u16 VAR_6,
         char *VAR_7, u16 VAR_8)
{
 struct gb_usb_device *VAR_9 = FUNC_5(VAR_3);
 struct gb_operation *VAR_10;
 struct gb_usb_hub_control_request *VAR_11;
 struct gb_usb_hub_control_response *VAR_12;
 size_t VAR_13;
 int VAR_14;


 VAR_13 = sizeof(*VAR_12) + VAR_8;

 VAR_10 = FUNC_1(VAR_9->connection,
     VAR_1,
     sizeof(*VAR_11),
     VAR_13,
     VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = VAR_10->request->payload;
 VAR_11->typeReq = FUNC_0(VAR_4);
 VAR_11->wValue = FUNC_0(VAR_5);
 VAR_11->wIndex = FUNC_0(VAR_6);
 VAR_11->wLength = FUNC_0(VAR_8);

 VAR_14 = FUNC_3(VAR_10);
 if (VAR_14)
  goto out;

 if (VAR_8) {

  VAR_12 = VAR_10->response->payload;
  FUNC_4(VAR_7, VAR_12->buf, VAR_8);
 }
out:
 FUNC_2(VAR_10);

 return VAR_14;
}
