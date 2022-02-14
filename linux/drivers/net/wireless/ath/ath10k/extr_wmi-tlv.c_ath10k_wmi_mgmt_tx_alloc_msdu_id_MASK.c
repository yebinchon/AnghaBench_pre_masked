
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k_wmi {int mgmt_max_num_pending_tx; int mgmt_pending_tx; } ;
struct ath10k_mgmt_tx_pkt_addr {int paddr; struct sk_buff* vaddr; } ;
struct ath10k {int data_lock; struct ath10k_wmi wmi; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 int FUNC_1 (int *,struct ath10k_mgmt_tx_pkt_addr*,int ,int ,int ) ;
 struct ath10k_mgmt_tx_pkt_addr* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct ath10k *VAR_3, struct sk_buff *VAR_4,
     dma_addr_t VAR_5)
{
 struct ath10k_wmi *VAR_6 = &VAR_3->wmi;
 struct ath10k_mgmt_tx_pkt_addr *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->vaddr = VAR_4;
 VAR_7->paddr = VAR_5;

 FUNC_3(&VAR_3->data_lock);
 VAR_8 = FUNC_1(&VAR_6->mgmt_pending_tx, VAR_7, 0,
   VAR_6->mgmt_max_num_pending_tx, VAR_2);
 FUNC_4(&VAR_3->data_lock);

 FUNC_0(VAR_3, VAR_0, "wmi mgmt tx alloc msdu_id ret %d\n", VAR_8);
 return VAR_8;
}
