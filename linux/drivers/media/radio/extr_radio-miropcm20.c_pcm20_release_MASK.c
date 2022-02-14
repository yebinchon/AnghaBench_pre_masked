
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm20 {int * kthread; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 struct pcm20* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0)
{
 struct pcm20 *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_2(VAR_0) && !FUNC_0(VAR_1->kthread)) {
  FUNC_1(VAR_1->kthread);
  VAR_1->kthread = ((void*)0);
 }
 return FUNC_3(VAR_0);
}
