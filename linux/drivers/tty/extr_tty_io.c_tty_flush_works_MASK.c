
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* link; int hangup_work; int SAK_work; } ;
struct TYPE_2__ {int hangup_work; int SAK_work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 FUNC_0(&VAR_0->SAK_work);
 FUNC_0(&VAR_0->hangup_work);
 if (VAR_0->link) {
  FUNC_0(&VAR_0->link->SAK_work);
  FUNC_0(&VAR_0->link->hangup_work);
 }
}
