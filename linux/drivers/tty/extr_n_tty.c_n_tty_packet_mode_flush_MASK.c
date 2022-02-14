
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* link; int ctrl_lock; int ctrl_status; } ;
struct TYPE_2__ {int read_wait; scalar_t__ packet; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->link->packet) {
  FUNC_0(&VAR_1->ctrl_lock, VAR_2);
  VAR_1->ctrl_status |= VAR_0;
  FUNC_1(&VAR_1->ctrl_lock, VAR_2);
  FUNC_2(&VAR_1->link->read_wait);
 }
}
