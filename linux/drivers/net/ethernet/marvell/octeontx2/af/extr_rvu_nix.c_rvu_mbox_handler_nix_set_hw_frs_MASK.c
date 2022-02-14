
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct rvu_hwinfo {int cgx_links; int lbk_links; int lmac_per_cgx; int sdp_links; } ;
struct rvu {int * pf2cgxlmac_map; int rsrc_lock; struct rvu_hwinfo* hw; } ;
struct TYPE_4__ {int max; } ;
struct nix_txsch {int * pfvf_map; TYPE_2__ schq; } ;
struct nix_hw {struct nix_txsch* txsch; } ;
struct TYPE_3__ {scalar_t__ pcifunc; } ;
struct nix_frs_cfg {int maxlen; int minlen; scalar_t__ sdp_link; scalar_t__ update_minlen; int update_smq; TYPE_1__ hdr; } ;
struct msg_rsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 size_t VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct nix_hw* FUNC_6 (struct rvu_hwinfo*,int) ;
 scalar_t__ FUNC_7 (struct rvu*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct rvu*,struct nix_frs_cfg*,scalar_t__) ;
 int FUNC_11 (int,struct rvu*) ;
 int FUNC_12 (struct rvu*,int ,scalar_t__) ;
 int FUNC_13 (int ,int*,int*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct rvu*,int,int ) ;
 int FUNC_16 (struct rvu*,int,int ,int) ;

int FUNC_17(struct rvu *VAR_9, struct nix_frs_cfg *VAR_10,
        struct msg_rsp *VAR_11)
{
 struct rvu_hwinfo *VAR_12 = VAR_9->hw;
 u16 VAR_13 = VAR_10->hdr.pcifunc;
 int VAR_14 = FUNC_14(VAR_13);
 int VAR_15, VAR_16, VAR_17 = -1;
 struct nix_txsch *VAR_18;
 u64 VAR_19, VAR_20;
 struct nix_hw *VAR_21;
 u8 VAR_22 = 0, VAR_23 = 0;

 VAR_15 = FUNC_12(VAR_9, VAR_0, VAR_13);
 if (VAR_15 < 0)
  return VAR_5;

 VAR_21 = FUNC_6(VAR_9->hw, VAR_15);
 if (!VAR_21)
  return -VAR_2;

 if (!VAR_10->sdp_link && VAR_10->maxlen > VAR_3)
  return VAR_6;

 if (VAR_10->update_minlen && VAR_10->minlen < VAR_4)
  return VAR_6;


 if (!VAR_10->update_smq)
  goto rx_frscfg;


 VAR_18 = &VAR_21->txsch[VAR_8];
 FUNC_8(&VAR_9->rsrc_lock);
 for (VAR_16 = 0; VAR_16 < VAR_18->schq.max; VAR_16++) {
  if (FUNC_4(VAR_18->pfvf_map[VAR_16]) != VAR_13)
   continue;
  VAR_19 = FUNC_15(VAR_9, VAR_15, FUNC_1(VAR_16));
  VAR_19 = (VAR_19 & ~(0xFFFFULL << 8)) | ((u64)VAR_10->maxlen << 8);
  if (VAR_10->update_minlen)
   VAR_19 = (VAR_19 & ~0x7FULL) | ((u64)VAR_10->minlen & 0x7F);
  FUNC_16(VAR_9, VAR_15, FUNC_1(VAR_16), VAR_19);
 }
 FUNC_9(&VAR_9->rsrc_lock);

rx_frscfg:

 if (VAR_10->sdp_link) {
  if (!VAR_12->sdp_links)
   return VAR_7;
  VAR_17 = VAR_12->cgx_links + VAR_12->lbk_links;
  goto linkcfg;
 }


 if (FUNC_7(VAR_9, VAR_14)) {

  FUNC_13(VAR_9->pf2cgxlmac_map[VAR_14], &VAR_22, &VAR_23);
  VAR_17 = (VAR_22 * VAR_12->lmac_per_cgx) + VAR_23;
 } else if (VAR_14 == 0) {

  VAR_17 = VAR_12->cgx_links;
 }

 if (VAR_17 < 0)
  return VAR_7;

 FUNC_10(VAR_9, VAR_10, VAR_13);

linkcfg:
 VAR_19 = FUNC_15(VAR_9, VAR_15, FUNC_0(VAR_17));
 VAR_19 = (VAR_19 & ~(0xFFFFULL << 16)) | ((u64)VAR_10->maxlen << 16);
 if (VAR_10->update_minlen)
  VAR_19 = (VAR_19 & ~0xFFFFULL) | VAR_10->minlen;
 FUNC_16(VAR_9, VAR_15, FUNC_0(VAR_17), VAR_19);

 if (VAR_10->sdp_link || VAR_14 == 0)
  return 0;


 VAR_20 =
  VAR_1 / FUNC_5(FUNC_11(VAR_22, VAR_9));
 VAR_19 = FUNC_15(VAR_9, VAR_15, FUNC_3(VAR_17));
 VAR_19 &= ~(0xFFFFFULL << 12);
 VAR_19 |= ((VAR_20 - VAR_10->maxlen) / 16) << 12;
 FUNC_16(VAR_9, VAR_15, FUNC_3(VAR_17), VAR_19);
 FUNC_16(VAR_9, VAR_15, FUNC_2(VAR_17), VAR_19);

 return 0;
}
