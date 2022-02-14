
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct htt_msdu_ext_desc {int dummy; } ;
struct TYPE_4__ {int * vaddr_desc_32; int paddr; } ;
struct ath10k_htt {int max_num_pending_tx; TYPE_2__ frag_desc; TYPE_1__* ar; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,size_t,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ath10k_htt *VAR_0)
{
 size_t VAR_1;

 if (!VAR_0->frag_desc.vaddr_desc_32)
  return;

 VAR_1 = VAR_0->max_num_pending_tx *
   sizeof(struct htt_msdu_ext_desc);

 FUNC_0(VAR_0->ar->dev,
     VAR_1,
     VAR_0->frag_desc.vaddr_desc_32,
     VAR_0->frag_desc.paddr);

 VAR_0->frag_desc.vaddr_desc_32 = ((void*)0);
}
