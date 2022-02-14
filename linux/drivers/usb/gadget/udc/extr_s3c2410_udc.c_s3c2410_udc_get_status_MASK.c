
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_ctrlrequest {int wIndex; int bRequestType; int wLength; } ;
struct s3c2410_udc {int devstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct s3c2410_udc *VAR_10,
  struct usb_ctrlrequest *VAR_11)
{
 u16 VAR_12 = 0;
 u8 VAR_13 = VAR_11->wIndex & 0x7F;
 u8 VAR_14 = VAR_11->wIndex & VAR_7;

 switch (VAR_11->bRequestType & VAR_8) {
 case 128:
  break;

 case 130:
  VAR_12 = VAR_10->devstatus;
  break;

 case 129:
  if (VAR_13 > 4 || VAR_11->wLength > 2)
   return 1;

  if (VAR_13 == 0) {
   FUNC_2(0, VAR_3);
   VAR_12 = FUNC_1(VAR_4);
   VAR_12 = VAR_12 & VAR_0;
  } else {
   FUNC_2(VAR_13, VAR_3);
   if (VAR_14) {
    VAR_12 = FUNC_1(VAR_4);
    VAR_12 = VAR_12 & VAR_2;
   } else {
    VAR_12 = FUNC_1(VAR_6);
    VAR_12 = VAR_12 & VAR_5;
   }
  }

  VAR_12 = VAR_12 ? 1 : 0;
  break;

 default:
  return 1;
 }


 FUNC_3(5);
 FUNC_2(VAR_12 & 0xFF, VAR_1);
 FUNC_2(VAR_12 >> 8, VAR_1);
 FUNC_0(VAR_9);

 return 0;
}
