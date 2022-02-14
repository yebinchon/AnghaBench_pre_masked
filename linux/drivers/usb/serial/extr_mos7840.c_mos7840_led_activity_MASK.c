
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct moschip_port {int led_timer1; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct moschip_port*,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct moschip_port* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_5(struct usb_serial_port *VAR_4)
{
 struct moschip_port *VAR_5 = FUNC_4(VAR_4);

 if (FUNC_3(VAR_2, &VAR_5->flags))
  return;

 FUNC_1(VAR_5, 0x0301, VAR_1);
 FUNC_0(&VAR_5->led_timer1,
    VAR_3 + FUNC_2(VAR_0));
}
