
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_request {scalar_t__ length; scalar_t__ buf; int * context; } ;
struct usb_function {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int wValue; int bRequest; int wLength; int wIndex; } ;
struct fsg_dev {int interface_number; TYPE_1__* common; } ;
struct TYPE_5__ {int ep0_req_tag; struct usb_request* ep0req; } ;


 int FUNC_0 (struct fsg_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_1 (struct fsg_dev*,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct fsg_dev*,char*,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 struct fsg_dev* FUNC_5 (struct usb_function*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_function *VAR_8,
       const struct usb_ctrlrequest *VAR_9)
{
 struct fsg_dev *VAR_10 = FUNC_5(VAR_8);
 struct usb_request *VAR_11 = VAR_10->common->ep0req;
 u16 VAR_12 = FUNC_7(VAR_9->wIndex);
 u16 VAR_13 = FUNC_7(VAR_9->wValue);
 u16 VAR_14 = FUNC_7(VAR_9->wLength);

 if (!FUNC_6(VAR_10->common))
  return -VAR_1;

 ++VAR_10->common->ep0_req_tag;
 VAR_11->context = ((void*)0);
 VAR_11->length = 0;
 FUNC_3(VAR_10, "ep0-setup", (u8 *) VAR_9, sizeof(*VAR_9));

 switch (VAR_9->bRequest) {

 case 128:
  if (VAR_9->bRequestType !=
      (VAR_4 | VAR_7 | VAR_6))
   break;
  if (VAR_12 != VAR_10->interface_number || VAR_13 != 0 ||
    VAR_14 != 0)
   return -VAR_0;





  FUNC_0(VAR_10, "bulk reset request\n");
  FUNC_9(VAR_10->common, VAR_2);
  return VAR_5;

 case 129:
  if (VAR_9->bRequestType !=
      (VAR_3 | VAR_7 | VAR_6))
   break;
  if (VAR_12 != VAR_10->interface_number || VAR_13 != 0 ||
    VAR_14 != 1)
   return -VAR_0;
  FUNC_1(VAR_10, "get max LUN\n");
  *(u8 *)VAR_11->buf = FUNC_2(VAR_10->common);


  VAR_11->length = FUNC_8((u16)1, VAR_14);
  return FUNC_4(VAR_10->common);
 }

 FUNC_1(VAR_10,
      "unknown class-specific control req %02x.%02x v%04x i%04x l%u\n",
      VAR_9->bRequestType, VAR_9->bRequest,
      FUNC_7(VAR_9->wValue), VAR_12, VAR_14);
 return -VAR_1;
}
