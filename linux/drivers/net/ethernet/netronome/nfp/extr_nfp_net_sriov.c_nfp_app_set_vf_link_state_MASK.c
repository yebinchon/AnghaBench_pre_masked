
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nfp_app {TYPE_1__* pf; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ vfcfg_tbl2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfp_app* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nfp_app*,int,int ,char*) ;
 int FUNC_3 (struct nfp_app*,int,int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct net_device *VAR_7, int VAR_8,
         int VAR_9)
{
 struct nfp_app *VAR_10 = FUNC_1(VAR_7);
 unsigned int VAR_11;
 u8 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_8, VAR_3,
      "link_state");
 if (VAR_13)
  return VAR_13;

 switch (VAR_9) {
 case 130:
 case 128:
 case 129:
  break;
 default:
  return -VAR_0;
 }


 VAR_11 = VAR_4 + VAR_8 * VAR_6 +
  VAR_1;
 VAR_12 = FUNC_4(VAR_10->pf->vfcfg_tbl2 + VAR_11);
 VAR_12 &= ~VAR_2;
 VAR_12 |= FUNC_0(VAR_2, VAR_9);
 FUNC_5(VAR_12, VAR_10->pf->vfcfg_tbl2 + VAR_11);

 return FUNC_3(VAR_10, VAR_8, VAR_5,
        "link state");
}
