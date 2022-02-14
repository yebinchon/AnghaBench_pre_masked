
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; } ;
struct syncppp {int tsk; int xmit_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct syncppp* FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct syncppp*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct tty_struct *VAR_2)
{
 struct syncppp *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_0, &VAR_2->flags);
 if (!VAR_3)
  return;
 FUNC_1(VAR_1, &VAR_3->xmit_flags);
 FUNC_4(&VAR_3->tsk);
 FUNC_3(VAR_3);
}
