
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int flags; } ;
struct TYPE_6__ {scalar_t__ power_down; } ;
struct TYPE_4__ {int port_suspend_change; } ;
struct TYPE_5__ {TYPE_1__ b; } ;
struct dwc2_hsotg {scalar_t__ lx_state; int lock; TYPE_3__ params; TYPE_2__ flags; scalar_t__ bus_suspended; scalar_t__ regs; int dev; int uphy; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc2_hsotg*,int) ;
 struct dwc2_hsotg* FUNC_3 (struct usb_hcd*) ;
 scalar_t__ FUNC_4 (struct dwc2_hsotg*) ;
 int FUNC_5 (struct dwc2_hsotg*) ;
 int FUNC_6 (struct dwc2_hsotg*) ;
 int FUNC_7 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct usb_hcd *VAR_11)
{
 struct dwc2_hsotg *VAR_12 = FUNC_3(VAR_11);
 unsigned long VAR_13;
 u32 VAR_14;
 int VAR_15 = 0;

 FUNC_10(&VAR_12->lock, VAR_13);

 if (FUNC_4(VAR_12))
  goto unlock;

 if (VAR_12->lx_state != VAR_1)
  goto unlock;

 if (VAR_12->params.power_down > VAR_2) {
  VAR_12->lx_state = VAR_0;
  goto unlock;
 }






 if (!FUNC_0(VAR_12->uphy)) {
  FUNC_11(&VAR_12->lock, VAR_13);
  FUNC_12(VAR_12->uphy, 0);
  FUNC_10(&VAR_12->lock, VAR_13);
 }

 if (VAR_12->params.power_down == VAR_2) {




  FUNC_9(VAR_4, &VAR_11->flags);



  VAR_15 = FUNC_2(VAR_12, 1);
  if (VAR_15 && (VAR_15 != -VAR_3))
   FUNC_1(VAR_12->dev, "exit partial_power_down failed\n");
 } else {
  VAR_14 = FUNC_8(VAR_12->regs + VAR_9);
  VAR_14 &= ~VAR_10;
  FUNC_14(VAR_14, VAR_12->regs + VAR_9);
 }

 VAR_12->lx_state = VAR_0;

 FUNC_11(&VAR_12->lock, VAR_13);

 if (VAR_12->bus_suspended) {
  FUNC_10(&VAR_12->lock, VAR_13);
  VAR_12->flags.b.port_suspend_change = 1;
  FUNC_11(&VAR_12->lock, VAR_13);
  FUNC_5(VAR_12);
 } else {
  if (VAR_12->params.power_down == VAR_2) {
   FUNC_6(VAR_12);


   FUNC_13(3000, 5000);
  }





  FUNC_7(VAR_12, VAR_8 | VAR_6 |
    VAR_7, VAR_5);

  FUNC_13(5000, 7000);
 }

 return VAR_15;
unlock:
 FUNC_11(&VAR_12->lock, VAR_13);

 return VAR_15;
}
