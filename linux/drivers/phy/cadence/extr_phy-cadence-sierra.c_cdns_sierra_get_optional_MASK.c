
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cdns_sierra_inst {int phy_type; int num_lanes; int mlane; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct cdns_sierra_inst *VAR_1,
        struct device_node *VAR_2)
{
 if (FUNC_0(VAR_2, "reg", &VAR_1->mlane))
  return -VAR_0;

 if (FUNC_0(VAR_2, "cdns,num-lanes", &VAR_1->num_lanes))
  return -VAR_0;

 if (FUNC_0(VAR_2, "cdns,phy-type", &VAR_1->phy_type))
  return -VAR_0;

 return 0;
}
