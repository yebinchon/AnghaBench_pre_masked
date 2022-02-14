
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whiteheat_simple {scalar_t__ port; } ;
struct usb_serial_port {scalar_t__ port_number; } ;
typedef int get_dr_command ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct usb_serial_port*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct usb_serial_port *VAR_1)
{
 struct whiteheat_simple VAR_2;

 VAR_2.port = VAR_1->port_number + 1;
 return FUNC_0(VAR_1, VAR_0,
   (__u8 *)&VAR_2, sizeof(VAR_2));
}
