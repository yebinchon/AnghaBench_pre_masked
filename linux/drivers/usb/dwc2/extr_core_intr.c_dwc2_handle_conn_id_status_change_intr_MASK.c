
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int lock; int wf_otg; scalar_t__ wq_otg; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct dwc2_hsotg *VAR_4)
{
 u32 VAR_5;


 FUNC_3(VAR_4, VAR_2, VAR_1);


 VAR_5 = FUNC_2(VAR_4, VAR_0);
 VAR_5 &= ~VAR_3;
 FUNC_3(VAR_4, VAR_5, VAR_0);

 FUNC_0(VAR_4->dev, " ++Connector ID Status Change Interrupt++  (%s)\n",
  FUNC_1(VAR_4) ? "Host" : "Device");






 if (VAR_4->wq_otg) {
  FUNC_6(&VAR_4->lock);
  FUNC_4(VAR_4->wq_otg, &VAR_4->wf_otg);
  FUNC_5(&VAR_4->lock);
 }
}
