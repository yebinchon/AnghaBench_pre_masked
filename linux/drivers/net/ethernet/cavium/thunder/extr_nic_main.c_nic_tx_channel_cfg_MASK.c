
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
struct sq_cfg_msg {size_t sq_num; scalar_t__ sqs_mode; } ;
struct nicpf {size_t* pqs_vf; size_t** vf_sqs; int * vf_lmac_map; struct hw_info* hw; } ;
struct hw_info {int tl4_cnt; int bgx_cnt; int tl3_cnt; int chans_per_lmac; int chans_per_bgx; scalar_t__ tl1_per_bgx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (struct nicpf*,int,int) ;

__attribute__((used)) static void FUNC_3(struct nicpf *VAR_15, u8 VAR_16,
          struct sq_cfg_msg *VAR_17)
{
 struct hw_info *VAR_18 = VAR_15->hw;
 u32 VAR_19, VAR_20, VAR_21;
 u32 VAR_22, VAR_23, VAR_24;
 u32 VAR_25;
 u8 VAR_26 = VAR_17->sq_num;
 u8 VAR_27;
 int VAR_28;

 if (VAR_17->sqs_mode)
  VAR_27 = VAR_15->pqs_vf[VAR_16];
 else
  VAR_27 = VAR_16;

 VAR_19 = FUNC_0(VAR_15->vf_lmac_map[VAR_27]);
 VAR_20 = FUNC_1(VAR_15->vf_lmac_map[VAR_27]);


 VAR_25 = ((VAR_3 + 24) / 4);




 if (VAR_18->tl1_per_bgx) {
  VAR_24 = VAR_19 * (VAR_18->tl4_cnt / VAR_18->bgx_cnt);
  if (!VAR_17->sqs_mode) {
   VAR_24 += (VAR_20 * VAR_1);
  } else {
   for (VAR_28 = 0; VAR_28 < VAR_2; VAR_28++) {
    if (VAR_15->vf_sqs[VAR_27][VAR_28] == VAR_16)
     break;
   }
   VAR_24 += (VAR_0 * VAR_1);
   VAR_24 += (VAR_20 * VAR_1 * VAR_2);
   VAR_24 += (VAR_28 * VAR_1);
  }
 } else {
  VAR_24 = (VAR_16 * VAR_1);
 }
 VAR_24 += VAR_26;

 VAR_23 = VAR_24 / (VAR_18->tl4_cnt / VAR_18->tl3_cnt);
 FUNC_2(VAR_15, VAR_5 |
        ((u64)VAR_16 << VAR_13) |
        ((u32)VAR_26 << VAR_14), VAR_24);
 FUNC_2(VAR_15, VAR_12 | (VAR_24 << 3),
        ((u64)VAR_16 << 27) | ((u32)VAR_26 << 24) | VAR_25);

 FUNC_2(VAR_15, VAR_10 | (VAR_23 << 3), VAR_25);







 VAR_21 = (VAR_20 * VAR_18->chans_per_lmac) + (VAR_19 * VAR_18->chans_per_bgx);
 if (VAR_18->tl1_per_bgx)
  FUNC_2(VAR_15, VAR_11 | (VAR_23 << 3), VAR_21);
 else
  FUNC_2(VAR_15, VAR_11 | (VAR_23 << 3), 0);


 FUNC_2(VAR_15, VAR_4 | (VAR_21 << 3), 1);

 VAR_22 = VAR_23 >> 2;
 FUNC_2(VAR_15, VAR_9 | (VAR_22 << 3), VAR_22);
 FUNC_2(VAR_15, VAR_6 | (VAR_22 << 3), VAR_25);

 FUNC_2(VAR_15, VAR_7 | (VAR_22 << 3), 0x00);







 if (!VAR_18->tl1_per_bgx)
  FUNC_2(VAR_15, VAR_8 | (VAR_22 << 3),
         VAR_20 + (VAR_19 * VAR_0));
}
