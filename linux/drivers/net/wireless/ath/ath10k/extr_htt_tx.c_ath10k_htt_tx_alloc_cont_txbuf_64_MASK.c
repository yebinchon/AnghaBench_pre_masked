
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_htt_txbuf_64 {int dummy; } ;
struct TYPE_2__ {size_t size; int vaddr_txbuff_64; int paddr; } ;
struct ath10k_htt {int max_num_pending_tx; TYPE_1__ txbuf; struct ath10k* ar; } ;
struct ath10k {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct ath10k_htt *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;
 size_t VAR_4;

 VAR_4 = VAR_2->max_num_pending_tx *
   sizeof(struct ath10k_htt_txbuf_64);

 VAR_2->txbuf.vaddr_txbuff_64 = FUNC_0(VAR_3->dev, VAR_4,
       &VAR_2->txbuf.paddr,
       VAR_1);
 if (!VAR_2->txbuf.vaddr_txbuff_64)
  return -VAR_0;

 VAR_2->txbuf.size = VAR_4;

 return 0;
}
