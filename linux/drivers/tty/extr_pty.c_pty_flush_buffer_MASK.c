
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int ctrl_lock; int read_wait; int ctrl_status; scalar_t__ packet; struct tty_struct* link; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1)
{
 struct tty_struct *VAR_2 = VAR_1->link;

 if (!VAR_2)
  return;

 FUNC_2(VAR_2, ((void*)0));
 if (VAR_2->packet) {
  FUNC_0(&VAR_1->ctrl_lock);
  VAR_1->ctrl_status |= VAR_0;
  FUNC_3(&VAR_2->read_wait);
  FUNC_1(&VAR_1->ctrl_lock);
 }
}
