
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
struct altera_tse_private {scalar_t__ phy_addr; TYPE_1__* device; int phy_iface; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,char*,scalar_t__) ;
 struct altera_tse_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct altera_tse_private *VAR_5 = FUNC_3(VAR_4);
 struct device_node *VAR_6 = VAR_5->device->of_node;
 int VAR_7 = 0;

 VAR_5->phy_iface = FUNC_4(VAR_6);


 if (!VAR_5->phy_iface)
  return 0;





 if (FUNC_5(VAR_5->device->of_node, "phy-addr",
    &VAR_5->phy_addr)) {
  VAR_5->phy_addr = VAR_2;
 }

 if (!((VAR_5->phy_addr == VAR_2) ||
    ((VAR_5->phy_addr >= 0) && (VAR_5->phy_addr < VAR_1)))) {
  FUNC_2(VAR_4, "invalid phy-addr specified %d\n",
   VAR_5->phy_addr);
  return -VAR_0;
 }


 VAR_7 = FUNC_0(VAR_4,
      FUNC_1(1, &VAR_3));

 if (VAR_7)
  return -VAR_0;

 return 0;
}
