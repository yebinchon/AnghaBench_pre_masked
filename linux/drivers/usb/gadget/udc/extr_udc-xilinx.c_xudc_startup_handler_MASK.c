
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int speed; } ;
struct xusb_udc {int (* read_fn ) (scalar_t__) ;scalar_t__ usb_state; int lock; TYPE_2__ gadget; TYPE_1__* driver; scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int) ;int dev; scalar_t__ remote_wkp; } ;
struct TYPE_5__ {int (* disconnect ) (TYPE_2__*) ;int (* resume ) (TYPE_2__*) ;int (* suspend ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,int) ;
 int FUNC_17 (struct xusb_udc*) ;
 int FUNC_18 (struct xusb_udc*) ;

__attribute__((used)) static void FUNC_19(struct xusb_udc *VAR_11, u32 VAR_12)
{
 u32 VAR_13;

 if (VAR_12 & VAR_7) {

  FUNC_1(VAR_11->dev, "Reset\n");

  if (VAR_12 & VAR_6)
   VAR_11->gadget.speed = VAR_1;
  else
   VAR_11->gadget.speed = VAR_0;

  FUNC_18(VAR_11);
  FUNC_17(VAR_11);
  VAR_11->write_fn(VAR_11->addr, VAR_10, 0);


  VAR_11->write_fn(VAR_11->addr, VAR_3, 0);
  VAR_11->remote_wkp = 0;


  VAR_13 = VAR_11->read_fn(VAR_11->addr + VAR_4);
  VAR_13 |= VAR_9 | VAR_8 |
      VAR_5;
  VAR_11->write_fn(VAR_11->addr, VAR_4, VAR_13);
 }
 if (VAR_12 & VAR_9) {

  FUNC_1(VAR_11->dev, "Suspend\n");


  VAR_13 = VAR_11->read_fn(VAR_11->addr + VAR_4);
  VAR_13 |= VAR_7 | VAR_8 |
      VAR_5;
  VAR_11->write_fn(VAR_11->addr, VAR_4, VAR_13);

  VAR_11->usb_state = VAR_2;

  if (VAR_11->driver->suspend) {
   FUNC_3(&VAR_11->lock);
   VAR_11->driver->suspend(&VAR_11->gadget);
   FUNC_2(&VAR_11->lock);
  }
 }
 if (VAR_12 & VAR_8) {
  bool VAR_14 = (VAR_11->usb_state != VAR_2);

  FUNC_0(VAR_11->dev, VAR_14,
    "Resume IRQ while not suspended\n");

  FUNC_1(VAR_11->dev, "Resume\n");


  VAR_13 = VAR_11->read_fn(VAR_11->addr + VAR_4);
  VAR_13 |= VAR_7 | VAR_9 |
      VAR_5;
  VAR_11->write_fn(VAR_11->addr, VAR_4, VAR_13);

  VAR_11->usb_state = 0;

  if (VAR_11->driver->resume) {
   FUNC_3(&VAR_11->lock);
   VAR_11->driver->resume(&VAR_11->gadget);
   FUNC_2(&VAR_11->lock);
  }
 }
 if (VAR_12 & VAR_5) {

  FUNC_1(VAR_11->dev, "Disconnect\n");


  VAR_13 = VAR_11->read_fn(VAR_11->addr + VAR_4);
  VAR_13 |= VAR_7 | VAR_8 |
      VAR_9;
  VAR_11->write_fn(VAR_11->addr, VAR_4, VAR_13);

  if (VAR_11->driver && VAR_11->driver->disconnect) {
   FUNC_3(&VAR_11->lock);
   VAR_11->driver->disconnect(&VAR_11->gadget);
   FUNC_2(&VAR_11->lock);
  }
 }
}
