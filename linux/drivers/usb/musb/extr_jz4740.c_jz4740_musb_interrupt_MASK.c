
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int int_usb; int lock; void* int_rx; void* int_tx; int mregs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct musb*) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 unsigned long VAR_10;
 irqreturn_t VAR_11 = VAR_0;
 struct musb *VAR_12 = VAR_9;

 FUNC_3(&VAR_12->lock, VAR_10);

 VAR_12->int_usb = FUNC_1(VAR_12->mregs, VAR_3);
 VAR_12->int_tx = FUNC_2(VAR_12->mregs, VAR_2);
 VAR_12->int_rx = FUNC_2(VAR_12->mregs, VAR_1);






 VAR_12->int_usb &= VAR_7 | VAR_5 |
     VAR_4 | VAR_6;

 if (VAR_12->int_usb || VAR_12->int_tx || VAR_12->int_rx)
  VAR_11 = FUNC_0(VAR_12);

 FUNC_4(&VAR_12->lock, VAR_10);

 return VAR_11;
}
