
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct bio {struct task_struct* bi_private; } ;


 int FUNC_0 (struct task_struct*,int *) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct task_struct *VAR_1 = VAR_0->bi_private;

 FUNC_0(VAR_0->bi_private, ((void*)0));
 FUNC_1(VAR_1);
}
