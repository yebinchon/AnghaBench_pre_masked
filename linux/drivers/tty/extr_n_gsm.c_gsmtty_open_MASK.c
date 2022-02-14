
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct tty_port {int count; } ;
struct gsm_dlci {scalar_t__ modem_rx; struct tty_port port; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct gsm_dlci*) ;
 int FUNC_1 (struct tty_port*,struct tty_struct*,struct file*) ;
 int FUNC_2 (struct tty_port*,int) ;
 int FUNC_3 (struct tty_port*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct gsm_dlci *VAR_2 = VAR_0->driver_data;
 struct tty_port *VAR_3 = &VAR_2->port;

 VAR_3->count++;
 FUNC_3(VAR_3, VAR_0);

 VAR_2->modem_rx = 0;


 FUNC_2(VAR_3, 1);

 FUNC_0(VAR_2);

 return FUNC_1(VAR_3, VAR_0, VAR_1);
}
