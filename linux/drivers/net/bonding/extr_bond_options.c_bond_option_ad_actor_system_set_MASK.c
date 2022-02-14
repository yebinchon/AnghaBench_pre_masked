
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ad_actor_system; } ;
struct bonding {int dev; TYPE_1__ params; } ;
struct bond_opt_value {int value; scalar_t__ string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bonding*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct bonding *VAR_2,
        const struct bond_opt_value *VAR_3)
{
 u8 VAR_4[VAR_1];
 u8 *VAR_5;

 if (VAR_3->string) {
  if (!FUNC_3(VAR_3->string, VAR_4))
   goto err;
  VAR_5 = VAR_4;
 } else {
  VAR_5 = (u8 *)&VAR_3->value;
 }

 if (!FUNC_2(VAR_5))
  goto err;

 FUNC_4(VAR_2->dev, "Setting ad_actor_system to %pM\n", VAR_5);
 FUNC_1(VAR_2->params.ad_actor_system, VAR_5);
 FUNC_0(VAR_2);

 return 0;

err:
 FUNC_5(VAR_2->dev, "Invalid ad_actor_system MAC address.\n");
 return -VAR_0;
}
