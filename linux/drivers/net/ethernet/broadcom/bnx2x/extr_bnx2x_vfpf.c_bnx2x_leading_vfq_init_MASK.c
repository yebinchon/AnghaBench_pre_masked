
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x_virtf {int leading_rss; int filter_state; int rss_conf_obj; int mcast_obj; int vf_vlans_pool; int vf_macs_pool; int abs_vfid; } ;
struct bnx2x_vf_queue {int is_leading; int sp_initialized; int cid; int vlan_mac_obj; int vlan_obj; int mac_obj; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_2 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_3 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_4 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_5 (struct bnx2x*,int *,int ,int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_11, struct bnx2x_virtf *VAR_12,
       struct bnx2x_vf_queue *VAR_13)
{
 u8 VAR_14 = FUNC_8(VAR_12, VAR_13);
 u8 VAR_15 = FUNC_0(VAR_12->abs_vfid);


 FUNC_1(VAR_11, &VAR_13->mac_obj,
      VAR_14, VAR_13->cid, VAR_15,
      FUNC_6(VAR_11, VAR_12, VAR_6),
      FUNC_7(VAR_11, VAR_12, VAR_6),
      VAR_0,
      &VAR_12->filter_state,
      VAR_5,
      &VAR_12->vf_macs_pool);

 FUNC_5(VAR_11, &VAR_13->vlan_obj,
       VAR_14, VAR_13->cid, VAR_15,
       FUNC_6(VAR_11, VAR_12, VAR_10),
       FUNC_7(VAR_11, VAR_12, VAR_10),
       VAR_4,
       &VAR_12->filter_state,
       VAR_5,
       &VAR_12->vf_vlans_pool);

 FUNC_4(VAR_11, &VAR_13->vlan_mac_obj,
    VAR_14, VAR_13->cid, VAR_15,
    FUNC_6(VAR_11, VAR_12, VAR_9),
    FUNC_7(VAR_11, VAR_12, VAR_9),
    VAR_3,
    &VAR_12->filter_state,
    VAR_5,
    &VAR_12->vf_macs_pool,
    &VAR_12->vf_vlans_pool);

 FUNC_2(VAR_11, &VAR_12->mcast_obj, VAR_14,
        VAR_13->cid, VAR_15, VAR_15,
        FUNC_6(VAR_11, VAR_12, VAR_7),
        FUNC_7(VAR_11, VAR_12, VAR_7),
        VAR_1,
        &VAR_12->filter_state,
        VAR_5);


 FUNC_3(VAR_11, &VAR_12->rss_conf_obj, VAR_14, VAR_13->cid,
      VAR_15, VAR_15,
      FUNC_6(VAR_11, VAR_12, VAR_8),
      FUNC_7(VAR_11, VAR_12, VAR_8),
      VAR_2,
      &VAR_12->filter_state,
      VAR_5);

 VAR_12->leading_rss = VAR_14;
 VAR_13->is_leading = 1;
 VAR_13->sp_initialized = 1;
}
