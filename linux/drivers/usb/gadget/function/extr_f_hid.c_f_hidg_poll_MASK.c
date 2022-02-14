
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct f_hidg* private_data; } ;
struct f_hidg {int write_queue; int read_queue; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_6, poll_table *VAR_7)
{
 struct f_hidg *VAR_8 = VAR_6->private_data;
 __poll_t VAR_9 = 0;

 FUNC_0(VAR_6, &VAR_8->read_queue, VAR_7);
 FUNC_0(VAR_6, &VAR_8->write_queue, VAR_7);

 if (VAR_5)
  VAR_9 |= VAR_1 | VAR_3;

 if (VAR_4)
  VAR_9 |= VAR_0 | VAR_2;

 return VAR_9;
}
