
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*,int ,int ) ;

void FUNC_3(struct dwc2_hsotg *VAR_1)
{
 FUNC_0(VAR_1->dev, "DWC OTG HCD STOP\n");
 FUNC_1(VAR_1);


 FUNC_0(VAR_1->dev, "PortPower off\n");
 FUNC_2(VAR_1, 0, VAR_0);
}
