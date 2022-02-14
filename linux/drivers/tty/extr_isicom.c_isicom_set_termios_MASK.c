
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_cflag; scalar_t__ c_iflag; } ;
struct tty_struct {scalar_t__ hw_stopped; TYPE_1__ termios; int name; struct isi_port* driver_data; } ;
struct ktermios {int c_cflag; scalar_t__ c_iflag; } ;
struct isi_port {TYPE_2__* card; } ;
struct TYPE_4__ {int card_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct isi_port*,int ,char*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1,
 struct ktermios *VAR_2)
{
 struct isi_port *VAR_3 = VAR_1->driver_data;
 unsigned long VAR_4;

 if (FUNC_2(VAR_3, VAR_1->name, "isicom_set_termios"))
  return;

 if (VAR_1->termios.c_cflag == VAR_2->c_cflag &&
   VAR_1->termios.c_iflag == VAR_2->c_iflag)
  return;

 FUNC_4(&VAR_3->card->card_lock, VAR_4);
 FUNC_1(VAR_1);
 FUNC_5(&VAR_3->card->card_lock, VAR_4);

 if ((VAR_2->c_cflag & VAR_0) && !FUNC_0(VAR_1)) {
  VAR_1->hw_stopped = 0;
  FUNC_3(VAR_1);
 }
}
