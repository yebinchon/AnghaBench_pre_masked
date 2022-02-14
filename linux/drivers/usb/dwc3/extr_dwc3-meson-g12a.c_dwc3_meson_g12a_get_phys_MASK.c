
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {int usb3_ports; int dev; int usb2_ports; int * phys; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dwc3_meson_g12a *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0 ; VAR_4 < VAR_0 ; ++VAR_4) {
  VAR_3->phys[VAR_4] = FUNC_3(VAR_3->dev, VAR_2[VAR_4]);
  if (!VAR_3->phys[VAR_4])
   continue;

  if (FUNC_0(VAR_3->phys[VAR_4]))
   return FUNC_1(VAR_3->phys[VAR_4]);

  if (VAR_4 == VAR_1)
   VAR_3->usb3_ports++;
  else
   VAR_3->usb2_ports++;
 }

 FUNC_2(VAR_3->dev, "USB2 ports: %d\n", VAR_3->usb2_ports);
 FUNC_2(VAR_3->dev, "USB3 ports: %d\n", VAR_3->usb3_ports);

 return 0;
}
