
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct linux_binprm {int dummy; } ;
typedef int pid_t ;
struct TYPE_5__ {int parent; int pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct linux_binprm*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct linux_binprm*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,struct linux_binprm*) ;

__attribute__((used)) static int FUNC_9(struct linux_binprm *VAR_2)
{
 pid_t VAR_3, VAR_4;
 int VAR_5;


 VAR_3 = VAR_1->pid;
 FUNC_3();
 VAR_4 = FUNC_7(VAR_1, FUNC_6(VAR_1->parent));
 FUNC_4();

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5 >= 0) {
  FUNC_0(VAR_2);
  FUNC_8(VAR_1, VAR_3, VAR_2);
  FUNC_2(VAR_0, VAR_4);
  FUNC_1(VAR_1);
 }

 return VAR_5;
}
