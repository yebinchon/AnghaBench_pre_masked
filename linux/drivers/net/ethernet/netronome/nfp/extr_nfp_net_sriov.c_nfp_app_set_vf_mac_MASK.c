
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nfp_app {TYPE_1__* pf; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int cpp; scalar_t__ vfcfg_tbl2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct nfp_app* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,char*,int *,int) ;
 int FUNC_5 (struct nfp_app*,int,int ,char*) ;
 int FUNC_6 (struct nfp_app*,int,int ,char*) ;
 int FUNC_7 (int ,char*,int *,int) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;

int FUNC_10(struct net_device *VAR_6, int VAR_7, u8 *VAR_8)
{
 struct nfp_app *VAR_9 = FUNC_3(VAR_6);
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_9, VAR_7, VAR_2, "mac");
 if (VAR_11)
  return VAR_11;

 if (FUNC_2(VAR_8)) {
  FUNC_7(VAR_9->pf->cpp,
    "invalid Ethernet address %pM for VF id %d\n",
    VAR_8, VAR_7);
  return -VAR_0;
 }


 VAR_10 = VAR_3 + VAR_7 * VAR_5;
 FUNC_8(FUNC_1(VAR_8), VAR_9->pf->vfcfg_tbl2 + VAR_10);
 FUNC_9(FUNC_0(VAR_8 + 4),
        VAR_9->pf->vfcfg_tbl2 + VAR_10 + VAR_1);

 VAR_11 = FUNC_6(VAR_9, VAR_7, VAR_4, "MAC");
 if (!VAR_11)
  FUNC_4(VAR_9->pf->cpp,
    "MAC %pM set on VF %d, reload the VF driver to make this change effective.\n",
    VAR_8, VAR_7);

 return VAR_11;
}
