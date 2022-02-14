
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ index; struct mxser_port* driver_data; } ;
struct tty_port {int mutex; } ;
struct mxser_port {int closing; struct tty_port port; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_port*,struct tty_struct*,struct file*) ;
 scalar_t__ FUNC_8 (struct tty_port*) ;
 int FUNC_9 (struct tty_port*) ;
 int FUNC_10 (struct tty_port*,int ) ;
 int FUNC_11 (struct tty_port*,int *) ;

__attribute__((used)) static void FUNC_12(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct mxser_port *VAR_3 = VAR_1->driver_data;
 struct tty_port *VAR_4 = &VAR_3->port;

 if (VAR_1->index == VAR_0 || VAR_3 == ((void*)0))
  return;
 if (FUNC_7(VAR_4, VAR_1, VAR_2) == 0)
  return;
 VAR_3->closing = 1;
 FUNC_1(&VAR_4->mutex);
 FUNC_3(VAR_4);
 FUNC_4(VAR_1);
 if (FUNC_8(VAR_4) && FUNC_0(VAR_1))
  FUNC_9(VAR_4);
 FUNC_5(VAR_4);
 FUNC_10(VAR_4, 0);
 FUNC_2(&VAR_4->mutex);
 VAR_3->closing = 0;


 FUNC_6(VAR_4, VAR_1);
 FUNC_11(VAR_4, ((void*)0));
}
