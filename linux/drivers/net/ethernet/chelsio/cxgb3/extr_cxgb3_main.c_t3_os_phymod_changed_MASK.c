
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t modtype; } ;
struct port_info {TYPE_1__ phy; } ;
struct net_device {int dummy; } ;
struct adapter {struct net_device** port; } ;


 int FUNC_0 (struct net_device const*,char*,...) ;
 struct port_info* FUNC_1 (struct net_device const*) ;
 size_t VAR_0 ;

void FUNC_2(struct adapter *VAR_1, int VAR_2)
{
 static const char *VAR_3[] = {
  ((void*)0), "SR", "LR", "LRM", "TWINAX", "TWINAX", "unknown"
 };

 const struct net_device *VAR_4 = VAR_1->port[VAR_2];
 const struct port_info *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->phy.modtype == VAR_0)
  FUNC_0(VAR_4, "PHY module unplugged\n");
 else
  FUNC_0(VAR_4, "%s PHY module inserted\n",
       VAR_3[VAR_5->phy.modtype]);
}
