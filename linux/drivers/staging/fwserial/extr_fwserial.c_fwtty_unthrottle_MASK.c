
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct fwtty_port* driver_data; } ;
struct TYPE_2__ {int unthrottle; } ;
struct fwtty_port {int lock; int mctrl; TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fwtty_port*) ;
 int FUNC_2 (struct fwtty_port*,char*,int) ;
 int FUNC_3 (struct fwtty_port*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_2)
{
 struct fwtty_port *VAR_3 = VAR_2->driver_data;

 FUNC_2(VAR_3, "CRTSCTS: %d\n", FUNC_0(VAR_2) != 0);

 FUNC_3(VAR_3, VAR_3->stats.unthrottle);

 FUNC_4(&VAR_3->lock);
 VAR_3->mctrl &= ~VAR_0;
 if (FUNC_0(VAR_2))
  VAR_3->mctrl |= VAR_1;
 FUNC_1(VAR_3);
 FUNC_5(&VAR_3->lock);
}
