
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct phy_device {int eee_broken_modes; TYPE_2__ mdio; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;

void FUNC_2(struct phy_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->mdio.dev.of_node;
 u32 VAR_9 = 0;

 if (!FUNC_0(VAR_0))
  return;

 if (!VAR_8)
  return;

 if (FUNC_1(VAR_8, "eee-broken-100tx"))
  VAR_9 |= VAR_3;
 if (FUNC_1(VAR_8, "eee-broken-1000t"))
  VAR_9 |= VAR_2;
 if (FUNC_1(VAR_8, "eee-broken-10gt"))
  VAR_9 |= VAR_6;
 if (FUNC_1(VAR_8, "eee-broken-1000kx"))
  VAR_9 |= VAR_1;
 if (FUNC_1(VAR_8, "eee-broken-10gkx4"))
  VAR_9 |= VAR_5;
 if (FUNC_1(VAR_8, "eee-broken-10gkr"))
  VAR_9 |= VAR_4;

 VAR_7->eee_broken_modes = VAR_9;
}
