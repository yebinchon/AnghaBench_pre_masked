
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct edgeport_serial {int heartbeat_work; } ;


 int FUNC_0 (int *) ;
 struct edgeport_serial* FUNC_1 (struct usb_serial*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial *VAR_0)
{
 struct edgeport_serial *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->heartbeat_work);
}
