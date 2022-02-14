
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_chip {int dev; TYPE_2__* info; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* port_set_link ) (struct mv88e6xxx_chip*,int,int) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,int) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_0, int VAR_1, int VAR_2)
{
 struct mv88e6xxx_chip *VAR_3 = VAR_0->priv;
 int VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = VAR_3->info->ops->port_set_link(VAR_3, VAR_1, VAR_2);
 FUNC_2(VAR_3);

 if (VAR_4)
  FUNC_0(VAR_3->dev, "p%d: failed to force MAC link\n", VAR_1);
}
