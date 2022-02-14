
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* ep_tx_credits ) (struct ath10k*) ;} ;
struct ath10k_htc_ep {TYPE_1__ ep_ops; int tx_credits; } ;
struct ath10k_htc_credit_report {size_t eid; scalar_t__ credits; } ;
struct ath10k_htc {int tx_lock; struct ath10k* ar; struct ath10k_htc_ep* endpoint; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,size_t,scalar_t__,int ) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ath10k*) ;

__attribute__((used)) static void
FUNC_5(struct ath10k_htc *VAR_2,
     const struct ath10k_htc_credit_report *VAR_3,
     int VAR_4,
     enum ath10k_htc_ep_id VAR_5)
{
 struct ath10k *VAR_6 = VAR_2->ar;
 struct ath10k_htc_ep *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4 % sizeof(*VAR_3))
  FUNC_1(VAR_6, "Uneven credit report len %d", VAR_4);

 VAR_9 = VAR_4 / sizeof(*VAR_3);

 FUNC_2(&VAR_2->tx_lock);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++, VAR_3++) {
  if (VAR_3->eid >= VAR_1)
   break;

  VAR_7 = &VAR_2->endpoint[VAR_3->eid];
  VAR_7->tx_credits += VAR_3->credits;

  FUNC_0(VAR_6, VAR_0, "htc ep %d got %d credits (total %d)\n",
      VAR_3->eid, VAR_3->credits, VAR_7->tx_credits);

  if (VAR_7->ep_ops.ep_tx_credits) {
   FUNC_3(&VAR_2->tx_lock);
   VAR_7->ep_ops.ep_tx_credits(VAR_2->ar);
   FUNC_2(&VAR_2->tx_lock);
  }
 }
 FUNC_3(&VAR_2->tx_lock);
}
