
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct ath10k_mgmt_tx_pkt_addr {int paddr; struct sk_buff* vaddr; } ;
struct ath10k {int hw; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(int VAR_2, void *VAR_3,
            void *VAR_4)
{
 struct ath10k_mgmt_tx_pkt_addr *VAR_5 = VAR_3;
 struct ath10k *VAR_6 = VAR_4;
 struct sk_buff *VAR_7;

 FUNC_0(VAR_6, VAR_0,
     "force cleanup mgmt msdu_id %hu\n", VAR_2);

 VAR_7 = VAR_5->vaddr;
 FUNC_1(VAR_6->dev, VAR_5->paddr,
    VAR_7->len, VAR_1);
 FUNC_2(VAR_6->hw, VAR_7);

 return 0;
}
