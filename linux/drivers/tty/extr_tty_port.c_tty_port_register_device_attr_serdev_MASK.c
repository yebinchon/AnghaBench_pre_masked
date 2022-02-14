
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct tty_driver {int dummy; } ;
struct device {int dummy; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct tty_port*,struct device*,struct tty_driver*,unsigned int) ;
 int FUNC_2 (struct tty_port*,struct tty_driver*,unsigned int) ;
 struct device* FUNC_3 (struct tty_driver*,unsigned int,struct device*,void*,struct attribute_group const**) ;

struct device *FUNC_4(struct tty_port *VAR_1,
  struct tty_driver *VAR_2, unsigned VAR_3,
  struct device *VAR_4, void *VAR_5,
  const struct attribute_group **VAR_6)
{
 struct device *VAR_7;

 FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_7 = FUNC_1(VAR_1, VAR_4, VAR_2, VAR_3);
 if (FUNC_0(VAR_7) != -VAR_0) {

  return VAR_7;
 }

 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6);
}
