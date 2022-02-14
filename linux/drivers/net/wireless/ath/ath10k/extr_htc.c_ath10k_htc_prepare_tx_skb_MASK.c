
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ath10k_htc_hdr {scalar_t__ seq_no; int flags; int len; int eid; } ;
struct ath10k_htc_ep {TYPE_1__* htc; int seq_no; scalar_t__ tx_credit_flow_enabled; int eid; } ;
struct TYPE_2__ {int tx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ath10k_htc_hdr*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ath10k_htc_ep *VAR_1,
          struct sk_buff *VAR_2)
{
 struct ath10k_htc_hdr *VAR_3;

 VAR_3 = (struct ath10k_htc_hdr *)VAR_2->data;
 FUNC_1(VAR_3, 0, sizeof(struct ath10k_htc_hdr));

 VAR_3->eid = VAR_1->eid;
 VAR_3->len = FUNC_0(VAR_2->len - sizeof(*VAR_3));
 VAR_3->flags = 0;
 if (VAR_1->tx_credit_flow_enabled)
  VAR_3->flags |= VAR_0;

 FUNC_2(&VAR_1->htc->tx_lock);
 VAR_3->seq_no = VAR_1->seq_no++;
 FUNC_3(&VAR_1->htc->tx_lock);
}
