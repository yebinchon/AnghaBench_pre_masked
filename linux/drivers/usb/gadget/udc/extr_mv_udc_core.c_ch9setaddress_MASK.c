
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct usb_ctrlrequest {scalar_t__ wValue; } ;
struct mv_udc {int usb_state; scalar_t__ dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv_udc*) ;
 scalar_t__ FUNC_1 (struct mv_udc*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mv_udc *VAR_2, struct usb_ctrlrequest *VAR_3)
{
 VAR_2->dev_addr = (u8)VAR_3->wValue;


 VAR_2->usb_state = VAR_1;

 if (FUNC_1(VAR_2, VAR_0, 0, 1))
  FUNC_0(VAR_2);
}
