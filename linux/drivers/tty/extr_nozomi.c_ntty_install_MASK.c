
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct port* driver_data; } ;
struct tty_driver {int dummy; } ;
struct port {int dummy; } ;
struct nozomi {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nozomi* FUNC_0 (struct tty_struct*) ;
 struct port* FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_3(struct tty_driver *VAR_2, struct tty_struct *VAR_3)
{
 struct port *VAR_4 = FUNC_1(VAR_3);
 struct nozomi *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;
 if (!VAR_4 || !VAR_5 || VAR_5->state != VAR_1)
  return -VAR_0;
 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6 == 0)
  VAR_3->driver_data = VAR_4;
 return VAR_6;
}
