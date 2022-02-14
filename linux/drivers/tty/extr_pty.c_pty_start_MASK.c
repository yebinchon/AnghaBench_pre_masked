
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* link; int ctrl_lock; int ctrl_status; } ;
struct TYPE_2__ {int read_wait; scalar_t__ packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->link && VAR_3->link->packet) {
  FUNC_0(&VAR_3->ctrl_lock, VAR_4);
  VAR_3->ctrl_status &= ~VAR_2;
  VAR_3->ctrl_status |= VAR_1;
  FUNC_1(&VAR_3->ctrl_lock, VAR_4);
  FUNC_2(&VAR_3->link->read_wait, VAR_0);
 }
}
