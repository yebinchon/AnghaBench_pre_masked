
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {struct serdev_controller* client_data; int * client_ops; } ;
struct serport {int dummy; } ;
struct serdev_controller {int dummy; } ;


 int VAR_0 ;
 struct serport* FUNC_0 (struct serdev_controller*) ;
 int FUNC_1 (struct serdev_controller*) ;
 int FUNC_2 (struct serdev_controller*) ;

int FUNC_3(struct tty_port *VAR_1)
{
 struct serdev_controller *VAR_2 = VAR_1->client_data;
 struct serport *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_2);
 VAR_1->client_ops = ((void*)0);
 VAR_1->client_data = ((void*)0);
 FUNC_1(VAR_2);

 return 0;
}
