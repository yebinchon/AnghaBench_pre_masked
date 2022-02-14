
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmds; } ;
struct ef4_nic {scalar_t__ loopback_mode; TYPE_1__ mdio; } ;


 scalar_t__ FUNC_0 (struct ef4_nic*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ef4_nic*) ;
 scalar_t__ FUNC_2 (struct ef4_nic*) ;

__attribute__((used)) static bool FUNC_3(struct ef4_nic *VAR_2)
{






 return (VAR_2->loopback_mode == VAR_0 ||
  FUNC_2(VAR_2)) &&
  (!(VAR_2->mdio.mmds & (1 << VAR_1)) ||
   FUNC_0(VAR_2) ||
   FUNC_1(VAR_2));
}
