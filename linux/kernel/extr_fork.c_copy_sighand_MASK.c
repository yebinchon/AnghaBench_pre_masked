
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int sighand; } ;
struct sighand_struct {int action; int count; } ;
struct TYPE_4__ {TYPE_1__* sighand; } ;
struct TYPE_3__ {int siglock; int action; int count; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct sighand_struct* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,struct sighand_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_5, struct task_struct *VAR_6)
{
 struct sighand_struct *VAR_7;

 if (VAR_5 & VAR_0) {
  FUNC_3(&VAR_3->sighand->count);
  return 0;
 }
 VAR_7 = FUNC_0(VAR_4, VAR_2);
 FUNC_2(VAR_6->sighand, VAR_7);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(&VAR_7->count, 1);
 FUNC_5(&VAR_3->sighand->siglock);
 FUNC_1(VAR_7->action, VAR_3->sighand->action, sizeof(VAR_7->action));
 FUNC_6(&VAR_3->sighand->siglock);
 return 0;
}
