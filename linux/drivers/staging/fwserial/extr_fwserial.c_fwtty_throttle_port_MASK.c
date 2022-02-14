
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct fwtty_port {unsigned int mctrl; int lock; int port; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct fwtty_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*) ;
 struct tty_struct* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fwtty_port *VAR_2)
{
 struct tty_struct *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_5(&VAR_2->port);
 if (!VAR_3)
  return;

 FUNC_2(&VAR_2->lock);

 VAR_4 = VAR_2->mctrl;
 VAR_2->mctrl |= VAR_0;
 if (FUNC_0(VAR_3))
  VAR_2->mctrl &= ~VAR_1;
 if (~VAR_4 & VAR_0)
  FUNC_1(VAR_2);

 FUNC_3(&VAR_2->lock);

 FUNC_4(VAR_3);
}
