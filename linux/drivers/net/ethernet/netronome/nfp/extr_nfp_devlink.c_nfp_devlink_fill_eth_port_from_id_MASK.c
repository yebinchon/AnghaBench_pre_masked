
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {int dummy; } ;
struct nfp_pf {int dummy; } ;
struct nfp_eth_table_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_port*,struct nfp_eth_table_port*) ;
 struct nfp_port* FUNC_1 (struct nfp_pf*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct nfp_pf *VAR_1, unsigned int VAR_2,
      struct nfp_eth_table_port *VAR_3)
{
 struct nfp_port *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_2);

 return FUNC_0(VAR_4, VAR_3);
}
