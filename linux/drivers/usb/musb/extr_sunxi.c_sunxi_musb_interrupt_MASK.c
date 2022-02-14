
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int int_usb; int lock; scalar_t__ mregs; void* int_rx; void* int_tx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct musb*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (void*,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_6, void *VAR_7)
{
 struct musb *VAR_8 = VAR_7;
 unsigned long VAR_9;

 FUNC_6(&VAR_8->lock, VAR_9);

 VAR_8->int_usb = FUNC_4(VAR_8->mregs + VAR_5);
 if (VAR_8->int_usb)
  FUNC_8(VAR_8->int_usb, VAR_8->mregs + VAR_5);

 if ((VAR_8->int_usb & VAR_2) && !FUNC_0(VAR_8)) {

  FUNC_1(VAR_8->mregs, 0);
  FUNC_3(VAR_8->mregs, VAR_1, 0);
 }

 VAR_8->int_tx = FUNC_5(VAR_8->mregs + VAR_4);
 if (VAR_8->int_tx)
  FUNC_9(VAR_8->int_tx, VAR_8->mregs + VAR_4);

 VAR_8->int_rx = FUNC_5(VAR_8->mregs + VAR_3);
 if (VAR_8->int_rx)
  FUNC_9(VAR_8->int_rx, VAR_8->mregs + VAR_3);

 FUNC_2(VAR_8);

 FUNC_7(&VAR_8->lock, VAR_9);

 return VAR_0;
}
