
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath10k_pci_pipe {struct ath10k_ce_pipe* ce_hdl; } ;
struct ath10k_pci {struct ath10k_pci_pipe* pipe_info; } ;
struct ath10k_hif_sg_item {int transfer_id; int len; int paddr; int transfer_context; int vaddr; } ;
struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int sw_index; unsigned int write_index; } ;
struct ath10k_ce_pipe {struct ath10k_ce_ring* src_ring; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath10k_ce_pipe*) ;
 struct ath10k_ce* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k_ce_pipe*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct ath10k*,int ,char*,int,int *,int ,int) ;
 int FUNC_5 (struct ath10k*,int ,int *,char*,int ,int ) ;
 struct ath10k_pci* FUNC_6 (struct ath10k*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct ath10k *VAR_4, u8 VAR_5,
    struct ath10k_hif_sg_item *VAR_6, int VAR_7)
{
 struct ath10k_pci *VAR_8 = FUNC_6(VAR_4);
 struct ath10k_ce *VAR_9 = FUNC_2(VAR_4);
 struct ath10k_pci_pipe *VAR_10 = &VAR_8->pipe_info[VAR_5];
 struct ath10k_ce_pipe *VAR_11 = VAR_10->ce_hdl;
 struct ath10k_ce_ring *VAR_12 = VAR_11->src_ring;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 int VAR_16, VAR_17 = 0;

 FUNC_7(&VAR_9->ce_lock);

 VAR_13 = VAR_12->nentries_mask;
 VAR_14 = VAR_12->sw_index;
 VAR_15 = VAR_12->write_index;

 if (FUNC_9(FUNC_0(VAR_13,
       VAR_15, VAR_14 - 1) < VAR_7)) {
  VAR_16 = -VAR_3;
  goto err;
 }

 for (VAR_17 = 0; VAR_17 < VAR_7 - 1; VAR_17++) {
  FUNC_4(VAR_4, VAR_0,
      "pci tx item %d paddr %pad len %d n_items %d\n",
      VAR_17, &VAR_6[VAR_17].paddr, VAR_6[VAR_17].len, VAR_7);
  FUNC_5(VAR_4, VAR_1, ((void*)0), "pci tx data: ",
    VAR_6[VAR_17].vaddr, VAR_6[VAR_17].len);

  VAR_16 = FUNC_3(VAR_11,
         VAR_6[VAR_17].transfer_context,
         VAR_6[VAR_17].paddr,
         VAR_6[VAR_17].len,
         VAR_6[VAR_17].transfer_id,
         VAR_2);
  if (VAR_16)
   goto err;
 }



 FUNC_4(VAR_4, VAR_0,
     "pci tx item %d paddr %pad len %d n_items %d\n",
     VAR_17, &VAR_6[VAR_17].paddr, VAR_6[VAR_17].len, VAR_7);
 FUNC_5(VAR_4, VAR_1, ((void*)0), "pci tx data: ",
   VAR_6[VAR_17].vaddr, VAR_6[VAR_17].len);

 VAR_16 = FUNC_3(VAR_11,
        VAR_6[VAR_17].transfer_context,
        VAR_6[VAR_17].paddr,
        VAR_6[VAR_17].len,
        VAR_6[VAR_17].transfer_id,
        0);
 if (VAR_16)
  goto err;

 FUNC_8(&VAR_9->ce_lock);
 return 0;

err:
 for (; VAR_17 > 0; VAR_17--)
  FUNC_1(VAR_11);

 FUNC_8(&VAR_9->ce_lock);
 return VAR_16;
}
