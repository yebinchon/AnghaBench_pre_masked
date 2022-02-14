
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int write_wait; int flags; } ;
struct tty_port {struct serdev_controller* client_data; } ;
struct serport {int flags; } ;
struct serdev_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct serport* FUNC_0 (struct serdev_controller*) ;
 int FUNC_1 (struct serdev_controller*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct tty_struct*) ;
 struct tty_struct* FUNC_5 (struct tty_port*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct tty_port *VAR_2)
{
 struct serdev_controller *VAR_3 = VAR_2->client_data;
 struct serport *VAR_4 = FUNC_0(VAR_3);
 struct tty_struct *VAR_5;

 VAR_5 = FUNC_5(VAR_2);
 if (!VAR_5)
  return;

 if (FUNC_2(VAR_1, &VAR_5->flags) &&
     FUNC_3(VAR_0, &VAR_4->flags))
  FUNC_1(VAR_3);


 FUNC_6(&VAR_5->write_wait);

 FUNC_4(VAR_5);
}
