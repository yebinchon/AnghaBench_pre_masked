
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct keyspan_serial_private {struct keyspan_serial_private* instat_buf; struct keyspan_serial_private* indat_buf; struct keyspan_serial_private* glocont_buf; struct keyspan_serial_private* ctrl_buf; int glocont_urb; int indat_urb; int instat_urb; } ;


 int FUNC_0 (struct keyspan_serial_private*) ;
 int FUNC_1 (int ) ;
 struct keyspan_serial_private* FUNC_2 (struct usb_serial*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_serial *VAR_0)
{
 struct keyspan_serial_private *VAR_1;

 VAR_1 = FUNC_2(VAR_0);


 FUNC_3(VAR_1->instat_urb);
 FUNC_3(VAR_1->indat_urb);

 FUNC_1(VAR_1->instat_urb);
 FUNC_1(VAR_1->indat_urb);
 FUNC_1(VAR_1->glocont_urb);

 FUNC_0(VAR_1->ctrl_buf);
 FUNC_0(VAR_1->glocont_buf);
 FUNC_0(VAR_1->indat_buf);
 FUNC_0(VAR_1->instat_buf);

 FUNC_0(VAR_1);
}
