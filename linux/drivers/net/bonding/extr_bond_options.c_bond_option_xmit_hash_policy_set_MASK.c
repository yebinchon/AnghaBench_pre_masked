
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xmit_policy; } ;
struct bonding {TYPE_1__ params; int dev; } ;
struct bond_opt_value {int value; int string; } ;


 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bonding *VAR_0,
         const struct bond_opt_value *VAR_1)
{
 FUNC_0(VAR_0->dev, "Setting xmit hash policy to %s (%llu)\n",
     VAR_1->string, VAR_1->value);
 VAR_0->params.xmit_policy = VAR_1->value;

 return 0;
}
