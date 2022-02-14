
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {scalar_t__ speed; } ;
struct net2272 {int dev; TYPE_2__ gadget; TYPE_3__* driver; int lock; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_10__ {int (* resume ) (TYPE_2__*) ;int (* suspend ) (TYPE_2__*) ;int (* disconnect ) (TYPE_2__*) ;TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_12 ;
 int FUNC_1 (struct net2272*) ;
 int FUNC_2 (struct net2272*,int ) ;
 int FUNC_3 (struct net2272*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net2272*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_11(struct net2272 *VAR_13, u8 VAR_14)
{
 u8 VAR_15, VAR_16;


 VAR_15 = (1 << VAR_10) | (1 << VAR_3);
 VAR_16 = (1 << VAR_8) | (1 << VAR_7);

 if (VAR_14 & VAR_15) {
  bool VAR_17 = 0;
  bool VAR_18 = 0;





  FUNC_3(VAR_13, VAR_1, VAR_15);
  if (VAR_13->gadget.speed != VAR_9) {
   if ((VAR_14 & (1 << VAR_10)) &&
     (FUNC_2(VAR_13, VAR_6) &
      (1 << VAR_11)) == 0) {
    VAR_18 = 1;
    FUNC_0(VAR_13->dev, "disconnect %s\n",
     VAR_13->driver->driver.name);
   } else if ((VAR_14 & (1 << VAR_3)) &&
     (FUNC_2(VAR_13, VAR_6) & VAR_16)
      == 0) {
    VAR_17 = 1;
    FUNC_0(VAR_13->dev, "reset %s\n",
     VAR_13->driver->driver.name);
   }

   if (VAR_18 || VAR_17) {
    FUNC_6(VAR_13, VAR_13->driver);
    FUNC_1(VAR_13);
    FUNC_5(&VAR_13->lock);
    if (VAR_17)
     FUNC_10
      (&VAR_13->gadget, VAR_13->driver);
    else
     (VAR_13->driver->disconnect)
      (&VAR_13->gadget);
    FUNC_4(&VAR_13->lock);
    return;
   }
  }
  VAR_14 &= ~VAR_15;

  if (!VAR_14)
   return;
 }

 VAR_15 = (1 << VAR_4);
 if (VAR_14 & VAR_15) {
  FUNC_3(VAR_13, VAR_1, VAR_15);
  if (VAR_14 & (1 << VAR_5)) {
   if (VAR_13->driver->suspend)
    VAR_13->driver->suspend(&VAR_13->gadget);
   if (!VAR_12) {
    VAR_14 &= ~(1 << VAR_5);
    FUNC_0(VAR_13->dev, "Suspend disabled, ignoring\n");
   }
  } else {
   if (VAR_13->driver->resume)
    VAR_13->driver->resume(&VAR_13->gadget);
  }
  VAR_14 &= ~VAR_15;
 }


 if (VAR_14)
  FUNC_3(VAR_13, VAR_1, VAR_14);


 VAR_14 &= ~((1 << VAR_0)
   | (1 << VAR_5)
   | (1 << VAR_2));
 if (!VAR_14)
  return;
 else
  FUNC_0(VAR_13->dev, "unhandled irqstat1 %02x\n", VAR_14);
}
