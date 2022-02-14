
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg *VAR_2)
{

 FUNC_2(VAR_2, VAR_1, VAR_0);

 FUNC_0(VAR_2->dev, "Mode Mismatch Interrupt: currently in %s mode\n",
   FUNC_1(VAR_2) ? "Host" : "Device");
}
