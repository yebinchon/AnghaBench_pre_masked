
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct tty_driver {int dummy; } ;
struct device {int dummy; } ;
struct attribute_group {int dummy; } ;


 int FUNC_0 (struct tty_port*,struct tty_driver*,unsigned int) ;
 struct device* FUNC_1 (struct tty_driver*,unsigned int,struct device*,void*,struct attribute_group const**) ;

struct device *FUNC_2(struct tty_port *VAR_0,
  struct tty_driver *VAR_1, unsigned VAR_2,
  struct device *VAR_3, void *VAR_4,
  const struct attribute_group **VAR_5)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5);
}
