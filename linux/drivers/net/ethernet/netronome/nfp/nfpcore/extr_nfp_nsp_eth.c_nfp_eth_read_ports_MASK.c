
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp {int dummy; } ;
struct nfp_eth_table {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 scalar_t__ FUNC_0 (struct nfp_nsp*) ;
 struct nfp_eth_table* FUNC_1 (struct nfp_cpp*,struct nfp_nsp*) ;
 int FUNC_2 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_3 (struct nfp_cpp*) ;

struct nfp_eth_table *FUNC_4(struct nfp_cpp *VAR_0)
{
 struct nfp_eth_table *VAR_1;
 struct nfp_nsp *VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2))
  return ((void*)0);

 VAR_1 = FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_2);

 return VAR_1;
}
