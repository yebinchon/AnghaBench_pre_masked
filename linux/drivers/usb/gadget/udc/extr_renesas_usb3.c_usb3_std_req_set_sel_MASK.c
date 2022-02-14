
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_ctrlrequest {int wLength; } ;
struct renesas_usb3 {int ep0_req; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct renesas_usb3*,int *,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct renesas_usb3*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct renesas_usb3 *VAR_1,
     struct usb_ctrlrequest *VAR_2)
{
 u16 VAR_3 = FUNC_1(VAR_2->wLength);

 if (VAR_3 != 6)
  return 1;

 FUNC_0(FUNC_3(VAR_1), "set_sel: req = %p\n",
  FUNC_4(VAR_1->ep0_req));
 FUNC_2(VAR_1, ((void*)0), 6, VAR_0);

 return 0;
}
