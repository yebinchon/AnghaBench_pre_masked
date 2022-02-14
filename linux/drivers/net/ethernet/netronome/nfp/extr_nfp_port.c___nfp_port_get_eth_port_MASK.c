
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {scalar_t__ type; struct nfp_eth_table_port* eth_port; } ;
struct nfp_eth_table_port {int dummy; } ;


 scalar_t__ VAR_0 ;

struct nfp_eth_table_port *FUNC_0(struct nfp_port *VAR_1)
{
 if (!VAR_1)
  return ((void*)0);
 if (VAR_1->type != VAR_0)
  return ((void*)0);

 return VAR_1->eth_port;
}
