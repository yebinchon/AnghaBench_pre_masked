
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_3)
{
 u32 VAR_4;

 if (!FUNC_1(VAR_3))
  return;

 FUNC_0(VAR_3->dev, "Clearing force mode bits\n");

 VAR_4 = FUNC_3(VAR_3, VAR_0);
 VAR_4 &= ~VAR_2;
 VAR_4 &= ~VAR_1;
 FUNC_4(VAR_3, VAR_4, VAR_0);

 if (FUNC_2(VAR_3))
  FUNC_5(100);
}
