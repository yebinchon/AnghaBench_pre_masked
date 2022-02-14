
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci_pipe {scalar_t__ buf_sz; struct ath10k_ce_pipe* ce_hdl; struct ath10k* hif_ce_state; } ;
struct ath10k_pci {int rx_post_retry; } ;
struct ath10k_ce_pipe {int dest_ring; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k_ce_pipe*) ;
 int FUNC_1 (struct ath10k_pci_pipe*) ;
 struct ath10k_ce* FUNC_2 (struct ath10k*) ;
 struct ath10k_pci* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ath10k_pci_pipe *VAR_3)
{
 struct ath10k *VAR_4 = VAR_3->hif_ce_state;
 struct ath10k_pci *VAR_5 = FUNC_3(VAR_4);
 struct ath10k_ce *VAR_6 = FUNC_2(VAR_4);
 struct ath10k_ce_pipe *VAR_7 = VAR_3->ce_hdl;
 int VAR_8, VAR_9;

 if (VAR_3->buf_sz == 0)
  return;

 if (!VAR_7->dest_ring)
  return;

 FUNC_6(&VAR_6->ce_lock);
 VAR_9 = FUNC_0(VAR_7);
 FUNC_7(&VAR_6->ce_lock);

 while (VAR_9 >= 0) {
  VAR_8 = FUNC_1(VAR_3);
  if (VAR_8) {
   if (VAR_8 == -VAR_1)
    break;
   FUNC_4(VAR_4, "failed to post pci rx buf: %d\n", VAR_8);
   FUNC_5(&VAR_5->rx_post_retry, VAR_2 +
      VAR_0);
   break;
  }
  VAR_9--;
 }
}
