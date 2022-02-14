
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phantom_device {int status; int counter; int wait; } ;
struct file {struct phantom_device* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 struct phantom_device *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7 = 0;

 FUNC_2("phantom_poll: %d\n", FUNC_0(&VAR_6->counter));
 FUNC_1(VAR_4, &VAR_6->wait, VAR_5);

 if (!(VAR_6->status & VAR_3))
  VAR_7 = VAR_0;
 else if (FUNC_0(&VAR_6->counter))
  VAR_7 = VAR_1 | VAR_2;

 FUNC_2("phantom_poll end: %x/%d\n", VAR_7, FUNC_0(&VAR_6->counter));

 return VAR_7;
}
