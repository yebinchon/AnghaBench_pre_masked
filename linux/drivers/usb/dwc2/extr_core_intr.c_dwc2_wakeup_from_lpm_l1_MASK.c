
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {scalar_t__ lx_state; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dwc2_hsotg*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_4 (struct dwc2_hsotg*) ;
 int FUNC_5 (struct dwc2_hsotg*,int ) ;
 int FUNC_6 (struct dwc2_hsotg*,int,int ) ;
 int VAR_8 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct dwc2_hsotg *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11 = 0;

 if (VAR_9->lx_state != VAR_1) {
  FUNC_2(VAR_9->dev, "Core isn't in DWC2_L1 state\n");
  return;
 }

 VAR_10 = FUNC_5(VAR_9, VAR_2);
 if (FUNC_4(VAR_9)) {
  FUNC_1(VAR_9->dev, "Exit from L1 state\n");
  VAR_10 &= ~VAR_4;
  VAR_10 &= ~VAR_5;
  FUNC_6(VAR_9, VAR_10, VAR_2);

  do {
   VAR_10 = FUNC_5(VAR_9, VAR_2);

   if (!(VAR_10 & (VAR_3 |
      VAR_6 | VAR_7)))
    break;

   FUNC_7(1);
  } while (++VAR_11 < 200);

  if (VAR_11 == 200) {
   FUNC_2(VAR_9->dev, "Failed to exit L1 sleep state in 200us.\n");
   return;
  }
  FUNC_3(VAR_9);
 } else {

  FUNC_2(VAR_9->dev, "Host side LPM is not supported.\n");
  return;
 }


 VAR_9->lx_state = VAR_0;


 FUNC_0(VAR_9, VAR_8);
}
