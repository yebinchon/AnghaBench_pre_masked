
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nfp_app {TYPE_1__* pf; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ vfcfg_tbl2; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfp_app* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nfp_app*,int,int ,char*) ;
 int FUNC_3 (struct nfp_app*,int,int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct net_device *VAR_6, int VAR_7, bool VAR_8)
{
 struct nfp_app *VAR_9 = FUNC_1(VAR_6);
 unsigned int VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_9, VAR_7, VAR_2,
      "trust");
 if (VAR_12)
  return VAR_12;


 VAR_10 = VAR_3 + VAR_7 * VAR_5 +
  VAR_0;
 VAR_11 = FUNC_4(VAR_9->pf->vfcfg_tbl2 + VAR_10);
 VAR_11 &= ~VAR_1;
 VAR_11 |= FUNC_0(VAR_1, VAR_8);
 FUNC_5(VAR_11, VAR_9->pf->vfcfg_tbl2 + VAR_10);

 return FUNC_3(VAR_9, VAR_7, VAR_4,
        "trust");
}
