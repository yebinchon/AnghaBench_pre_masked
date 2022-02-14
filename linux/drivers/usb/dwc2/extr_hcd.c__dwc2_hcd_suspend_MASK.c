
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int flags; } ;
struct TYPE_2__ {scalar_t__ power_down; } ;
struct dwc2_hsotg {scalar_t__ lx_state; scalar_t__ op_state; int lock; int uphy; int dev; TYPE_1__ params; scalar_t__ regs; int bus_suspended; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_hcd*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct dwc2_hsotg*) ;
 struct dwc2_hsotg* FUNC_5 (struct usb_hcd*) ;
 scalar_t__ FUNC_6 (struct dwc2_hsotg*) ;
 int FUNC_7 (struct dwc2_hsotg*) ;
 int FUNC_8 (struct dwc2_hsotg*) ;
 int FUNC_9 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct usb_hcd *VAR_12)
{
 struct dwc2_hsotg *VAR_13 = FUNC_5(VAR_12);
 unsigned long VAR_14;
 int VAR_15 = 0;
 u32 VAR_16;
 u32 VAR_17;

 FUNC_11(&VAR_13->lock, VAR_14);

 if (FUNC_6(VAR_13))
  goto unlock;

 if (VAR_13->lx_state != VAR_0)
  goto unlock;

 if (!FUNC_0(VAR_12))
  goto unlock;

 if (VAR_13->op_state == VAR_9)
  goto unlock;

 if (VAR_13->params.power_down > VAR_2)
  goto skip_power_saving;





 if (!VAR_13->bus_suspended) {
  VAR_16 = FUNC_7(VAR_13);
  if (VAR_16 & VAR_6) {
   VAR_16 |= VAR_8;
   if (VAR_13->params.power_down == VAR_2)
    VAR_16 &= ~VAR_7;
   FUNC_9(VAR_13, VAR_16, VAR_5);
  }
  if (VAR_13->params.power_down == VAR_2) {
   FUNC_12(&VAR_13->lock, VAR_14);
   FUNC_8(VAR_13);
   FUNC_11(&VAR_13->lock, VAR_14);
  } else {
   VAR_17 = FUNC_10(VAR_13->regs + VAR_10);
   VAR_17 |= VAR_11;
   FUNC_14(VAR_17, VAR_13->regs + VAR_10);
  }
 }

 if (VAR_13->params.power_down == VAR_2) {

  VAR_15 = FUNC_4(VAR_13);
  if (VAR_15) {
   if (VAR_15 != -VAR_3)
    FUNC_3(VAR_13->dev,
     "enter partial_power_down failed\n");
   goto skip_power_saving;
  }


  FUNC_2(VAR_4, &VAR_12->flags);
 }


 if (!FUNC_1(VAR_13->uphy)) {
  FUNC_12(&VAR_13->lock, VAR_14);
  FUNC_13(VAR_13->uphy, 1);
  FUNC_11(&VAR_13->lock, VAR_14);
 }

skip_power_saving:
 VAR_13->lx_state = VAR_1;
unlock:
 FUNC_12(&VAR_13->lock, VAR_14);

 return VAR_15;
}
