
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int features; } ;
struct dsa_switch {TYPE_1__* ports; } ;
struct TYPE_2__ {struct net_device* slave; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_1, int VAR_2,
          struct phy_device *VAR_3)
{
 struct net_device *VAR_4;

 if (!FUNC_0(VAR_1, VAR_2))
  return 0;

 VAR_4 = VAR_1->ports[VAR_2].slave;

 VAR_4->features &= ~VAR_0;

 return 0;
}
