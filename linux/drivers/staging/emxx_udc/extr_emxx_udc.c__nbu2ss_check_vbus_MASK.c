
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nbu2ss_udc {int vbus_active; scalar_t__ devstate; scalar_t__ linux_suspended; int dev; int lock; int gadget; TYPE_1__* driver; scalar_t__ usb_suspended; } ;
struct TYPE_2__ {int (* disconnect ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nbu2ss_udc*) ;
 int FUNC_1 (struct nbu2ss_udc*) ;
 int FUNC_2 (struct nbu2ss_udc*) ;
 int FUNC_3 (struct nbu2ss_udc*,int) ;
 int FUNC_4 (struct nbu2ss_udc*) ;
 int FUNC_5 (struct nbu2ss_udc*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_12(struct nbu2ss_udc *VAR_4)
{
 int VAR_5;
 u32 VAR_6;


 FUNC_8(VAR_2);


 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6 == 0) {
  VAR_4->linux_suspended = 0;

  FUNC_5(VAR_4);
  FUNC_6(VAR_4->dev, " ----- VBUS OFF\n");

  if (VAR_4->vbus_active == 1) {

   VAR_4->vbus_active = 0;
   if (VAR_4->usb_suspended) {
    VAR_4->usb_suspended = 0;

   }
   VAR_4->devstate = VAR_0;

   FUNC_4(VAR_4);
   if (VAR_4->driver) {
    FUNC_10(&VAR_4->lock);
    VAR_4->driver->disconnect(&VAR_4->gadget);
    FUNC_9(&VAR_4->lock);
   }

   FUNC_0(VAR_4);
  }
 } else {
  FUNC_8(5);
  VAR_6 = FUNC_7(VAR_3);
  if (VAR_6 == 0)
   return;

  FUNC_6(VAR_4->dev, " ----- VBUS ON\n");

  if (VAR_4->linux_suspended)
   return;

  if (VAR_4->vbus_active == 0) {

   VAR_4->vbus_active = 1;
   VAR_4->devstate = VAR_1;

   VAR_5 = FUNC_2(VAR_4);
   if (VAR_5 < 0) {
    FUNC_0(VAR_4);
    VAR_4->vbus_active = 0;
    return;
   }

   FUNC_3(VAR_4, 1);





  } else {
   if (VAR_4->devstate == VAR_1)
    FUNC_3(VAR_4, 1);
  }
 }
}
