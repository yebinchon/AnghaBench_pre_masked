
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bonding {TYPE_1__* dev; } ;
struct bond_opt_value {int dummy; } ;
struct TYPE_2__ {scalar_t__ reg_state; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bonding*,unsigned int,struct bond_opt_value*) ;
 int FUNC_2 (int ,TYPE_1__*) ;

int FUNC_3(struct bonding *VAR_3,
     unsigned int VAR_4, struct bond_opt_value *VAR_5)
{
 int VAR_6 = -VAR_0;

 FUNC_0();

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);

 if (!VAR_6 && (VAR_3->dev->reg_state == VAR_2))
  FUNC_2(VAR_1, VAR_3->dev);

 return VAR_6;
}
