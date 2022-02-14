
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u16 ;
struct rvu_pfvf {int tx_chan_cnt; int rx_chan_cnt; int tx_chan_base; int rx_chan_base; int mac_addr; TYPE_2__* nix_qints_ctx; TYPE_2__* cq_ints_ctx; TYPE_2__* cq_ctx; void* cq_bmap; TYPE_2__* sq_ctx; void* sq_bmap; TYPE_2__* rq_ctx; void* rq_bmap; int nixlf; } ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {scalar_t__ addr; } ;
struct rvu {int dev; struct rvu_hwinfo* hw; } ;
struct nix_lf_alloc_rsp {int sqb_size; int lf_rx_stats; int lf_tx_stats; int qints; int cints; int lso_tsov6_idx; int lso_tsov4_idx; int tx_chan_cnt; int rx_chan_cnt; int tx_chan_base; int rx_chan_base; int mac_addr; } ;
struct TYPE_3__ {void* pcifunc; } ;
struct nix_lf_alloc_req {int rq_cnt; int sq_cnt; int cq_cnt; int npa_func; scalar_t__ sso_func; int rx_cfg; scalar_t__ xqe_sz; int rss_grps; int rss_sz; TYPE_1__ hdr; } ;
struct TYPE_4__ {scalar_t__ iova; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_15 (int ,char*,scalar_t__,int) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (void*) ;
 int FUNC_18 (struct rvu*,scalar_t__,int ) ;
 int FUNC_19 (int ) ;
 void* FUNC_20 (int,int,int ) ;
 int FUNC_21 (struct rvu*,struct rvu_pfvf*) ;
 int FUNC_22 (struct rvu*,void*,int,int) ;
 int FUNC_23 (struct rvu*,int,struct rvu_pfvf*,int,int ,int ,int) ;
 int FUNC_24 (int ,TYPE_2__**,int,int) ;
 int FUNC_25 (struct rvu*,int ,void*) ;
 int FUNC_26 (struct rvu*,struct rvu_block*,void*,int ) ;
 struct rvu_pfvf* FUNC_27 (struct rvu*,void*) ;
 int FUNC_28 (struct rvu*,struct rvu_block*,int) ;
 int FUNC_29 (struct rvu*,void*,int) ;
 int FUNC_30 (struct rvu*,int,int ) ;
 int FUNC_31 (struct rvu*,int,int ,int) ;

int FUNC_32(struct rvu *VAR_24,
      struct nix_lf_alloc_req *VAR_25,
      struct nix_lf_alloc_rsp *VAR_26)
{
 int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32 = 0;
 struct rvu_hwinfo *VAR_33 = VAR_24->hw;
 u16 VAR_34 = VAR_25->hdr.pcifunc;
 struct rvu_block *VAR_35;
 struct rvu_pfvf *VAR_36;
 u64 VAR_37, VAR_38;
 int VAR_39;

 if (!VAR_25->rq_cnt || !VAR_25->sq_cnt || !VAR_25->cq_cnt)
  return VAR_13;

 VAR_36 = FUNC_27(VAR_24, VAR_34);
 VAR_39 = FUNC_25(VAR_24, VAR_1, VAR_34);
 if (!VAR_36->nixlf || VAR_39 < 0)
  return VAR_11;

 VAR_35 = &VAR_33->block[VAR_39];
 VAR_27 = FUNC_26(VAR_24, VAR_35, VAR_34, 0);
 if (VAR_27 < 0)
  return VAR_11;


 if (VAR_25->npa_func) {

  if (VAR_25->npa_func == VAR_23)
   VAR_25->npa_func = VAR_34;
  if (!FUNC_18(VAR_24, VAR_25->npa_func, VAR_2))
   return VAR_16;
 }


 if (VAR_25->sso_func) {

  if (VAR_25->sso_func == VAR_23)
   VAR_25->sso_func = VAR_34;
  if (!FUNC_18(VAR_24, VAR_25->sso_func, VAR_3))
   return VAR_17;
 }






 if (VAR_25->rss_sz && (VAR_25->rss_sz > VAR_7 ||
       !FUNC_19(VAR_25->rss_sz)))
  return VAR_15;

 if (VAR_25->rss_sz &&
     (!VAR_25->rss_grps || VAR_25->rss_grps > VAR_6))
  return VAR_14;


 VAR_31 = FUNC_28(VAR_24, VAR_35, VAR_27);
 if (VAR_31) {
  FUNC_15(VAR_24->dev, "Failed to reset NIX%d LF%d\n",
   VAR_35->addr - VAR_0, VAR_27);
  return VAR_12;
 }

 VAR_38 = FUNC_30(VAR_24, VAR_39, VAR_10);


 VAR_29 = 1UL << ((VAR_38 >> 4) & 0xF);
 VAR_31 = FUNC_24(VAR_24->dev, &VAR_36->rq_ctx, VAR_25->rq_cnt, VAR_29);
 if (VAR_31)
  goto free_mem;

 VAR_36->rq_bmap = FUNC_20(VAR_25->rq_cnt, sizeof(long), VAR_5);
 if (!VAR_36->rq_bmap)
  goto free_mem;

 FUNC_31(VAR_24, VAR_39, FUNC_8(VAR_27),
      (u64)VAR_36->rq_ctx->iova);


 VAR_37 = FUNC_0(36) | (VAR_25->rq_cnt - 1);
 FUNC_31(VAR_24, VAR_39, FUNC_9(VAR_27), VAR_37);


