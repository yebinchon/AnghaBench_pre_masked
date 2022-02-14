
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct bcm63xx_udc {int ep0_req_reset; int ep0_req_set_cfg; int ep0_req_set_iface; TYPE_2__* driver; TYPE_1__ gadget; int lock; int ep0_wq; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int (* disconnect ) (TYPE_1__*) ;} ;


 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct bcm63xx_udc*) ;
 int FUNC_2 (struct bcm63xx_udc*) ;
 int FUNC_3 (struct bcm63xx_udc*) ;
 int FUNC_4 (struct bcm63xx_udc*) ;
 scalar_t__ FUNC_5 (struct bcm63xx_udc*) ;
 int FUNC_6 (struct bcm63xx_udc*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (struct bcm63xx_udc*,int ) ;
 int FUNC_14 (struct bcm63xx_udc*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_11, void *VAR_12)
{
 struct bcm63xx_udc *VAR_13 = VAR_12;
 u32 VAR_14;
 bool VAR_15 = 0, VAR_16 = 0;

 VAR_14 = FUNC_13(VAR_13, VAR_7) &
        FUNC_13(VAR_13, VAR_3);

 FUNC_14(VAR_13, VAR_14, VAR_7);

 FUNC_9(&VAR_13->lock);
 if (VAR_14 & FUNC_0(VAR_8)) {


  if (!(FUNC_13(VAR_13, VAR_1) &
        VAR_2) &&
        VAR_13->gadget.speed != VAR_10)
   FUNC_7(VAR_13->dev, "link down\n");

  VAR_13->gadget.speed = VAR_10;
  VAR_15 = 1;
 }
 if (VAR_14 & FUNC_0(VAR_9)) {
  FUNC_3(VAR_13);
  FUNC_2(VAR_13);
  FUNC_1(VAR_13);

  FUNC_6(VAR_13, 0);

  VAR_13->ep0_req_reset = 1;
  FUNC_8(&VAR_13->ep0_wq);
  VAR_16 = 1;
 }
 if (VAR_14 & FUNC_0(VAR_6)) {
  if (FUNC_5(VAR_13)) {
   FUNC_3(VAR_13);
   FUNC_1(VAR_13);
  }
  FUNC_6(VAR_13, 1);
 }
 if (VAR_14 & FUNC_0(VAR_4)) {
  FUNC_4(VAR_13);
  VAR_13->ep0_req_set_cfg = 1;
  FUNC_8(&VAR_13->ep0_wq);
 }
 if (VAR_14 & FUNC_0(VAR_5)) {
  FUNC_4(VAR_13);
  VAR_13->ep0_req_set_iface = 1;
  FUNC_8(&VAR_13->ep0_wq);
 }
 FUNC_10(&VAR_13->lock);

 if (VAR_15 && VAR_13->driver)
  VAR_13->driver->disconnect(&VAR_13->gadget);
 else if (VAR_16 && VAR_13->driver)
  FUNC_12(&VAR_13->gadget, VAR_13->driver);

 return VAR_0;
}
