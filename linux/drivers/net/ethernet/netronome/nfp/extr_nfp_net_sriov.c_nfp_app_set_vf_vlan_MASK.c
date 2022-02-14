
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nfp_app {TYPE_1__* pf; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {scalar_t__ vfcfg_tbl2; int cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 struct nfp_app* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nfp_app*,int,int ,char*) ;
 int FUNC_4 (struct nfp_app*,int,int ,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int,scalar_t__) ;

int FUNC_7(struct net_device *VAR_10, int VAR_11, u16 VAR_12, u8 VAR_13,
   __be16 VAR_14)
{
 struct nfp_app *VAR_15 = FUNC_2(VAR_10);
 unsigned int VAR_16;
 u16 VAR_17;
 int VAR_18;

 VAR_18 = FUNC_3(VAR_15, VAR_11, VAR_3, "vlan");
 if (VAR_18)
  return VAR_18;

 if (VAR_14 != FUNC_1(VAR_2))
  return -VAR_1;

 if (VAR_12 > 4095 || VAR_13 > 7) {
  FUNC_5(VAR_15->pf->cpp,
    "invalid vlan id or qos for VF id %d\n", VAR_11);
  return -VAR_0;
 }


 VAR_17 = FUNC_0(VAR_9, VAR_12) |
  FUNC_0(VAR_8, VAR_13);
 VAR_16 = VAR_4 + VAR_11 * VAR_6;
 FUNC_6(VAR_17, VAR_15->pf->vfcfg_tbl2 + VAR_16 + VAR_7);

 return FUNC_4(VAR_15, VAR_11, VAR_5,
        "vlan");
}
