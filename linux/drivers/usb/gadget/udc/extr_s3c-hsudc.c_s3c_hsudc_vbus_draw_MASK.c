
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct s3c_hsudc {int transceiver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct s3c_hsudc* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_2, unsigned VAR_3)
{
 struct s3c_hsudc *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_4)
  return -VAR_0;

 if (!FUNC_0(VAR_4->transceiver))
  return FUNC_2(VAR_4->transceiver, VAR_3);

 return -VAR_1;
}
