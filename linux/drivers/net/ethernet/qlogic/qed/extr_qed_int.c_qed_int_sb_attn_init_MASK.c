
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_sb_attn_info {int* parity_mask; scalar_t__ mfw_attn_addr; TYPE_1__* p_aeu_desc; int sb_phys; void* sb_attn; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int rel_pf_id; struct qed_sb_attn_info* p_sb_attn; } ;
struct aeu_invert_reg_bit {int flags; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct aeu_invert_reg_bit* bits; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int*,int ,int) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,struct aeu_invert_reg_bit*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_4,
     struct qed_ptt *VAR_5,
     void *VAR_6, dma_addr_t VAR_7)
{
 struct qed_sb_attn_info *VAR_8 = VAR_4->p_sb_attn;
 int VAR_9, VAR_10, VAR_11;

 VAR_8->sb_attn = VAR_6;
 VAR_8->sb_phys = VAR_7;


 VAR_8->p_aeu_desc = VAR_3;


 FUNC_2(VAR_8->parity_mask, 0, sizeof(u32) * VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {

  for (VAR_10 = 0, VAR_11 = 0; VAR_11 < 32; VAR_10++) {
   struct aeu_invert_reg_bit *VAR_12;

   VAR_12 = &VAR_3[VAR_9].bits[VAR_10];
   if (FUNC_3(VAR_4, VAR_12))
    VAR_8->parity_mask[VAR_9] |= 1 << VAR_11;

   VAR_11 += FUNC_0(VAR_12->flags);
  }
  FUNC_1(VAR_4, VAR_1,
      "Attn Mask [Reg %d]: 0x%08x\n",
      VAR_9, VAR_8->parity_mask[VAR_9]);
 }


 VAR_8->mfw_attn_addr = (VAR_4->rel_pf_id << 3) +
     VAR_0;

 FUNC_4(VAR_4, VAR_5);
}
