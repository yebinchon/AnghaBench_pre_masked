
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct ath10k_pci_pipe {int buf_sz; struct ath10k_ce_pipe* ce_hdl; struct ath10k* hif_ce_state; } ;
struct ath10k_ce_ring {int nentries; struct sk_buff** per_transfer_context; } ;
struct ath10k_ce_pipe {struct ath10k_ce_ring* dest_ring; } ;
struct ath10k {int dev; } ;
struct TYPE_2__ {int paddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct ath10k_pci_pipe *VAR_1)
{
 struct ath10k *VAR_2;
 struct ath10k_ce_pipe *VAR_3;
 struct ath10k_ce_ring *VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_2 = VAR_1->hif_ce_state;
 VAR_3 = VAR_1->ce_hdl;
 VAR_4 = VAR_3->dest_ring;

 if (!VAR_4)
  return;

 if (!VAR_1->buf_sz)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_4->nentries; VAR_6++) {
  VAR_5 = VAR_4->per_transfer_context[VAR_6];
  if (!VAR_5)
   continue;

  VAR_4->per_transfer_context[VAR_6] = ((void*)0);

  FUNC_2(VAR_2->dev, FUNC_0(VAR_5)->paddr,
     VAR_5->len + FUNC_3(VAR_5),
     VAR_0);
  FUNC_1(VAR_5);
 }
}
