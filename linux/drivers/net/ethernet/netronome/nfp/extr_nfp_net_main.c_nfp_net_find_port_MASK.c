
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_eth_table_port {unsigned int index; } ;
struct nfp_eth_table {int count; struct nfp_eth_table_port* ports; } ;



__attribute__((used)) static struct nfp_eth_table_port *
FUNC_0(struct nfp_eth_table *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0 && VAR_2 < VAR_0->count; VAR_2++)
  if (VAR_0->ports[VAR_2].index == VAR_1)
   return &VAR_0->ports[VAR_2];

 return ((void*)0);
}
