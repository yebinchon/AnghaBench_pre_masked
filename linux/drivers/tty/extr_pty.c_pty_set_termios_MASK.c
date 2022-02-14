
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int c_cflag; } ;
struct tty_struct {int ctrl_status; TYPE_2__ termios; TYPE_1__* link; int ctrl_lock; } ;
struct ktermios {int c_lflag; int c_iflag; char* c_cc; } ;
struct TYPE_3__ {int read_wait; scalar_t__ packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int VAR_5 ;
 char FUNC_2 (struct tty_struct*) ;
 char FUNC_3 (struct tty_struct*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_11,
     struct ktermios *VAR_12)
{

 if (VAR_11->link && VAR_11->link->packet) {
  int VAR_13 = (VAR_12->c_lflag & VAR_3) | FUNC_1(VAR_11);
  int VAR_14 = ((VAR_12->c_iflag & VAR_4) &&
    (VAR_12->c_cc[VAR_10] == '\023') &&
    (VAR_12->c_cc[VAR_9] == '\021'));
  int VAR_15 = (FUNC_0(VAR_11) &&
    FUNC_3(VAR_11) == '\023' &&
    FUNC_2(VAR_11) == '\021');
  if ((VAR_14 != VAR_15) || VAR_13) {
   FUNC_4(&VAR_11->ctrl_lock);
   if (VAR_14 != VAR_15) {
    VAR_11->ctrl_status &= ~(VAR_6 | VAR_8);
    if (VAR_15)
     VAR_11->ctrl_status |= VAR_6;
    else
     VAR_11->ctrl_status |= VAR_8;
   }
   if (VAR_13)
    VAR_11->ctrl_status |= VAR_7;
   FUNC_5(&VAR_11->ctrl_lock);
   FUNC_6(&VAR_11->link->read_wait);
  }
 }

 VAR_11->termios.c_cflag &= ~(VAR_2 | VAR_5);
 VAR_11->termios.c_cflag |= (VAR_1 | VAR_0);
}
