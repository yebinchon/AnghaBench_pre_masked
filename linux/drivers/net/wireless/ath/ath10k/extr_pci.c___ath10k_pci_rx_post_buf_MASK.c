
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ath10k_pci_pipe {int buf_sz; struct ath10k_ce_pipe* ce_hdl; struct ath10k* hif_ce_state; } ;
struct ath10k_ce_pipe {TYPE_1__* ops; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int paddr; } ;
struct TYPE_3__ {int (* ce_rx_post_buf ) (struct ath10k_ce_pipe*,struct sk_buff*,int ) ;} ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,char*) ;
 struct ath10k_ce* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*) ;
 struct sk_buff* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ath10k_ce_pipe*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct ath10k_pci_pipe *VAR_3)
{
 struct ath10k *VAR_4 = VAR_3->hif_ce_state;
 struct ath10k_ce *VAR_5 = FUNC_2(VAR_4);
 struct ath10k_ce_pipe *VAR_6 = VAR_3->ce_hdl;
 struct sk_buff *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_3->buf_sz);
 if (!VAR_7)
  return -VAR_2;

 FUNC_1((unsigned long)VAR_7->data & 3, "unaligned skb");

 VAR_8 = FUNC_6(VAR_4->dev, VAR_7->data,
          VAR_7->len + FUNC_9(VAR_7),
          VAR_0);
 if (FUNC_13(FUNC_7(VAR_4->dev, VAR_8))) {
  FUNC_3(VAR_4, "failed to dma map pci rx buf\n");
  FUNC_5(VAR_7);
  return -VAR_1;
 }

 FUNC_0(VAR_7)->paddr = VAR_8;

 FUNC_10(&VAR_5->ce_lock);
 VAR_9 = VAR_6->ops->ce_rx_post_buf(VAR_6, VAR_7, VAR_8);
 FUNC_11(&VAR_5->ce_lock);
 if (VAR_9) {
  FUNC_8(VAR_4->dev, VAR_8, VAR_7->len + FUNC_9(VAR_7),
     VAR_0);
  FUNC_5(VAR_7);
  return VAR_9;
 }

 return 0;
}
