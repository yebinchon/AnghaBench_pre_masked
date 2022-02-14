
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_poll {int wait; int table; scalar_t__ wqh; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct file*,int *) ;
 int FUNC_2 (struct vhost_poll*) ;
 int FUNC_3 (int *,int ,int ,int ) ;

int FUNC_4(struct vhost_poll *VAR_2, struct file *VAR_3)
{
 __poll_t VAR_4;

 if (VAR_2->wqh)
  return 0;

 VAR_4 = FUNC_1(VAR_3, &VAR_2->table);
 if (VAR_4)
  FUNC_3(&VAR_2->wait, 0, 0, FUNC_0(VAR_4));
 if (VAR_4 & VAR_1) {
  FUNC_2(VAR_2);
  return -VAR_0;
 }

 return 0;
}
