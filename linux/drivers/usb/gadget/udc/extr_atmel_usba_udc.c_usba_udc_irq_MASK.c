
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ speed; } ;
struct usba_udc {int suspended; int bias_pulse_needed; int num_ep; int configured_ep; int lock; TYPE_2__* pdev; struct usba_ep* usba_ep; TYPE_3__ gadget; TYPE_4__* driver; } ;
struct TYPE_7__ {int * desc; } ;
struct usba_ep {int ept_cfg; int state; TYPE_1__ ep; } ;
typedef int irqreturn_t ;
struct TYPE_10__ {int (* resume ) (TYPE_3__*) ;int (* suspend ) (TYPE_3__*) ;} ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
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
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (struct usba_ep*) ;
 scalar_t__ VAR_28 ;
 int FUNC_5 (struct usba_udc*) ;
 int FUNC_6 (struct usba_udc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct usba_udc*) ;
 int FUNC_10 (struct usba_udc*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct usba_udc*,int) ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct usba_udc*,struct usba_ep*) ;
 int FUNC_17 (struct usba_udc*,struct usba_ep*) ;
 int VAR_29 ;
 int FUNC_18 (struct usba_udc*,struct usba_ep*) ;
 int FUNC_19 (struct usba_ep*,int ) ;
 int FUNC_20 (struct usba_ep*,int ,int) ;
 int FUNC_21 (struct usba_udc*,int) ;
 int FUNC_22 (struct usba_udc*) ;
 int FUNC_23 (struct usba_udc*,int) ;
 int FUNC_24 (struct usba_udc*,int ) ;
 int FUNC_25 (struct usba_udc*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_26(int VAR_30, void *VAR_31)
{
 struct usba_udc *VAR_32 = VAR_31;
 u32 VAR_33, VAR_34;
 u32 VAR_35;
 u32 VAR_36;

 FUNC_7(&VAR_32->lock);

 VAR_34 = FUNC_22(VAR_32);
 VAR_33 = FUNC_24(VAR_32, VAR_11) & (VAR_34 | VAR_20);
 FUNC_0(VAR_4, "irq, status=%#08x\n", VAR_33);

 if (VAR_33 & VAR_14) {
  FUNC_25(VAR_32, VAR_10, VAR_14|VAR_23);
  FUNC_23(VAR_32, VAR_23);
  FUNC_21(VAR_32, VAR_14);
  VAR_32->suspended = 1;
  FUNC_13(VAR_32, 0);
  VAR_32->bias_pulse_needed = 1;
  FUNC_10(VAR_32);
  FUNC_0(VAR_3, "Suspend detected\n");
  if (VAR_32->gadget.speed != VAR_26
    && VAR_32->driver && VAR_32->driver->suspend) {
   FUNC_8(&VAR_32->lock);
   VAR_32->driver->suspend(&VAR_32->gadget);
   FUNC_7(&VAR_32->lock);
  }
 }

 if (VAR_33 & VAR_23) {
  FUNC_9(VAR_32);
  FUNC_13(VAR_32, 1);
  FUNC_25(VAR_32, VAR_10, VAR_23);
  FUNC_0(VAR_3, "Wake Up CPU detected\n");
 }

 if (VAR_33 & VAR_16) {
  VAR_32->suspended = 0;
  FUNC_25(VAR_32, VAR_10, VAR_16);
  FUNC_21(VAR_32, VAR_23);
  FUNC_23(VAR_32, VAR_14);
  FUNC_5(VAR_32);
  FUNC_0(VAR_3, "Resume detected\n");
  if (VAR_32->gadget.speed != VAR_26
    && VAR_32->driver && VAR_32->driver->resume) {
   FUNC_8(&VAR_32->lock);
   VAR_32->driver->resume(&VAR_32->gadget);
   FUNC_7(&VAR_32->lock);
  }
 }

 VAR_35 = FUNC_2(VAR_5, VAR_33);
 if (VAR_35) {
  int VAR_37;

  FUNC_23(VAR_32, VAR_14);

  for (VAR_37 = 1; VAR_37 <= VAR_21; VAR_37++)
   if (VAR_35 & (1 << VAR_37))
    FUNC_17(VAR_32, &VAR_32->usba_ep[VAR_37]);
 }

 VAR_36 = FUNC_2(VAR_7, VAR_33);
 if (VAR_36) {
  int VAR_38;

  FUNC_23(VAR_32, VAR_14);

  for (VAR_38 = 0; VAR_38 < VAR_32->num_ep; VAR_38++)
   if (VAR_36 & (1 << VAR_38)) {
    if (FUNC_4(&VAR_32->usba_ep[VAR_38]))
     FUNC_16(VAR_32, &VAR_32->usba_ep[VAR_38]);
    else
     FUNC_18(VAR_32, &VAR_32->usba_ep[VAR_38]);
   }
 }

 if (VAR_33 & VAR_15) {
  struct usba_ep *VAR_39, *VAR_40;
  int VAR_41, VAR_42;

  FUNC_25(VAR_32, VAR_10,
   VAR_15|VAR_16
   |VAR_14|VAR_23);
  FUNC_5(VAR_32);
  FUNC_6(VAR_32);

  if (VAR_32->gadget.speed != VAR_26 && VAR_32->driver) {
   VAR_32->gadget.speed = VAR_26;
   FUNC_8(&VAR_32->lock);
   FUNC_14(&VAR_32->gadget, VAR_32->driver);
   FUNC_7(&VAR_32->lock);
  }

  if (VAR_33 & VAR_20)
   VAR_32->gadget.speed = VAR_25;
  else
   VAR_32->gadget.speed = VAR_24;
  FUNC_0(VAR_3, "%s bus reset detected\n",
      FUNC_15(VAR_32->gadget.speed));

  VAR_39 = &VAR_32->usba_ep[0];
  VAR_39->ep.desc = &VAR_29;
  VAR_39->state = VAR_27;
  FUNC_20(VAR_39, VAR_1,
    (FUNC_1(VAR_8, VAR_6)
    | FUNC_1(VAR_9, VAR_19)
    | FUNC_1(VAR_0, VAR_13)));
  FUNC_20(VAR_39, VAR_2,
    VAR_17 | VAR_22);


  VAR_32->suspended = 0;
  FUNC_21(VAR_32, VAR_23);

  FUNC_23(VAR_32, FUNC_1(VAR_7, 1) |
          VAR_14 | VAR_16);





  if (!(FUNC_19(VAR_39, VAR_1) & VAR_18))
   FUNC_3(&VAR_32->pdev->dev,
    "ODD: EP0 configuration is invalid!\n");


  VAR_42 = VAR_28 ? VAR_32->num_ep : VAR_32->configured_ep;
  for (VAR_41 = 1; VAR_41 < VAR_42; VAR_41++) {
   VAR_40 = &VAR_32->usba_ep[VAR_41];
   FUNC_20(VAR_40, VAR_1, VAR_40->ept_cfg);
   if (!(FUNC_19(VAR_40, VAR_1) & VAR_18))
    FUNC_3(&VAR_32->pdev->dev,
     "ODD: EP%d configuration is invalid!\n", VAR_41);
  }
 }

 FUNC_8(&VAR_32->lock);

 return VAR_12;
}
