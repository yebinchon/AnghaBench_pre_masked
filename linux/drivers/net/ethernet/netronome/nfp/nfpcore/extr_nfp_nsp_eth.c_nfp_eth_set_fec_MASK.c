
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp {int dummy; } ;
struct nfp_cpp {int dummy; } ;
typedef enum nfp_eth_fec { ____Placeholder_nfp_eth_fec } nfp_eth_fec ;


 scalar_t__ FUNC_0 (struct nfp_nsp*) ;
 int FUNC_1 (struct nfp_nsp*) ;
 int FUNC_2 (struct nfp_nsp*,int) ;
 int FUNC_3 (struct nfp_nsp*) ;
 int FUNC_4 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_5 (struct nfp_cpp*,unsigned int) ;

int
FUNC_6(struct nfp_cpp *VAR_0, unsigned int VAR_1, enum nfp_eth_fec VAR_2)
{
 struct nfp_nsp *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_0, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_3);
  return VAR_4;
 }

 return FUNC_4(VAR_3);
}
