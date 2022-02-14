
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrm_func_cfg_input {int enables; void* num_vnics; void* num_stat_ctxs; void* num_rsscos_ctxs; void* num_hw_ring_grps; void* num_cmpl_rings; void* num_msix; void* num_rx_rings; void* num_tx_rings; void* fid; } ;
struct bnxt {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bnxt*,struct hwrm_func_cfg_input*,int ,int,int) ;
 scalar_t__ FUNC_3 (struct bnxt*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct bnxt *VAR_11, struct hwrm_func_cfg_input *VAR_12,
        int VAR_13, int VAR_14, int VAR_15,
        int VAR_16, int VAR_17, int VAR_18)
{
 u32 VAR_19 = 0;

 FUNC_2(VAR_11, VAR_12, VAR_10, -1, -1);
 VAR_12->fid = FUNC_4(0xffff);
 VAR_19 |= VAR_13 ? VAR_8 : 0;
 VAR_12->num_tx_rings = FUNC_4(VAR_13);
 if (FUNC_0(VAR_11)) {
  VAR_19 |= VAR_14 ? VAR_6 : 0;
  VAR_19 |= VAR_17 ? VAR_7 : 0;
  if (VAR_11->flags & VAR_0) {
   VAR_19 |= VAR_16 ? VAR_4 : 0;
   VAR_19 |= VAR_13 + VAR_15 ?
       VAR_2 : 0;
   VAR_19 |= VAR_14 ?
    VAR_5 : 0;
  } else {
   VAR_19 |= VAR_16 ?
       VAR_2 : 0;
   VAR_19 |= VAR_15 ?
       VAR_3 |
       VAR_5 : 0;
  }
  VAR_19 |= VAR_18 ? VAR_9 : 0;

  VAR_12->num_rx_rings = FUNC_4(VAR_14);
  if (VAR_11->flags & VAR_0) {
   VAR_12->num_cmpl_rings = FUNC_4(VAR_13 + VAR_15);
   VAR_12->num_msix = FUNC_4(VAR_16);
   VAR_12->num_rsscos_ctxs =
    FUNC_4(FUNC_1(VAR_15, 64));
  } else {
   VAR_12->num_cmpl_rings = FUNC_4(VAR_16);
   VAR_12->num_hw_ring_grps = FUNC_4(VAR_15);
   VAR_12->num_rsscos_ctxs = FUNC_4(1);
   if (!(VAR_11->flags & VAR_1) &&
       FUNC_3(VAR_11))
    VAR_12->num_rsscos_ctxs =
     FUNC_4(VAR_15 + 1);
  }
  VAR_12->num_stat_ctxs = FUNC_4(VAR_17);
  VAR_12->num_vnics = FUNC_4(VAR_18);
 }
 VAR_12->enables = FUNC_5(VAR_19);
}
