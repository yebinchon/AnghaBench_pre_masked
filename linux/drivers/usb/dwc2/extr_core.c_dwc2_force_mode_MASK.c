
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {scalar_t__ dr_mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,int) ;
 int FUNC_5 (struct dwc2_hsotg*,int ,int ) ;

void FUNC_6(struct dwc2_hsotg *VAR_5, bool VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_5->dev, "Forcing mode to %s\n", VAR_6 ? "host" : "device");




 if (!FUNC_2(VAR_5))
  return;





 if (FUNC_0(VAR_6 && VAR_5->dr_mode == VAR_4))
  return;

 if (FUNC_0(!VAR_6 && VAR_5->dr_mode == VAR_3))
  return;

 VAR_7 = FUNC_3(VAR_5, VAR_0);

 VAR_8 = VAR_6 ? VAR_2 : VAR_1;
 VAR_9 = VAR_6 ? VAR_1 : VAR_2;

 VAR_7 &= ~VAR_9;
 VAR_7 |= VAR_8;
 FUNC_5(VAR_5, VAR_7, VAR_0);

 FUNC_4(VAR_5, VAR_6);
 return;
}
