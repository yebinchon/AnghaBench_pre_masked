
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {int dummy; } ;
struct nfp_eth_table_port {int dummy; } ;


 int VAR_0 ;
 struct nfp_eth_table_port* FUNC_0 (struct nfp_port*) ;
 int FUNC_1 (struct nfp_eth_table_port*,struct nfp_eth_table_port*,int) ;

__attribute__((used)) static int
FUNC_2(struct nfp_port *VAR_1,
     struct nfp_eth_table_port *VAR_2)
{
 struct nfp_eth_table_port *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_3, sizeof(*VAR_3));

 return 0;
}
