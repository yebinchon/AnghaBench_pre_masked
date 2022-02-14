
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct kfifo {int dummy; } ;
struct anybuss_host {int dummy; } ;
struct ab_task {int result; int (* task_fn ) (struct anybuss_host*,struct ab_task*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kfifo*,struct anybuss_host*) ;
 int FUNC_1 (struct kfifo*,struct ab_task**,int) ;
 int FUNC_2 (struct anybuss_host*,struct ab_task*) ;

__attribute__((used)) static void FUNC_3(struct anybuss_host *VAR_1, struct kfifo *VAR_2)
{
 struct ab_task *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3));
 if (!VAR_4)
  return;
 VAR_3->result = VAR_3->task_fn(VAR_1, VAR_3);
 if (VAR_3->result != -VAR_0)
  FUNC_0(VAR_2, VAR_1);
}
