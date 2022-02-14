
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int primary_reselect; } ;
struct bonding {TYPE_1__ params; int dev; } ;
struct bond_opt_value {int value; int string; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct bonding*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct bonding *VAR_0,
         const struct bond_opt_value *VAR_1)
{
 FUNC_2(VAR_0->dev, "Setting primary_reselect to %s (%llu)\n",
     VAR_1->string, VAR_1->value);
 VAR_0->params.primary_reselect = VAR_1->value;

 FUNC_0();
 FUNC_1(VAR_0);
 FUNC_3();

 return 0;
}
