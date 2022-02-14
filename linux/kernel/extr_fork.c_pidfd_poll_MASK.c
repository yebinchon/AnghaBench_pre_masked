
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ exit_state; } ;
struct poll_table_struct {int dummy; } ;
struct pid {int wait_pidfd; } ;
struct file {struct pid* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct task_struct* FUNC_0 (struct pid*,int ) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_3, struct poll_table_struct *VAR_4)
{
 struct task_struct *VAR_5;
 struct pid *VAR_6 = VAR_3->private_data;
 int VAR_7 = 0;

 FUNC_1(VAR_3, &VAR_6->wait_pidfd, VAR_4);

 FUNC_2();
 VAR_5 = FUNC_0(VAR_6, VAR_0);





 if (!VAR_5 || (VAR_5->exit_state && FUNC_4(VAR_5)))
  VAR_7 = VAR_1 | VAR_2;
 FUNC_3();

 return VAR_7;
}
