
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct neigh_parms {int neigh_setup; TYPE_1__* tbl; } ;
struct TYPE_2__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct net_device *VAR_2, struct neigh_parms *VAR_3)
{
 if (VAR_3->tbl->family == VAR_0)
  VAR_3->neigh_setup = VAR_1;

 return 0;
}
