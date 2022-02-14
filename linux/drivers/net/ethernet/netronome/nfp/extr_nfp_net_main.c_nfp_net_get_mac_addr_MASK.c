
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {int dummy; } ;
struct nfp_pf {int dummy; } ;
struct nfp_eth_table_port {int mac_addr; } ;
struct net_device {int perm_addr; int dev_addr; } ;


 struct nfp_eth_table_port* FUNC_0 (struct nfp_port*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct nfp_pf *VAR_0, struct net_device *VAR_1,
       struct nfp_port *VAR_2)
{
 struct nfp_eth_table_port *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) {
  FUNC_1(VAR_1);
  return;
 }

 FUNC_2(VAR_1->dev_addr, VAR_3->mac_addr);
 FUNC_2(VAR_1->perm_addr, VAR_3->mac_addr);
}
