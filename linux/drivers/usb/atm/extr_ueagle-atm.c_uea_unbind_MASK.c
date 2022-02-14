
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_data {struct uea_softc* driver_data; } ;
struct usb_interface {int dummy; } ;
struct uea_softc {int dummy; } ;


 int FUNC_0 (struct uea_softc*) ;
 int FUNC_1 (struct uea_softc*) ;

__attribute__((used)) static void FUNC_2(struct usbatm_data *VAR_0, struct usb_interface *VAR_1)
{
 struct uea_softc *VAR_2 = VAR_0->driver_data;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
}
