
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {int flags; } ;
struct nfp_eth_table_port {int dummy; } ;


 int VAR_0 ;
 struct nfp_eth_table_port* FUNC_0 (struct nfp_port*) ;
 scalar_t__ FUNC_1 (struct nfp_port*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

struct nfp_eth_table_port *FUNC_3(struct nfp_port *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return ((void*)0);

 if (FUNC_2(VAR_0, &VAR_1->flags))
  if (FUNC_1(VAR_1))
   return ((void*)0);

 return FUNC_0(VAR_1);
}
