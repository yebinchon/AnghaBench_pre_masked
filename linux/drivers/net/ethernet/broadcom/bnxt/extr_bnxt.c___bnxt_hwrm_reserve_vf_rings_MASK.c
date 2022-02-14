
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrm_func_vf_cfg_input {int enables; void* num_vnics; void* num_stat_ctxs; void* num_rsscos_ctxs; void* num_hw_ring_grps; void* num_cmpl_rings; void* num_rx_rings; void* num_tx_rings; void* num_l2_ctxs; } ;
struct bnxt {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_vf_cfg_input*,int ,int,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct bnxt *VAR_12,
        struct hwrm_func_vf_cfg_input *VAR_13, int VAR_14,
        int VAR_15, int VAR_16, int VAR_17,
        int VAR_18, int VAR_19)
{
 u32 VAR_20 = 0;

 FUNC_1(VAR_12, VAR_13, VAR_11, -1, -1);
 VAR_20 |= VAR_14 ? VAR_9 : 0;
 VAR_20 |= VAR_15 ? VAR_7 |
         VAR_6 : 0;
 VAR_20 |= VAR_18 ? VAR_8 : 0;
 if (VAR_12->flags & VAR_0) {
  VAR_20 |= VAR_14 + VAR_16 ?
      VAR_3 : 0;
 } else {
  VAR_20 |= VAR_17 ?
      VAR_3 : 0;
  VAR_20 |= VAR_16 ?
      VAR_4 : 0;
 }
 VAR_20 |= VAR_19 ? VAR_10 : 0;
 VAR_20 |= VAR_5;

 VAR_13->num_l2_ctxs = FUNC_2(VAR_1);
 VAR_13->num_tx_rings = FUNC_2(VAR_14);
 VAR_13->num_rx_rings = FUNC_2(VAR_15);
 if (VAR_12->flags & VAR_0) {
  VAR_13->num_cmpl_rings = FUNC_2(VAR_14 + VAR_16);
  VAR_13->num_rsscos_ctxs = FUNC_2(FUNC_0(VAR_16, 64));
 } else {
  VAR_13->num_cmpl_rings = FUNC_2(VAR_17);
  VAR_13->num_hw_ring_grps = FUNC_2(VAR_16);
  VAR_13->num_rsscos_ctxs = FUNC_2(VAR_2);
 }
 VAR_13->num_stat_ctxs = FUNC_2(VAR_18);
 VAR_13->num_vnics = FUNC_2(VAR_19);

 VAR_13->enables = FUNC_3(VAR_20);
}