 VAR_29 = 1UL << (VAR_38 & 0xF);
 VAR_31 = FUNC_24(VAR_24->dev, &VAR_36->sq_ctx, VAR_25->sq_cnt, VAR_29);
 if (VAR_31)
  goto free_mem;

 VAR_36->sq_bmap = FUNC_20(VAR_25->sq_cnt, sizeof(long), VAR_5);
 if (!VAR_36->sq_bmap)
  goto free_mem;

 FUNC_31(VAR_24, VAR_39, FUNC_11(VAR_27),
      (u64)VAR_36->sq_ctx->iova);
 VAR_37 = FUNC_0(36) | (VAR_25->sq_cnt - 1);
 FUNC_31(VAR_24, VAR_39, FUNC_12(VAR_27), VAR_37);


 VAR_29 = 1UL << ((VAR_38 >> 8) & 0xF);
 VAR_31 = FUNC_24(VAR_24->dev, &VAR_36->cq_ctx, VAR_25->cq_cnt, VAR_29);
 if (VAR_31)
  goto free_mem;

 VAR_36->cq_bmap = FUNC_20(VAR_25->cq_cnt, sizeof(long), VAR_5);
 if (!VAR_36->cq_bmap)
  goto free_mem;

 FUNC_31(VAR_24, VAR_39, FUNC_4(VAR_27),
      (u64)VAR_36->cq_ctx->iova);
 VAR_37 = FUNC_0(36) | (VAR_25->cq_cnt - 1);
 FUNC_31(VAR_24, VAR_39, FUNC_5(VAR_27), VAR_37);


 VAR_29 = 1UL << ((VAR_38 >> 12) & 0xF);
 VAR_31 = FUNC_23(VAR_24, VAR_39, VAR_36, VAR_27,
     VAR_25->rss_sz, VAR_25->rss_grps, VAR_29);
 if (VAR_31)
  goto free_mem;


 VAR_37 = FUNC_30(VAR_24, VAR_39, VAR_9);
 VAR_28 = (VAR_37 >> 24) & 0xFFF;
 VAR_29 = 1UL << ((VAR_38 >> 24) & 0xF);
 VAR_31 = FUNC_24(VAR_24->dev, &VAR_36->cq_ints_ctx, VAR_28, VAR_29);
 if (VAR_31)
  goto free_mem;

 FUNC_31(VAR_24, VAR_39, FUNC_2(VAR_27),
      (u64)VAR_36->cq_ints_ctx->iova);
 FUNC_31(VAR_24, VAR_39, FUNC_3(VAR_27), FUNC_0(36));


 VAR_37 = FUNC_30(VAR_24, VAR_39, VAR_9);
 VAR_28 = (VAR_37 >> 12) & 0xFFF;
 VAR_29 = 1UL << ((VAR_38 >> 20) & 0xF);
 VAR_31 = FUNC_24(VAR_24->dev, &VAR_36->nix_qints_ctx, VAR_28, VAR_29);
 if (VAR_31)
  goto free_mem;

 FUNC_31(VAR_24, VAR_39, FUNC_6(VAR_27),
      (u64)VAR_36->nix_qints_ctx->iova);
 FUNC_31(VAR_24, VAR_39, FUNC_7(VAR_27), FUNC_0(36));





 VAR_37 = (0x8100ULL << 16) | 0x88A8ULL;
 FUNC_31(VAR_24, VAR_39, FUNC_13(VAR_27), VAR_37);


 FUNC_31(VAR_24, VAR_39, FUNC_14(VAR_27), FUNC_0(0));


 if (VAR_25->npa_func)
  VAR_37 = VAR_25->npa_func;
 if (VAR_25->sso_func)
  VAR_37 |= (u64)VAR_25->sso_func << 16;

 VAR_37 |= (u64)VAR_25->xqe_sz << 33;
 FUNC_31(VAR_24, VAR_39, FUNC_1(VAR_27), VAR_37);


 FUNC_31(VAR_24, VAR_39, FUNC_10(VAR_27), VAR_25->rx_cfg);

 VAR_30 = FUNC_17(VAR_34) ? VAR_20 : VAR_19;
 VAR_31 = FUNC_22(VAR_24, VAR_34, VAR_30, VAR_27);
 if (VAR_31)
  goto free_mem;


 FUNC_29(VAR_24, VAR_34, VAR_27);

 goto exit;

free_mem:
 FUNC_21(VAR_24, VAR_36);
 VAR_32 = -VAR_4;

exit:

 FUNC_16(VAR_26->mac_addr, VAR_36->mac_addr);


 VAR_37 = FUNC_30(VAR_24, VAR_39, VAR_18);
 VAR_26->sqb_size = (VAR_37 >> 34) & 0xFFFF;
 VAR_26->rx_chan_base = VAR_36->rx_chan_base;
 VAR_26->tx_chan_base = VAR_36->tx_chan_base;
 VAR_26->rx_chan_cnt = VAR_36->rx_chan_cnt;
 VAR_26->tx_chan_cnt = VAR_36->tx_chan_cnt;
 VAR_26->lso_tsov4_idx = VAR_21;
 VAR_26->lso_tsov6_idx = VAR_22;

 VAR_37 = FUNC_30(VAR_24, VAR_39, VAR_8);
 VAR_26->lf_rx_stats = ((VAR_37 >> 32) & 0xFF);
 VAR_26->lf_tx_stats = ((VAR_37 >> 24) & 0xFF);

 VAR_37 = FUNC_30(VAR_24, VAR_39, VAR_9);
 VAR_26->qints = ((VAR_37 >> 12) & 0xFFF);
 VAR_26->cints = ((VAR_37 >> 24) & 0xFFF);
 return VAR_32;
}
