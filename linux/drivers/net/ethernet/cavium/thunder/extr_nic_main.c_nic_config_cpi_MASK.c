
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct nicpf {int* cpi_base; int* rssi_base; int pdev; int * vf_lmac_map; struct hw_info* hw; } ;
struct hw_info {size_t chans_per_lmac; size_t chans_per_bgx; size_t rss_ind_tbl_size; } ;
struct cpi_cfg_msg {size_t vf_id; scalar_t__ cpi_alg; int rq_cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct nicpf*,int,size_t) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nicpf *VAR_10, struct cpi_cfg_msg *VAR_11)
{
 struct hw_info *VAR_12 = VAR_10->hw;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17, VAR_18 = 0;
 u64 VAR_19, VAR_20, VAR_21, VAR_22;
 u8 VAR_23, VAR_24 = 0;

 VAR_13 = VAR_11->vf_id;
 VAR_14 = FUNC_0(VAR_10->vf_lmac_map[VAR_13]);
 VAR_15 = FUNC_1(VAR_10->vf_lmac_map[VAR_13]);

 VAR_16 = (VAR_15 * VAR_12->chans_per_lmac) + (VAR_14 * VAR_12->chans_per_bgx);
 VAR_19 = VAR_13 * VAR_4;
 VAR_21 = VAR_13 * VAR_12->rss_ind_tbl_size;


 FUNC_2(VAR_10, VAR_5 | (VAR_16 << 3),
        (1ull << 63) | (VAR_13 << 0));
 FUNC_2(VAR_10, VAR_6 | (VAR_16 << 3),
        ((u64)VAR_11->cpi_alg << 62) | (VAR_19 << 48));

 if (VAR_11->cpi_alg == VAR_1)
  VAR_18 = 1;
 else if (VAR_11->cpi_alg == VAR_2)
  VAR_18 = 8;
 else if (VAR_11->cpi_alg == VAR_3)
  VAR_18 = 16;
 else if (VAR_11->cpi_alg == VAR_0)
  VAR_18 = VAR_4;


 VAR_23 = VAR_11->vf_id;
 VAR_22 = VAR_21;
 for (; VAR_22 < (VAR_21 + VAR_11->rq_cnt); VAR_22++) {
  FUNC_2(VAR_10, VAR_9 | (VAR_22 << 3),
         (VAR_23 << 3) | VAR_24);
  VAR_24++;
 }

 VAR_22 = 0;
 VAR_20 = VAR_19;
 for (; VAR_20 < (VAR_19 + VAR_18); VAR_20++) {

  if (VAR_11->cpi_alg != VAR_0)
   VAR_17 = VAR_20 % VAR_18;
  else
   VAR_17 = VAR_20 % 8;


  if (FUNC_3(VAR_10->pdev)) {
   FUNC_2(VAR_10, VAR_7 | (VAR_20 << 3),
          (VAR_13 << 24) | (VAR_17 << 16) |
          (VAR_21 + VAR_22));
  } else {

   FUNC_2(VAR_10, VAR_7 | (VAR_20 << 3),
          (VAR_17 << 16));

   FUNC_2(VAR_10, VAR_8 | (VAR_20 << 3),
          (VAR_13 << 24) | (VAR_21 + VAR_22));
  }

  if ((VAR_22 + 1) >= VAR_11->rq_cnt)
   continue;

  if (VAR_11->cpi_alg == VAR_2)
   VAR_22++;
  else if (VAR_11->cpi_alg == VAR_3)
   VAR_22 = ((VAR_20 - VAR_19) & 0xe) >> 1;
  else if (VAR_11->cpi_alg == VAR_0)
   VAR_22 = ((VAR_20 - VAR_19) & 0x38) >> 3;
 }
 VAR_10->cpi_base[VAR_11->vf_id] = VAR_19;
 VAR_10->rssi_base[VAR_11->vf_id] = VAR_21;
}
