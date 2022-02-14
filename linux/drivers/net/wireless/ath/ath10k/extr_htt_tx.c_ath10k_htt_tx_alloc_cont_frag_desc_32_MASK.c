
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct htt_msdu_ext_desc {int dummy; } ;
struct TYPE_4__ {size_t size; int vaddr_desc_32; int paddr; } ;
struct ath10k_htt {int max_num_pending_tx; TYPE_2__ frag_desc; struct ath10k* ar; } ;
struct TYPE_3__ {int continuous_frag_desc; } ;
struct ath10k {int dev; TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*) ;
 int FUNC_1 (int ,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct ath10k_htt *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;
 size_t VAR_4;

 if (!VAR_3->hw_params.continuous_frag_desc)
  return 0;

 VAR_4 = VAR_2->max_num_pending_tx *
   sizeof(struct htt_msdu_ext_desc);
 VAR_2->frag_desc.vaddr_desc_32 = FUNC_1(VAR_3->dev, VAR_4,
         &VAR_2->frag_desc.paddr,
         VAR_1);
 if (!VAR_2->frag_desc.vaddr_desc_32) {
  FUNC_0(VAR_3, "failed to alloc fragment desc memory\n");
  return -VAR_0;
 }
 VAR_2->frag_desc.size = VAR_4;

 return 0;
}
