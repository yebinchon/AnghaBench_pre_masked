
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ snpsid; } ;
struct TYPE_3__ {scalar_t__ phy_type; scalar_t__ i2c_enable; } ;
struct dwc2_hsotg {void* op_state; int srp_success; int dev; int lock; TYPE_2__ hw_params; TYPE_1__ params; int lx_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc2_hsotg*,int) ;
 int FUNC_3 (struct dwc2_hsotg*) ;
 int FUNC_4 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_5 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_6 (struct dwc2_hsotg*) ;
 int FUNC_7 (struct dwc2_hsotg*) ;
 int FUNC_8 (struct dwc2_hsotg*,int ) ;
 int FUNC_9 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct dwc2_hsotg *VAR_22)
{
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;

 VAR_23 = FUNC_8(VAR_22, VAR_11);
 VAR_24 = FUNC_8(VAR_22, VAR_5);
 FUNC_0(VAR_22->dev, "++OTG Interrupt gotgint=%0x [%s]\n", VAR_23,
  FUNC_7(VAR_22));

 if (VAR_23 & VAR_16) {
  FUNC_0(VAR_22->dev,
   " ++OTG Interrupt: Session End Detected++ (%s)\n",
   FUNC_7(VAR_22));
  VAR_24 = FUNC_8(VAR_22, VAR_5);

  if (FUNC_5(VAR_22))
   FUNC_4(VAR_22);

  if (VAR_22->op_state == VAR_20) {
   VAR_22->op_state = VAR_21;
  } else {




   if (VAR_24 & VAR_6) {
    FUNC_0(VAR_22->dev, "Session End Detected\n");
    FUNC_1(VAR_22->dev,
     "Device Not Connected/Responding!\n");
   }






   VAR_22->lx_state = VAR_1;
  }

  VAR_24 = FUNC_8(VAR_22, VAR_5);
  VAR_24 &= ~VAR_6;
  FUNC_9(VAR_22, VAR_24, VAR_5);
 }

 if (VAR_23 & VAR_17) {
  FUNC_0(VAR_22->dev,
   " ++OTG Interrupt: Session Request Success Status Change++\n");
  VAR_24 = FUNC_8(VAR_22, VAR_5);
  if (VAR_24 & VAR_10) {
   if (VAR_22->params.phy_type == VAR_2 &&
       VAR_22->params.i2c_enable) {
    VAR_22->srp_success = 1;
   } else {

    VAR_24 = FUNC_8(VAR_22, VAR_5);
    VAR_24 &= ~VAR_9;
    FUNC_9(VAR_22, VAR_24, VAR_5);
   }
  }
 }

 if (VAR_23 & VAR_15) {




  VAR_24 = FUNC_8(VAR_22, VAR_5);




  if (VAR_22->hw_params.snpsid >= VAR_0)
   FUNC_12(100);
  if (VAR_24 & VAR_8) {
   if (FUNC_6(VAR_22)) {
    VAR_22->op_state = VAR_20;
    VAR_25 = FUNC_8(VAR_22, VAR_3);
    VAR_25 &= ~VAR_4;
    FUNC_9(VAR_22, VAR_25, VAR_3);





    FUNC_11(&VAR_22->lock);


    FUNC_3(VAR_22);
    FUNC_10(&VAR_22->lock);
    VAR_22->op_state = VAR_20;
   }
  } else {
   VAR_24 = FUNC_8(VAR_22, VAR_5);
   VAR_24 &= ~(VAR_7 | VAR_6);
   FUNC_9(VAR_22, VAR_24, VAR_5);
   FUNC_0(VAR_22->dev, "HNP Failed\n");
   FUNC_1(VAR_22->dev,
    "Device Not Connected/Responding\n");
  }
 }

 if (VAR_23 & VAR_14) {






  FUNC_0(VAR_22->dev,
   " ++OTG Interrupt: Host Negotiation Detected++ (%s)\n",
   (FUNC_6(VAR_22) ? "Host" : "Device"));
  if (FUNC_5(VAR_22)) {
   FUNC_0(VAR_22->dev, "a_suspend->a_peripheral (%d)\n",
    VAR_22->op_state);
   FUNC_11(&VAR_22->lock);
   FUNC_2(VAR_22, 0);
   FUNC_10(&VAR_22->lock);
   VAR_22->op_state = VAR_19;
  } else {

   VAR_25 = FUNC_8(VAR_22, VAR_3);
   VAR_25 &= ~VAR_4;
   FUNC_9(VAR_22, VAR_25, VAR_3);
   FUNC_11(&VAR_22->lock);
   FUNC_3(VAR_22);
   FUNC_10(&VAR_22->lock);
   VAR_22->op_state = VAR_18;
  }
 }

 if (VAR_23 & VAR_12)
  FUNC_0(VAR_22->dev,
   " ++OTG Interrupt: A-Device Timeout Change++\n");
 if (VAR_23 & VAR_13)
  FUNC_0(VAR_22->dev, " ++OTG Interrupt: Debounce Done++\n");


 FUNC_9(VAR_22, VAR_23, VAR_11);
}
