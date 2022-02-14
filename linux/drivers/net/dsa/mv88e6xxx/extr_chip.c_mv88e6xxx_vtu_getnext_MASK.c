
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_vtu_entry {int dummy; } ;
struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* vtu_getnext ) (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_1,
     struct mv88e6xxx_vtu_entry *VAR_2)
{
 if (!VAR_1->info->ops->vtu_getnext)
  return -VAR_0;

 return VAR_1->info->ops->vtu_getnext(VAR_1, VAR_2);
}
