
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct serial_state* driver_data; } ;
struct tty_port {int * tty; } ;
struct serial_state {int timeout; int read_status_mask; struct tty_port tport; } ;
struct file {int dummy; } ;
struct TYPE_2__ {void* intreq; void* intena; } ;


 void* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,int ) ;
 scalar_t__ FUNC_3 (struct serial_state*,int ,char*) ;
 int FUNC_4 (struct tty_struct*,struct serial_state*) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_port*,struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_port*,struct tty_struct*,struct file*) ;
 scalar_t__ FUNC_8 (struct tty_port*) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_3, struct file * VAR_4)
{
 struct serial_state *VAR_5 = VAR_3->driver_data;
 struct tty_port *VAR_6 = &VAR_5->tport;

 if (FUNC_3(VAR_5, VAR_3->name, "rs_close"))
  return;

 if (FUNC_7(VAR_6, VAR_3, VAR_4) == 0)
  return;







 VAR_5->read_status_mask &= ~VAR_1;
 if (FUNC_8(VAR_6)) {

         VAR_2.intena = VAR_0;
  FUNC_0();

  VAR_2.intreq = VAR_0;
  FUNC_0();






  FUNC_2(VAR_3, VAR_5->timeout);
 }
 FUNC_4(VAR_3, VAR_5);
 FUNC_1(VAR_3);

 FUNC_5(VAR_3);
 VAR_6->tty = ((void*)0);

 FUNC_6(VAR_6, VAR_3);
}
