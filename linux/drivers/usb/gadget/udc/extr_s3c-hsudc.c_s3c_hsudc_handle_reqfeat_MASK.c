
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct usb_ctrlrequest {scalar_t__ bRequest; size_t wIndex; scalar_t__ bRequestType; int wValue; } ;
struct s3c_hsudc_ep {int ep; int wedge; } ;
struct s3c_hsudc {struct s3c_hsudc_ep* ep; } ;


 int VAR_0 ;

 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct s3c_hsudc *VAR_4,
     struct usb_ctrlrequest *VAR_5)
{
 struct s3c_hsudc_ep *VAR_6;
 bool VAR_7 = (VAR_5->bRequest == VAR_3);
 u8 VAR_8 = VAR_5->wIndex & VAR_1;

 if (VAR_5->bRequestType == VAR_2) {
  VAR_6 = &VAR_4->ep[VAR_8];
  switch (FUNC_0(VAR_5->wValue)) {
  case 128:
   if (VAR_7 || !VAR_6->wedge)
    FUNC_1(&VAR_6->ep, VAR_7);
   return 0;
  }
 }

 return -VAR_0;
}
