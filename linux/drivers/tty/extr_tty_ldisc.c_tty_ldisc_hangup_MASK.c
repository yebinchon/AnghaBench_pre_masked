
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int c_line; } ;
struct tty_struct {TYPE_3__ termios; scalar_t__ ldisc; TYPE_2__* driver; int read_wait; int write_wait; int flags; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int (* hangup ) (struct tty_struct*) ;int (* write_wakeup ) (struct tty_struct*) ;int (* flush_buffer ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*,char*,scalar_t__) ;
 int FUNC_7 (struct tty_ldisc*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*,int ) ;
 struct tty_ldisc* FUNC_10 (struct tty_struct*) ;
 scalar_t__ FUNC_11 (struct tty_struct*,int ) ;
 int FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (struct tty_struct*) ;
 int FUNC_14 (int *,int ) ;

void FUNC_15(struct tty_struct *VAR_7, bool VAR_8)
{
 struct tty_ldisc *VAR_9;

 FUNC_6(VAR_7, "%p: hangup\n", VAR_7->ldisc);

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9 != ((void*)0)) {
  if (VAR_9->ops->flush_buffer)
   VAR_9->ops->flush_buffer(VAR_7);
  FUNC_5(VAR_7);
  if ((FUNC_4(VAR_5, &VAR_7->flags)) &&
      VAR_9->ops->write_wakeup)
   VAR_9->ops->write_wakeup(VAR_7);
  if (VAR_9->ops->hangup)
   VAR_9->ops->hangup(VAR_7);
  FUNC_7(VAR_9);
 }

 FUNC_14(&VAR_7->write_wait, VAR_1);
 FUNC_14(&VAR_7->read_wait, VAR_0);







 FUNC_9(VAR_7, VAR_2);

 if (VAR_7->driver->flags & VAR_6)
  FUNC_13(VAR_7);

 if (VAR_7->ldisc) {
  if (VAR_8) {
   if (FUNC_11(VAR_7, VAR_7->termios.c_line) < 0 &&
       FUNC_11(VAR_7, VAR_4) < 0)
    FUNC_0(FUNC_11(VAR_7, VAR_3) < 0);
  } else
   FUNC_8(VAR_7);
 }
 FUNC_12(VAR_7);
}
