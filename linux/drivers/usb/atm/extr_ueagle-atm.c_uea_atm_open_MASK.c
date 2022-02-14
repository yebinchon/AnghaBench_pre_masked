
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_data {struct uea_softc* driver_data; } ;
struct uea_softc {int dummy; } ;
struct atm_dev {int esi; } ;


 int FUNC_0 (struct uea_softc*,int ) ;

__attribute__((used)) static int FUNC_1(struct usbatm_data *VAR_0, struct atm_dev *VAR_1)
{
 struct uea_softc *VAR_2 = VAR_0->driver_data;

 return FUNC_0(VAR_2, VAR_1->esi);
}
