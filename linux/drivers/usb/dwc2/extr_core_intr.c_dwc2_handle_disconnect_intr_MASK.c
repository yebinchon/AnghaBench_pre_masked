
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {scalar_t__ op_state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*,int) ;
 scalar_t__ FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*) ;
 int FUNC_4 (struct dwc2_hsotg*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dwc2_hsotg *VAR_3)
{
 FUNC_4(VAR_3, VAR_1, VAR_0);

 FUNC_0(VAR_3->dev, "++Disconnect Detected Interrupt++ (%s) %s\n",
  FUNC_2(VAR_3) ? "Host" : "Device",
  FUNC_3(VAR_3));

 if (VAR_3->op_state == VAR_2)
  FUNC_1(VAR_3, 0);
}
