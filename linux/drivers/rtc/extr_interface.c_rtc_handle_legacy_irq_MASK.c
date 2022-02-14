
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int irq_data; int async_queue; int irq_queue; int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rtc_device *VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;


 FUNC_1(&VAR_3->irq_lock, VAR_6);
 VAR_3->irq_data = (VAR_3->irq_data + (VAR_4 << 8)) | (VAR_1 | VAR_5);
 FUNC_2(&VAR_3->irq_lock, VAR_6);

 FUNC_3(&VAR_3->irq_queue);
 FUNC_0(&VAR_3->async_queue, VAR_2, VAR_0);
}
