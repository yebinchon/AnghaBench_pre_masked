
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k_pci_pipe {int buf_sz; struct ath10k_ce_pipe* ce_hdl; struct ath10k* hif_ce_state; } ;
struct ath10k_ce_ring {int nentries; struct sk_buff** per_transfer_context; } ;
struct ath10k_ce_pipe {struct ath10k_ce_ring* src_ring; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct ath10k_pci_pipe *VAR_0)
{
 struct ath10k *VAR_1;
 struct ath10k_ce_pipe *VAR_2;
 struct ath10k_ce_ring *VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5;

 VAR_1 = VAR_0->hif_ce_state;
 VAR_2 = VAR_0->ce_hdl;
 VAR_3 = VAR_2->src_ring;

 if (!VAR_3)
  return;

 if (!VAR_0->buf_sz)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3->nentries; VAR_5++) {
  VAR_4 = VAR_3->per_transfer_context[VAR_5];
  if (!VAR_4)
   continue;

  VAR_3->per_transfer_context[VAR_5] = ((void*)0);

  FUNC_0(VAR_1, VAR_4);
 }
}
