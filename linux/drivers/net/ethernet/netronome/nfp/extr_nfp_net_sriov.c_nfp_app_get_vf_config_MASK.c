
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nfp_app {TYPE_1__* pf; } ;
struct net_device {int dummy; } ;
struct ifla_vf_info {int vf; void* linkstate; void* trusted; void* spoofchk; void* qos; void* vlan; int * mac; } ;
struct TYPE_2__ {scalar_t__ vfcfg_tbl2; } ;


 void* FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ifla_vf_info*,int ,int) ;
 struct nfp_app* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nfp_app*,int,int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(struct net_device *VAR_10, int VAR_11,
     struct ifla_vf_info *VAR_12)
{
 struct nfp_app *VAR_13 = FUNC_2(VAR_10);
 unsigned int VAR_14;
 u16 VAR_15;
 u32 VAR_16;
 u16 VAR_17;
 u8 VAR_18;
 int VAR_19;

 VAR_19 = FUNC_3(VAR_13, VAR_11, 0, "");
 if (VAR_19)
  return VAR_19;

 VAR_14 = VAR_5 + VAR_11 * VAR_6;

 VAR_16 = FUNC_7(VAR_13->pf->vfcfg_tbl2 + VAR_14);
 VAR_17 = FUNC_8(VAR_13->pf->vfcfg_tbl2 + VAR_14 + VAR_4);

 VAR_18 = FUNC_6(VAR_13->pf->vfcfg_tbl2 + VAR_14 + VAR_0);
 VAR_15 = FUNC_8(VAR_13->pf->vfcfg_tbl2 + VAR_14 + VAR_7);

 FUNC_1(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->vf = VAR_11;

 FUNC_5(VAR_16, &VAR_12->mac[0]);
 FUNC_4(VAR_17, &VAR_12->mac[4]);

 VAR_12->vlan = FUNC_0(VAR_9, VAR_15);
 VAR_12->qos = FUNC_0(VAR_8, VAR_15);

 VAR_12->spoofchk = FUNC_0(VAR_2, VAR_18);
 VAR_12->trusted = FUNC_0(VAR_3, VAR_18);
 VAR_12->linkstate = FUNC_0(VAR_1, VAR_18);

 return 0;
}
