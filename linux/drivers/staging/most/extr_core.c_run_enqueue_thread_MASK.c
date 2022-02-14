
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct most_channel {struct task_struct* hdm_enqueue_task; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_0 ;
 struct task_struct* FUNC_2 (int ,struct most_channel*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct most_channel *VAR_1, int VAR_2)
{
 struct task_struct *VAR_3 =
  FUNC_2(VAR_0, VAR_1, "hdm_fifo_%d",
       VAR_2);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_1->hdm_enqueue_task = VAR_3;
 return 0;
}
