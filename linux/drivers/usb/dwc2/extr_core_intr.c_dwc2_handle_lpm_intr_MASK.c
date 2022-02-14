
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dev; int lx_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct dwc2_hsotg*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct dwc2_hsotg*) ;
 int FUNC_4 (struct dwc2_hsotg*,int ) ;
 int FUNC_5 (struct dwc2_hsotg*,int,int ) ;
 int VAR_14 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct dwc2_hsotg *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;


 FUNC_5(VAR_15, VAR_2, VAR_1);

 VAR_16 = FUNC_4(VAR_15, VAR_3);

 if (!(VAR_16 & VAR_10)) {
  FUNC_2(VAR_15->dev, "Unexpected LPM interrupt\n");
  return;
 }

 VAR_18 = (VAR_16 & VAR_5) >> VAR_6;
 VAR_19 = (VAR_16 & VAR_8 &
   ~VAR_7) >> VAR_9;
 VAR_20 = VAR_16 & VAR_7;
 VAR_21 = VAR_16 & VAR_4;

 if (FUNC_3(VAR_15)) {
  FUNC_1(VAR_15->dev, "HIRD_THRES_EN = %d\n", VAR_20);

  if (VAR_20 && VAR_18 >= VAR_19) {
   FUNC_1(VAR_15->dev, "L1 with utmi_l1_suspend_n\n");
  } else if (VAR_21) {
   FUNC_1(VAR_15->dev, "L1 with utmi_sleep_n\n");
  } else {
   FUNC_1(VAR_15->dev, "Entering Sleep with L1 Gating\n");

   VAR_17 = FUNC_4(VAR_15, VAR_12);
   VAR_17 |= VAR_13;
   FUNC_5(VAR_15, VAR_17, VAR_12);
  }



  FUNC_6(10);

  VAR_16 = FUNC_4(VAR_15, VAR_3);

  if (VAR_16 & VAR_11) {

   VAR_15->lx_state = VAR_0;
   FUNC_1(VAR_15->dev,
    "Core is in L1 sleep glpmcfg=%08x\n", VAR_16);


   FUNC_0(VAR_15, VAR_14);
  }
 }
}
