
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_switch_mac ) (struct mv88e6xxx_chip*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int *) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_1)
{
 if (VAR_1->info->ops->set_switch_mac) {
  u8 VAR_2[VAR_0];

  FUNC_0(VAR_2);

  return VAR_1->info->ops->set_switch_mac(VAR_1, VAR_2);
 }

 return 0;
}
