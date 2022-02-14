
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct ef4_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 (struct ef4_nic*,void*) ;
 struct ef4_nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
     struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct ef4_nic *VAR_3 = FUNC_1(VAR_0);

 VAR_1->version = VAR_3->type->revision;
 FUNC_0(VAR_3, VAR_2);
}
