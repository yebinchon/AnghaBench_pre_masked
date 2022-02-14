
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dev_data* private_data; } ;
struct dev_data {scalar_t__ state; scalar_t__ ev_next; int lock; scalar_t__ setup_can_stall; scalar_t__ setup_in; scalar_t__ setup_abort; int wait; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t
FUNC_3 (struct file *VAR_6, poll_table *VAR_7)
{
       struct dev_data *VAR_8 = VAR_6->private_data;
       __poll_t VAR_9 = 0;

 if (VAR_8->state <= VAR_4)
  return VAR_0;

 FUNC_0(VAR_6, &VAR_8->wait, VAR_7);

 FUNC_1(&VAR_8->lock);


 if (VAR_8->setup_abort) {
  VAR_8->setup_abort = 0;
  VAR_9 = VAR_1;
  goto out;
 }

 if (VAR_8->state == VAR_5) {
  if (VAR_8->setup_in || VAR_8->setup_can_stall)
   VAR_9 = VAR_3;
 } else {
  if (VAR_8->ev_next != 0)
   VAR_9 = VAR_2;
 }
out:
 FUNC_2(&VAR_8->lock);
 return VAR_9;
}
