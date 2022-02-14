
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_ctrlrequest {int bRequestType; int wIndex; } ;
struct TYPE_2__ {int length; int * complete; scalar_t__ actual; int * buf; } ;
struct s3c_hsudc_req {TYPE_1__ req; int queue; } ;
struct s3c_hsudc_ep {int stopped; } ;
struct s3c_hsudc {struct s3c_hsudc_ep* ep; } ;
typedef int __le16 ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct s3c_hsudc_ep*,struct s3c_hsudc_req*) ;

__attribute__((used)) static void FUNC_4(struct s3c_hsudc *VAR_2,
     struct usb_ctrlrequest *VAR_3)
{
 struct s3c_hsudc_ep *VAR_4 = &VAR_2->ep[0];
 struct s3c_hsudc_req VAR_5;
 struct s3c_hsudc_ep *VAR_6;
 __le16 VAR_7;
 u8 VAR_8;

 switch (VAR_3->bRequestType & VAR_1) {
 case 130:
  VAR_7 = FUNC_1(0);
  break;

 case 128:
  VAR_7 = FUNC_1(0);
  break;

 case 129:
  VAR_8 = FUNC_2(VAR_3->wIndex) & VAR_0;
  VAR_6 = &VAR_2->ep[VAR_8];
  VAR_7 = FUNC_1(VAR_6->stopped ? 1 : 0);
  break;
 }

 FUNC_0(&VAR_5.queue);
 VAR_5.req.length = 2;
 VAR_5.req.buf = &VAR_7;
 VAR_5.req.actual = 0;
 VAR_5.req.complete = ((void*)0);
 FUNC_3(VAR_4, &VAR_5);
}
