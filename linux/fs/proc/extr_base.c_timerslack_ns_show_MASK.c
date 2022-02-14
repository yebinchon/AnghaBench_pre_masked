
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int timer_slack_ns; } ;
struct seq_file {struct inode* private; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_3 ;
 struct task_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct seq_file*,char*,int ) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_4, void *VAR_5)
{
 struct inode *VAR_6 = VAR_4->private;
 struct task_struct *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_1(VAR_6);
 if (!VAR_7)
  return -VAR_2;

 if (VAR_7 != VAR_3) {
  FUNC_4();
  if (!FUNC_2(FUNC_0(VAR_7)->user_ns, VAR_0)) {
   FUNC_5();
   VAR_8 = -VAR_1;
   goto out;
  }
  FUNC_5();

  VAR_8 = FUNC_6(VAR_7);
  if (VAR_8)
   goto out;
 }

 FUNC_8(VAR_7);
 FUNC_7(VAR_4, "%llu\n", VAR_7->timer_slack_ns);
 FUNC_9(VAR_7);

out:
 FUNC_3(VAR_7);

 return VAR_8;
}
