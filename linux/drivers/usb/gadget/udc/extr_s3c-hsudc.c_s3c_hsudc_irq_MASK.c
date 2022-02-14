
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct s3c_hsudc_ep {int stopped; } ;
struct TYPE_7__ {scalar_t__ speed; } ;
struct s3c_hsudc {int lock; scalar_t__ regs; struct s3c_hsudc_ep* ep; int ep0state; TYPE_2__* pd; TYPE_3__ gadget; TYPE_1__* driver; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int epnum; } ;
struct TYPE_5__ {int (* resume ) (TYPE_3__*) ;int (* suspend ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct s3c_hsudc_ep*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct s3c_hsudc*,int) ;
 int FUNC_3 (struct s3c_hsudc*,int) ;
 int FUNC_4 (struct s3c_hsudc*) ;
 int FUNC_5 (struct s3c_hsudc_ep*,int ) ;
 int FUNC_6 (struct s3c_hsudc*) ;
 int FUNC_7 (struct s3c_hsudc*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_17, void *VAR_18)
{
 struct s3c_hsudc *VAR_19 = VAR_18;
 struct s3c_hsudc_ep *VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;

 FUNC_8(&VAR_19->lock);

 VAR_22 = FUNC_1(VAR_19->regs + VAR_4);
 VAR_21 = FUNC_1(VAR_19->regs + VAR_2) & 0x3FF;

 if (!VAR_21 && !(VAR_22 & VAR_5)) {
  FUNC_9(&VAR_19->lock);
  return VAR_1;
 }

 if (VAR_22) {
  if (VAR_22 & VAR_12)
   FUNC_12(VAR_12, VAR_19->regs + VAR_4);

  if (VAR_22 & VAR_6)
   FUNC_12(VAR_6, VAR_19->regs + VAR_4);

  if (VAR_22 & VAR_10) {
   FUNC_12(VAR_10, VAR_19->regs + VAR_4);
   VAR_19->gadget.speed = (VAR_22 & VAR_7) ?
    VAR_14 : VAR_13;
  }

  if (VAR_22 & VAR_11) {
   FUNC_12(VAR_11, VAR_19->regs + VAR_4);
   if (VAR_19->gadget.speed != VAR_15
    && VAR_19->driver && VAR_19->driver->suspend)
    VAR_19->driver->suspend(&VAR_19->gadget);
  }

  if (VAR_22 & VAR_9) {
   FUNC_12(VAR_9, VAR_19->regs + VAR_4);
   if (VAR_19->gadget.speed != VAR_15
    && VAR_19->driver && VAR_19->driver->resume)
    VAR_19->driver->resume(&VAR_19->gadget);
  }

  if (VAR_22 & VAR_8) {
   FUNC_12(VAR_8, VAR_19->regs + VAR_4);
   for (VAR_23 = 0; VAR_23 < VAR_19->pd->epnum; VAR_23++) {
    VAR_20 = &VAR_19->ep[VAR_23];
    VAR_20->stopped = 1;
    FUNC_5(VAR_20, -VAR_0);
   }
   FUNC_6(VAR_19);
   VAR_19->ep0state = VAR_16;
  }
 }

 if (VAR_21 & VAR_3) {
  FUNC_12(VAR_3, VAR_19->regs + VAR_2);
  FUNC_7(VAR_19, 0);
  FUNC_4(VAR_19);
 }

 VAR_21 >>= 1;
 VAR_23 = 1;
 while (VAR_21) {
  if (VAR_21 & 1) {
   VAR_20 = &VAR_19->ep[VAR_23];
   FUNC_7(VAR_19, VAR_23);
   FUNC_12(1 << VAR_23, VAR_19->regs + VAR_2);
   if (FUNC_0(VAR_20))
    FUNC_2(VAR_19, VAR_23);
   else
    FUNC_3(VAR_19, VAR_23);
  }
  VAR_21 >>= 1;
  VAR_23++;
 }

 FUNC_9(&VAR_19->lock);
 return VAR_1;
}
