
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int hw_stopped; struct fwtty_port* driver_data; } ;
struct ktermios {int c_cflag; } ;
struct fwtty_port {int mctrl; int mstatus; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fwtty_port*) ;
 int FUNC_2 (struct fwtty_port*) ;
 unsigned int FUNC_3 (struct fwtty_port*,struct tty_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_5, struct ktermios *VAR_6)
{
 struct fwtty_port *VAR_7 = VAR_5->driver_data;
 unsigned int VAR_8;

 FUNC_4(&VAR_7->lock);
 VAR_8 = FUNC_3(VAR_7, VAR_5);

 if ((VAR_8 == 0) && (VAR_6->c_cflag & VAR_0)) {
  VAR_7->mctrl &= ~(VAR_3 | VAR_4);
 } else if ((VAR_8 != 0) && !(VAR_6->c_cflag & VAR_0)) {
  if (FUNC_0(VAR_5) || !FUNC_6(VAR_5))
   VAR_7->mctrl |= VAR_3 | VAR_4;
  else
   VAR_7->mctrl |= VAR_3;
 }
 FUNC_1(VAR_7);
 FUNC_5(&VAR_7->lock);

 if (VAR_6->c_cflag & VAR_1) {
  if (!FUNC_0(VAR_5)) {
   VAR_5->hw_stopped = 0;
   FUNC_2(VAR_7);
  }
 } else if (FUNC_0(VAR_5) && ~VAR_7->mstatus & VAR_2) {
  VAR_5->hw_stopped = 1;
 }
}
