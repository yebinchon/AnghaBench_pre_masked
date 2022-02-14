
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_dev {int read_list; int wait; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;

__poll_t FUNC_2(struct file *VAR_2, struct vhost_dev *VAR_3,
       poll_table *VAR_4)
{
 __poll_t VAR_5 = 0;

 FUNC_1(VAR_2, &VAR_3->wait, VAR_4);

 if (!FUNC_0(&VAR_3->read_list))
  VAR_5 |= VAR_0 | VAR_1;

 return VAR_5;
}
