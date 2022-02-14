
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xgene_enet_pdata {int* extd_stats; scalar_t__ phy_mode; int false_rflr; int vlan_rjbr; TYPE_1__* mac_ops; } ;
struct TYPE_4__ {scalar_t__ mask; int addr; } ;
struct TYPE_3__ {int (* get_drop_cnt ) (struct xgene_enet_pdata*,int*,int*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 int FUNC_1 (struct xgene_enet_pdata*,int*,int*) ;
 int FUNC_2 (struct xgene_enet_pdata*,int ) ;

__attribute__((used)) static void FUNC_3(struct xgene_enet_pdata *VAR_13)
{
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18;

 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
  VAR_17 = FUNC_2(VAR_13, VAR_12[VAR_18].addr);
  if (VAR_12[VAR_18].mask) {
   VAR_16 = FUNC_0(VAR_12[VAR_18].mask - 1, 0);
   VAR_13->extd_stats[VAR_18] += (VAR_17 & VAR_16);
  }
 }

 if (VAR_13->phy_mode == VAR_2) {

  VAR_13->extd_stats[VAR_3] = 0;
 } else {

  VAR_13->extd_stats[VAR_4] -= VAR_13->extd_stats[VAR_3];
  VAR_13->extd_stats[VAR_5] -= VAR_13->extd_stats[VAR_6];
  VAR_13->extd_stats[VAR_8] -= VAR_13->extd_stats[VAR_9];
 }

 VAR_13->mac_ops->get_drop_cnt(VAR_13, &VAR_14, &VAR_15);
 VAR_13->extd_stats[VAR_7] += VAR_14;
 VAR_13->extd_stats[VAR_10] += VAR_15;


 VAR_13->extd_stats[VAR_0] = VAR_13->false_rflr;

 VAR_13->extd_stats[VAR_1] = VAR_13->vlan_rjbr;
}
