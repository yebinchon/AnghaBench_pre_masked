
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {scalar_t__ lx_state; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc2_hsotg*,int) ;
 int FUNC_3 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_4 (struct dwc2_hsotg*) ;
 int FUNC_5 (struct dwc2_hsotg*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_4)
{
 int VAR_5;


 FUNC_5(VAR_4, VAR_3, VAR_2);

 FUNC_0(VAR_4->dev, "Session request interrupt - lx_state=%d\n",
  VAR_4->lx_state);

 if (FUNC_4(VAR_4)) {
  if (VAR_4->lx_state == VAR_0) {
   VAR_5 = FUNC_2(VAR_4, 1);
   if (VAR_5 && (VAR_5 != -VAR_1))
    FUNC_1(VAR_4->dev,
     "exit power_down failed\n");
  }





  FUNC_3(VAR_4);
 }
}
