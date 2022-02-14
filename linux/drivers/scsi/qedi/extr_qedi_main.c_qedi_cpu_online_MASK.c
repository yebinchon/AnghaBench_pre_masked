
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct qedi_percpu_s {struct task_struct* iothread; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct task_struct*,unsigned int) ;
 struct task_struct* FUNC_4 (int ,void*,int ,char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qedi_percpu_s* FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_2)
{
 struct qedi_percpu_s *VAR_3 = FUNC_5(&VAR_0);
 struct task_struct *VAR_4;

 VAR_4 = FUNC_4(VAR_1, (void *)VAR_3,
     FUNC_2(VAR_2),
     "qedi_thread/%d", VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_3(VAR_4, VAR_2);
 VAR_3->iothread = VAR_4;
 FUNC_6(VAR_4);
 return 0;
}
