
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_6__ {TYPE_1__* gpio_ops; } ;
struct TYPE_5__ {TYPE_3__* ops; } ;
struct TYPE_4__ {int (* set_dir ) (struct mv88e6xxx_chip*,int,int) ;int (* set_pctl ) (struct mv88e6xxx_chip*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_1, int VAR_2,
       int VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_1->info->ops->gpio_ops)
  return -VAR_0;

 VAR_5 = VAR_1->info->ops->gpio_ops->set_dir(VAR_1, VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 return VAR_1->info->ops->gpio_ops->set_pctl(VAR_1, VAR_2, VAR_3);
}
