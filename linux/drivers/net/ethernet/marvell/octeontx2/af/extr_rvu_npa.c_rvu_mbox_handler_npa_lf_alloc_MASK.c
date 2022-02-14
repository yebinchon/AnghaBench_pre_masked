
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu_pfvf {TYPE_2__* npa_qints_ctx; TYPE_2__* aura_ctx; void* pool_bmap; TYPE_2__* pool_ctx; void* aura_bmap; int npalf; } ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {int dummy; } ;
struct rvu {int dev; struct rvu_hwinfo* hw; } ;
struct npa_lf_alloc_rsp {int stack_pg_ptrs; int stack_pg_bytes; int qints; } ;
struct TYPE_3__ {int pcifunc; } ;
struct npa_lf_alloc_req {int aura_sz; int nr_pools; TYPE_1__ hdr; } ;
struct TYPE_4__ {scalar_t__ iova; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,char*,int) ;
 void* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct rvu*,struct rvu_pfvf*) ;
 int FUNC_9 (int ,TYPE_2__**,int,int) ;
 int FUNC_10 (struct rvu*,int ,int ) ;
 int FUNC_11 (struct rvu*,struct rvu_block*,int ,int ) ;
 struct rvu_pfvf* FUNC_12 (struct rvu*,int ) ;
 int FUNC_13 (struct rvu*,struct rvu_block*,int) ;
 int FUNC_14 (struct rvu*,int,int ) ;
 int FUNC_15 (struct rvu*,int,int ,int) ;

int FUNC_16(struct rvu *VAR_10,
      struct npa_lf_alloc_req *VAR_11,
      struct npa_lf_alloc_rsp *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 = 0;
 struct rvu_hwinfo *VAR_18 = VAR_10->hw;
 u16 VAR_19 = VAR_11->hdr.pcifunc;
 struct rvu_block *VAR_20;
 struct rvu_pfvf *VAR_21;
 u64 VAR_22, VAR_23;
 int VAR_24;

 if (VAR_11->aura_sz > VAR_9 ||
     VAR_11->aura_sz == VAR_8 || !VAR_11->nr_pools)
  return VAR_7;

 VAR_21 = FUNC_12(VAR_10, VAR_19);
 VAR_24 = FUNC_10(VAR_10, VAR_0, VAR_19);
 if (!VAR_21->npalf || VAR_24 < 0)
  return VAR_5;

 VAR_20 = &VAR_18->block[VAR_24];
 VAR_13 = FUNC_11(VAR_10, VAR_20, VAR_19, 0);
 if (VAR_13 < 0)
  return VAR_5;


 VAR_16 = FUNC_13(VAR_10, VAR_20, VAR_13);
 if (VAR_16) {
  FUNC_6(VAR_10->dev, "Failed to reset NPALF%d\n", VAR_13);
  return VAR_6;
 }

 VAR_23 = FUNC_14(VAR_10, VAR_24, VAR_4);


 VAR_15 = 1UL << (VAR_23 & 0xF);
 VAR_16 = FUNC_9(VAR_10->dev, &VAR_21->aura_ctx,
    FUNC_5(VAR_11->aura_sz), VAR_15);
 if (VAR_16)
  goto free_mem;

 VAR_21->aura_bmap = FUNC_7(FUNC_5(VAR_11->aura_sz), sizeof(long),
      VAR_2);
 if (!VAR_21->aura_bmap)
  goto free_mem;


 VAR_15 = 1UL << ((VAR_23 >> 4) & 0xF);
 VAR_16 = FUNC_9(VAR_10->dev, &VAR_21->pool_ctx, VAR_11->nr_pools, VAR_15);
 if (VAR_16)
  goto free_mem;

 VAR_21->pool_bmap = FUNC_7(FUNC_5(VAR_11->aura_sz), sizeof(long),
      VAR_2);
 if (!VAR_21->pool_bmap)
  goto free_mem;


 VAR_22 = FUNC_14(VAR_10, VAR_24, VAR_3);
 VAR_14 = (VAR_22 >> 28) & 0xFFF;


 VAR_15 = 1UL << ((VAR_23 >> 8) & 0xF);
 VAR_16 = FUNC_9(VAR_10->dev, &VAR_21->npa_qints_ctx, VAR_14, VAR_15);
 if (VAR_16)
  goto free_mem;

 VAR_22 = FUNC_14(VAR_10, VAR_24, FUNC_1(VAR_13));

 VAR_22 &= ~(FUNC_0(34) - 1);

 VAR_22 |= (VAR_11->aura_sz << 16) | FUNC_0(34);
 FUNC_15(VAR_10, VAR_24, FUNC_1(VAR_13), VAR_22);


 FUNC_15(VAR_10, VAR_24, FUNC_2(VAR_13),
      (u64)VAR_21->aura_ctx->iova);


 FUNC_15(VAR_10, VAR_24, FUNC_4(VAR_13), FUNC_0(36));
 FUNC_15(VAR_10, VAR_24, FUNC_3(VAR_13),
      (u64)VAR_21->npa_qints_ctx->iova);

 goto exit;

free_mem:
 FUNC_8(VAR_10, VAR_21);
 VAR_17 = -VAR_1;

exit:

 VAR_22 = FUNC_14(VAR_10, VAR_24, VAR_3);
 VAR_12->stack_pg_ptrs = (VAR_22 >> 8) & 0xFF;
 VAR_12->stack_pg_bytes = VAR_22 & 0xFF;
 VAR_12->qints = (VAR_22 >> 28) & 0xFFF;
 return VAR_17;
}
