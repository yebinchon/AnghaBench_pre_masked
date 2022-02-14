
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int rss_hfunc; } ;





 unsigned int VAR_0 ;
 int FUNC_0 (struct nfp_net*,char*,int) ;

unsigned int FUNC_1(struct nfp_net *VAR_1)
{
 switch (VAR_1->rss_hfunc) {
 case 129:
  return VAR_0;
 case 128:
  return 0;
 case 130:
  return 4;
 }

 FUNC_0(VAR_1, "Unknown hash function: %u\n", VAR_1->rss_hfunc);
 return 0;
}
