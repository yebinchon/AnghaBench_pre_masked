
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct TYPE_2__ {int console; } ;
struct fwtty_port {int mctrl; int lock; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fwtty_port*) ;
 int FUNC_1 (struct fwtty_port*,char*,int) ;
 struct fwtty_port* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fwtty_port* FUNC_4 (struct tty_port*,int ) ;

__attribute__((used)) static void FUNC_5(struct tty_port *VAR_3, int VAR_4)
{
 struct fwtty_port *VAR_5 = FUNC_4(VAR_3, VAR_5);

 FUNC_1(VAR_5, "on/off: %d\n", VAR_4);

 FUNC_2(&VAR_5->lock);

 if (!VAR_5->port.console) {
  if (VAR_4)
   VAR_5->mctrl |= VAR_0 | VAR_1;
  else
   VAR_5->mctrl &= ~(VAR_0 | VAR_1);
 }

 FUNC_0(VAR_5);
 FUNC_3(&VAR_5->lock);
}
