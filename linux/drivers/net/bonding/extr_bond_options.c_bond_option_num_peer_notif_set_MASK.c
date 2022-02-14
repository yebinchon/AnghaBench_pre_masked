
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_peer_notif; } ;
struct bonding {TYPE_1__ params; } ;
struct bond_opt_value {int value; } ;



__attribute__((used)) static int FUNC_0(struct bonding *VAR_0,
       const struct bond_opt_value *VAR_1)
{
 VAR_0->params.num_peer_notif = VAR_1->value;

 return 0;
}
