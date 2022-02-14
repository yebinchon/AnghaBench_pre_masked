
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct doorbell_queue* private_data; } ;
struct doorbell_queue {scalar_t__ head; scalar_t__ tail; int lock; int wait; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 struct doorbell_queue *VAR_4 = VAR_2->private_data;
 unsigned long VAR_5;
 __poll_t VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);

 FUNC_0(VAR_2, &VAR_4->wait, VAR_3);
 VAR_6 = (VAR_4->head == VAR_4->tail) ? 0 : (VAR_0 | VAR_1);

 FUNC_2(&VAR_4->lock, VAR_5);

 return VAR_6;
}
