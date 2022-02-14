
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_0,
     const unsigned char *VAR_1, size_t VAR_2)
{
 FUNC_1(&VAR_0->port, VAR_1, VAR_2);
 FUNC_0(&VAR_0->port);
}
