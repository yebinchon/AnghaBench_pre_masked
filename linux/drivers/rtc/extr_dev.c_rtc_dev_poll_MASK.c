
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {unsigned long irq_data; int irq_queue; } ;
struct file {struct rtc_device* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_2, poll_table *VAR_3)
{
 struct rtc_device *VAR_4 = VAR_2->private_data;
 unsigned long VAR_5;

 FUNC_0(VAR_2, &VAR_4->irq_queue, VAR_3);

 VAR_5 = VAR_4->irq_data;

 return (VAR_5 != 0) ? (VAR_0 | VAR_1) : 0;
}
