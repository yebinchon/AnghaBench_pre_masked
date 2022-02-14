
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_host {int irq_block; int irq_busy; int hcfg; int irq_data; int lock; scalar_t__ ioaddr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bcm2835_host*,int) ;
 int FUNC_1 (struct bcm2835_host*,int) ;
 int FUNC_2 (struct bcm2835_host*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 irqreturn_t VAR_11 = VAR_1;
 struct bcm2835_host *VAR_12 = VAR_10;
 u32 VAR_13;

 FUNC_4(&VAR_12->lock);

 VAR_13 = FUNC_3(VAR_12->ioaddr + VAR_4);

 FUNC_6(VAR_6 |
        VAR_5 |
        VAR_8 |
        VAR_7,
        VAR_12->ioaddr + VAR_4);

 if (VAR_13 & VAR_5) {
  FUNC_1(VAR_12, VAR_13);
  VAR_12->irq_block = 1;
  VAR_11 = VAR_2;
 }

 if (VAR_13 & VAR_6) {
  if (!FUNC_0(VAR_12, VAR_13)) {
   VAR_12->irq_busy = 1;
   VAR_11 = VAR_2;
  } else {
   VAR_11 = VAR_0;
  }
 }





 if ((VAR_13 & VAR_7) &&
     (VAR_12->hcfg & VAR_3)) {
  FUNC_2(VAR_12, VAR_13);
  VAR_12->irq_data = 1;
  VAR_11 = VAR_2;
 }

 FUNC_5(&VAR_12->lock);

 return VAR_11;
}
