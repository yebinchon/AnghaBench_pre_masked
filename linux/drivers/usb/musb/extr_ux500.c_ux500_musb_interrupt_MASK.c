
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int lock; void* int_rx; void* int_tx; scalar_t__ int_usb; int mregs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct musb*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 irqreturn_t VAR_7 = VAR_0;
 struct musb *VAR_8 = VAR_5;

 FUNC_3(&VAR_8->lock, VAR_6);

 VAR_8->int_usb = FUNC_1(VAR_8->mregs, VAR_3);
 VAR_8->int_tx = FUNC_2(VAR_8->mregs, VAR_2);
 VAR_8->int_rx = FUNC_2(VAR_8->mregs, VAR_1);

 if (VAR_8->int_usb || VAR_8->int_tx || VAR_8->int_rx)
  VAR_7 = FUNC_0(VAR_8);

 FUNC_4(&VAR_8->lock, VAR_6);

 return VAR_7;
}
