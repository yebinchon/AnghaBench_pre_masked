
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty3270* driver_data; } ;
struct tty_port {int count; } ;
struct tty3270 {struct tty_port port; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct tty_port*,struct tty_struct*) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct tty3270 *VAR_2 = VAR_0->driver_data;
 struct tty_port *VAR_3 = &VAR_2->port;

 VAR_3->count++;
 FUNC_0(VAR_3, VAR_0);
 return 0;
}
