
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct media_request {scalar_t__ state; int lock; int poll_wait; } ;
struct file {struct media_request* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct poll_table_struct*) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_4,
       struct poll_table_struct *VAR_5)
{
 struct media_request *VAR_6 = VAR_4->private_data;
 unsigned long VAR_7;
 __poll_t VAR_8 = 0;

 if (!(FUNC_0(VAR_5) & VAR_1))
  return 0;

 FUNC_1(VAR_4, &VAR_6->poll_wait, VAR_5);
 FUNC_2(&VAR_6->lock, VAR_7);
 if (VAR_6->state == VAR_2) {
  VAR_8 = VAR_1;
  goto unlock;
 }
 if (VAR_6->state != VAR_3) {
  VAR_8 = VAR_0;
  goto unlock;
 }

unlock:
 FUNC_3(&VAR_6->lock, VAR_7);
 return VAR_8;
}
