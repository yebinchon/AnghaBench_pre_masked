
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_fl_lag {int dummy; } ;
struct nfp_flower_priv {struct nfp_fl_lag nfp_lag; } ;
struct net_device {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_fl_lag*,struct net_device*,void*) ;
 int FUNC_1 (struct nfp_fl_lag*,void*) ;
 int FUNC_2 (struct nfp_fl_lag*,struct net_device*) ;

int FUNC_3(struct nfp_flower_priv *VAR_3,
    struct net_device *VAR_4,
    unsigned long VAR_5, void *VAR_6)
{
 struct nfp_fl_lag *VAR_7 = &VAR_3->nfp_lag;
 int VAR_8;

 switch (VAR_5) {
 case 129:
  VAR_8 = FUNC_1(VAR_7, VAR_6);
  if (VAR_8)
   return VAR_0;
  return VAR_2;
 case 130:
  FUNC_0(VAR_7, VAR_4, VAR_6);
  return VAR_2;
 case 128:
  FUNC_2(VAR_7, VAR_4);
  return VAR_2;
 }

 return VAR_1;
}
