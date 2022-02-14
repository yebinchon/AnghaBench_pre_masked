
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int speed; } ;
struct cdns3_device {TYPE_2__ gadget; int lock; TYPE_3__* gadget_driver; TYPE_1__* regs; } ;
struct TYPE_9__ {int (* resume ) (TYPE_2__*) ;int (* suspend ) (TYPE_2__*) ;} ;
struct TYPE_7__ {int drbl; } ;


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
 int VAR_14 ;
 int FUNC_0 (struct cdns3_device*) ;
 int FUNC_1 (struct cdns3_device*) ;
 int FUNC_2 (struct cdns3_device*) ;
 int FUNC_3 (struct cdns3_device*) ;
 int FUNC_4 (struct cdns3_device*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct cdns3_device*,int) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_13(struct cdns3_device *VAR_15,
           u32 VAR_16)
{
 int VAR_17 = 0;

 FUNC_10(VAR_15, VAR_16);
 if (VAR_16 & VAR_4) {





  if (FUNC_5(&VAR_15->regs->drbl))
   FUNC_0(VAR_15);
 }


 if (VAR_16 & (VAR_0 | VAR_1)) {
  VAR_17 = FUNC_3(VAR_15);
  VAR_15->gadget.speed = VAR_17;
  FUNC_11(&VAR_15->gadget, VAR_14);
  FUNC_2(VAR_15);
 }


 if (VAR_16 & (VAR_2 | VAR_3)) {
  FUNC_1(VAR_15);
  VAR_15->gadget.speed = VAR_12;
  FUNC_11(&VAR_15->gadget, VAR_13);
  FUNC_4(VAR_15);
 }

 if (VAR_16 & (VAR_5 | VAR_8)) {
  if (VAR_15->gadget_driver &&
      VAR_15->gadget_driver->suspend) {
   FUNC_7(&VAR_15->lock);
   VAR_15->gadget_driver->suspend(&VAR_15->gadget);
   FUNC_6(&VAR_15->lock);
  }
 }

 if (VAR_16 & (VAR_6 | VAR_9)) {
  if (VAR_15->gadget_driver &&
      VAR_15->gadget_driver->resume) {
   FUNC_7(&VAR_15->lock);
   VAR_15->gadget_driver->resume(&VAR_15->gadget);
   FUNC_6(&VAR_15->lock);
  }
 }


 if (VAR_16 & (VAR_11 | VAR_10 | VAR_7)) {
  if (VAR_15->gadget_driver) {
   FUNC_7(&VAR_15->lock);
   FUNC_12(&VAR_15->gadget,
          VAR_15->gadget_driver);
   FUNC_6(&VAR_15->lock);


   VAR_17 = FUNC_3(VAR_15);
   VAR_15->gadget.speed = VAR_17;
   FUNC_4(VAR_15);
   FUNC_2(VAR_15);
  }
 }
}
