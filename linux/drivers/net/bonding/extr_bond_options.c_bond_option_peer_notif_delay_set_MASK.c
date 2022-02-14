
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peer_notif_delay; } ;
struct bonding {TYPE_1__ params; } ;
struct bond_opt_value {int dummy; } ;


 int FUNC_0 (struct bonding*,struct bond_opt_value const*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct bonding *VAR_0,
         const struct bond_opt_value *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1,
      "peer notification delay",
      &VAR_0->params.peer_notif_delay);
 return VAR_2;
}
