
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_2__* info; struct dsa_switch* ds; } ;
struct dsa_switch {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* port_set_egress_floods ) (struct mv88e6xxx_chip*,int,int,int) ;} ;


 scalar_t__ FUNC_0 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_0, int VAR_1)
{
 struct dsa_switch *VAR_2 = VAR_0->ds;
 bool VAR_3;


 VAR_3 = FUNC_0(VAR_2, VAR_1) || FUNC_1(VAR_2, VAR_1);
 if (VAR_0->info->ops->port_set_egress_floods)
  return VAR_0->info->ops->port_set_egress_floods(VAR_0, VAR_1,
              VAR_3, VAR_3);

 return 0;
}
