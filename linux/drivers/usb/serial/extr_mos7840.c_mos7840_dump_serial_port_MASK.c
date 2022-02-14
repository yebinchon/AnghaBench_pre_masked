
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct moschip_port {int DcrRegOffset; int ControlRegOffset; int SpRegOffset; } ;


 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct usb_serial_port *VAR_0,
         struct moschip_port *VAR_1)
{

 FUNC_0(&VAR_0->dev, "SpRegOffset is %2x\n", VAR_1->SpRegOffset);
 FUNC_0(&VAR_0->dev, "ControlRegOffset is %2x\n", VAR_1->ControlRegOffset);
 FUNC_0(&VAR_0->dev, "DCRRegOffset is %2x\n", VAR_1->DcrRegOffset);

}
