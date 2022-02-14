
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ speed; } ;
struct s3c2410_udc {int lock; TYPE_5__* ep; void* ep0state; TYPE_3__ gadget; TYPE_2__* driver; scalar_t__ address; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int maxpacket; } ;
struct TYPE_9__ {TYPE_1__ ep; } ;
struct TYPE_7__ {int (* suspend ) (TYPE_3__*) ;int (* resume ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct s3c2410_udc*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_21, void *VAR_22)
{
 struct s3c2410_udc *VAR_23 = VAR_22;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 u32 VAR_29, VAR_30;
 unsigned long VAR_31;

 FUNC_3(&VAR_23->lock, VAR_31);


 if (!VAR_23->driver) {

  FUNC_8(FUNC_7(VAR_17),
    VAR_17);
  FUNC_8(FUNC_7(VAR_6),
    VAR_6);
 }


 VAR_29 = FUNC_7(VAR_8);


 VAR_24 = FUNC_7(VAR_17);
 VAR_25 = FUNC_7(VAR_6);
 VAR_26 = FUNC_7(VAR_13);

 FUNC_9(VAR_20, VAR_7, VAR_8);
 VAR_27 = FUNC_7(VAR_10);

 FUNC_0(VAR_0, "usbs=%02x, usbds=%02x, pwr=%02x ep0csr=%02x\n",
  VAR_24, VAR_25, VAR_26, VAR_27);
 if (VAR_24 & VAR_14) {




  FUNC_0(VAR_0, "USB reset csr %x pwr %x\n",
   VAR_27, VAR_26);

  VAR_23->gadget.speed = VAR_19;
  FUNC_8(0x00, VAR_8);
  FUNC_8((VAR_23->ep[0].ep.maxpacket & 0x7ff) >> 3,
    VAR_11);
  VAR_23->address = 0;

  VAR_23->ep0state = VAR_2;
  VAR_23->gadget.speed = VAR_18;


  FUNC_8(VAR_14,
    VAR_17);

  FUNC_8(VAR_29, VAR_8);
  FUNC_4(&VAR_23->lock, VAR_31);
  return VAR_3;
 }


 if (VAR_24 & VAR_15) {
  FUNC_0(VAR_0, "USB resume\n");


  FUNC_8(VAR_15,
    VAR_17);

  if (VAR_23->gadget.speed != VAR_19
    && VAR_23->driver
    && VAR_23->driver->resume)
   VAR_23->driver->resume(&VAR_23->gadget);
 }


 if (VAR_24 & VAR_16) {
  FUNC_0(VAR_0, "USB suspend\n");


  FUNC_8(VAR_16,
    VAR_17);

  if (VAR_23->gadget.speed != VAR_19
    && VAR_23->driver
    && VAR_23->driver->suspend)
   VAR_23->driver->suspend(&VAR_23->gadget);

  VAR_23->ep0state = VAR_2;
 }






 if (VAR_25 & VAR_9) {
  FUNC_0(VAR_1, "USB ep0 irq\n");

  FUNC_8(VAR_9, VAR_6);
  FUNC_2(VAR_23);
 }


 for (VAR_28 = 1; VAR_28 < VAR_5; VAR_28++) {
  u32 VAR_32 = 1 << VAR_28;
  if (VAR_25 & VAR_32) {
   FUNC_0(VAR_1, "USB ep%d irq\n", VAR_28);


   FUNC_8(VAR_32, VAR_6);
   FUNC_1(&VAR_23->ep[VAR_28]);
  }
 }


 if (!VAR_24 && !VAR_25 && !VAR_26 && !VAR_27) {
  for (VAR_28 = 1; VAR_28 < VAR_5; VAR_28++) {
   VAR_30 = FUNC_7(VAR_8);
   FUNC_8(VAR_28, VAR_8);

   if (FUNC_7(VAR_12) & 0x1)
    FUNC_1(&VAR_23->ep[VAR_28]);


   FUNC_8(VAR_30, VAR_8);
  }
 }

 FUNC_0(VAR_1, "irq: %d s3c2410_udc_done.\n", VAR_4);


 FUNC_8(VAR_29, VAR_8);

 FUNC_4(&VAR_23->lock, VAR_31);

 return VAR_3;
}
