
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int chip_rev_id; int ndev; int port; int func; } ;
struct net_device {int dev_addr; } ;


 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*,int ,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct ql_adapter *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, VAR_2->ndev,
     "Function #%d, Port %d, NIC Roll %d, NIC Rev = %d, "
     "XG Roll = %d, XG Rev = %d.\n",
     VAR_2->func,
     VAR_2->port,
     VAR_2->chip_rev_id & 0x0000000f,
     VAR_2->chip_rev_id >> 4 & 0x0000000f,
     VAR_2->chip_rev_id >> 8 & 0x0000000f,
     VAR_2->chip_rev_id >> 12 & 0x0000000f);
 FUNC_1(VAR_2, VAR_0, VAR_2->ndev,
     "MAC address %pM\n", VAR_1->dev_addr);
}
