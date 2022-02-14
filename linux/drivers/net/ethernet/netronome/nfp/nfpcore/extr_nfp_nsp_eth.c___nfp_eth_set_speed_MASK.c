
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp {int dummy; } ;
typedef enum nfp_eth_rate { ____Placeholder_nfp_eth_rate } nfp_eth_rate ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_nsp*,int ,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct nfp_nsp*) ;
 int FUNC_3 (int ,char*,unsigned int) ;

int FUNC_4(struct nfp_nsp *VAR_5, unsigned int VAR_6)
{
 enum nfp_eth_rate VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 == VAR_4) {
  FUNC_3(FUNC_2(VAR_5),
    "could not find matching lane rate for speed %u\n",
    VAR_6);
  return -VAR_0;
 }

 return FUNC_0(VAR_5, VAR_2,
          VAR_3, VAR_7,
          VAR_1);
}
