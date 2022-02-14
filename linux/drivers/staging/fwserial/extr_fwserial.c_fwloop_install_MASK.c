
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct fwtty_port* driver_data; int index; } ;
struct tty_driver {int dummy; } ;
struct fwtty_port {int dummy; } ;


 struct fwtty_port* FUNC_0 (int ) ;
 int FUNC_1 (struct fwtty_port*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(struct tty_driver *VAR_0, struct tty_struct *VAR_1)
{
 struct fwtty_port *VAR_2 = FUNC_0(FUNC_2(VAR_1->index));
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_3)
  VAR_1->driver_data = VAR_2;
 else
  FUNC_1(VAR_2);
 return VAR_3;
}
