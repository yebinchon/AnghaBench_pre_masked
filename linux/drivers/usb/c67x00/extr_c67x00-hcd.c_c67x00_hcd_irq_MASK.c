
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hcd {scalar_t__ state; } ;
struct c67x00_sie {int sie_num; struct c67x00_hcd* private_data; } ;
struct c67x00_hcd {int dummy; } ;


 int FUNC_0 (struct usb_hcd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct c67x00_hcd*) ;
 struct usb_hcd* FUNC_3 (struct c67x00_hcd*) ;
 int FUNC_4 (struct c67x00_sie*,int ) ;
 int FUNC_5 (struct c67x00_hcd*) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct c67x00_sie *VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct c67x00_hcd *VAR_6 = VAR_3->private_data;
 struct usb_hcd *VAR_7 = FUNC_3(VAR_6);


 if (VAR_5) {
  if (VAR_5 & VAR_1)
   FUNC_5(VAR_6);
  else
   FUNC_6(FUNC_2(VAR_6),
     "Unknown SIE msg flag(s): 0x%04x\n", VAR_5);
 }

 if (FUNC_7(VAR_7->state == VAR_0))
  return;

 if (!FUNC_0(VAR_7))
  return;


 if (VAR_4 & FUNC_1(VAR_3->sie_num)) {
  FUNC_4(VAR_3, VAR_2);
  FUNC_5(VAR_6);
 }
}
