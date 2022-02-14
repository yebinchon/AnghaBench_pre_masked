
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1, VAR_0);
 u32 VAR_4;

 VAR_4 = VAR_3 | VAR_2;

 if (VAR_4 != VAR_3) {
  FUNC_0(VAR_1->dev, "gsintmsk now 0x%08x\n", VAR_4);
  FUNC_2(VAR_1, VAR_4, VAR_0);
 }
}
