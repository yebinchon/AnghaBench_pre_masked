
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_host {int irq_block; int irq_busy; int irq_data; int mutex; int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct bcm2835_host*) ;
 int FUNC_1 (struct bcm2835_host*) ;
 int FUNC_2 (struct bcm2835_host*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct bcm2835_host *VAR_3 = VAR_2;
 unsigned long VAR_4;
 bool VAR_5, VAR_6, VAR_7;

 FUNC_5(&VAR_3->lock, VAR_4);

 VAR_5 = VAR_3->irq_block;
 VAR_6 = VAR_3->irq_busy;
 VAR_7 = VAR_3->irq_data;
 VAR_3->irq_block = 0;
 VAR_3->irq_busy = 0;
 VAR_3->irq_data = 0;

 FUNC_6(&VAR_3->lock, VAR_4);

 FUNC_3(&VAR_3->mutex);

 if (VAR_5)
  FUNC_0(VAR_3);
 if (VAR_6)
  FUNC_1(VAR_3);
 if (VAR_7)
  FUNC_2(VAR_3);

 FUNC_4(&VAR_3->mutex);

 return VAR_0;
}
