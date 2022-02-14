
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; int name; struct tty_port* port; struct serial_state* driver_data; } ;
struct tty_port {int low_latency; int flags; struct tty_struct* tty; int count; } ;
struct serial_state {struct tty_port tport; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct serial_state* VAR_2 ;
 scalar_t__ FUNC_0 (struct serial_state*,int ,char*) ;
 int FUNC_1 (struct tty_struct*,struct serial_state*) ;
 int FUNC_2 (struct tty_port*,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_3, struct file * VAR_4)
{
 struct serial_state *VAR_5 = VAR_2 + VAR_3->index;
 struct tty_port *VAR_6 = &VAR_5->tport;
 int VAR_7;

 VAR_6->count++;
 VAR_6->tty = VAR_3;
 VAR_3->driver_data = VAR_5;
 VAR_3->port = VAR_6;
 if (FUNC_0(VAR_5, VAR_3->name, "rs_open"))
  return -VAR_1;

 VAR_6->low_latency = (VAR_6->flags & VAR_0) ? 1 : 0;

 VAR_7 = FUNC_1(VAR_3, VAR_5);
 if (VAR_7) {
  return VAR_7;
 }

 return FUNC_2(VAR_6, VAR_3, VAR_4);
}
