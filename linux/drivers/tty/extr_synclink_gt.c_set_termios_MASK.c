
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; TYPE_1__* driver; struct slgt_info* driver_data; } ;
struct slgt_info {int signals; int lock; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct slgt_info*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_4, struct ktermios *VAR_5)
{
 struct slgt_info *VAR_6 = VAR_4->driver_data;
 unsigned long VAR_7;

 FUNC_2(("%s set_termios\n", VAR_4->driver->name));

 FUNC_3(VAR_6);


 if ((VAR_5->c_cflag & VAR_0) && !FUNC_0(VAR_4)) {
  VAR_6->signals &= ~(VAR_3 | VAR_2);
  FUNC_5(&VAR_6->lock,VAR_7);
  FUNC_4(VAR_6);
  FUNC_6(&VAR_6->lock,VAR_7);
 }


 if (!(VAR_5->c_cflag & VAR_0) && FUNC_0(VAR_4)) {
  VAR_6->signals |= VAR_2;
  if (!FUNC_1(VAR_4) || !FUNC_7(VAR_4))
   VAR_6->signals |= VAR_3;
  FUNC_5(&VAR_6->lock,VAR_7);
   FUNC_4(VAR_6);
  FUNC_6(&VAR_6->lock,VAR_7);
 }


 if ((VAR_5->c_cflag & VAR_1) && !FUNC_1(VAR_4)) {
  VAR_4->hw_stopped = 0;
  FUNC_8(VAR_4);
 }
}
