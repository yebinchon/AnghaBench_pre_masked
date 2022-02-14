
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct eventpoll* private_data; } ;
struct eventpoll {int poll_wait; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int FUNC_0 (struct eventpoll*,int ,int*,int,int) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_1, poll_table *VAR_2)
{
 struct eventpoll *VAR_3 = VAR_1->private_data;
 int VAR_4 = 0;


 FUNC_1(VAR_1, &VAR_3->poll_wait, VAR_2);





 return FUNC_0(VAR_3, VAR_0,
      &VAR_4, VAR_4, 0);
}
