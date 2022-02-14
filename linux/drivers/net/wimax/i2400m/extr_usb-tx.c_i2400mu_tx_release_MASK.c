
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct i2400m {int tx_lock; } ;
struct i2400mu {struct task_struct* tx_kthread; struct i2400m i2400m; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,struct device*,char*) ;
 struct device* FUNC_1 (struct i2400m*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct i2400mu *VAR_0)
{
 unsigned long VAR_1;
 struct i2400m *VAR_2 = &VAR_0->i2400m;
 struct device *VAR_3 = FUNC_1(VAR_2);
 struct task_struct *VAR_4;

 FUNC_3(&VAR_2->tx_lock, VAR_1);
 VAR_4 = VAR_0->tx_kthread;
 VAR_0->tx_kthread = ((void*)0);
 FUNC_4(&VAR_2->tx_lock, VAR_1);
 if (VAR_4)
  FUNC_2(VAR_4);
 else
  FUNC_0(1, VAR_3, "TX: kthread had already exited\n");
}
