
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wsm_tx {int flags; int ht_tx_parameters; int max_tx_rate; } ;
struct TYPE_5__ {int rate_id; } ;
struct cw1200_txinfo {TYPE_4__* rate; TYPE_3__* tx_info; TYPE_1__ txpriv; } ;
struct cw1200_common {int tx_policy_upload_work; int workqueue; int ht_info; } ;
struct TYPE_8__ {int flags; int hw_value; } ;
struct TYPE_6__ {int * rates; } ;
struct TYPE_7__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct cw1200_common*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct cw1200_common*,int *,int ,int*) ;
 int FUNC_8 (struct cw1200_common*) ;
 int FUNC_9 (struct cw1200_common*) ;

__attribute__((used)) static int
FUNC_10(struct cw1200_common *VAR_6,
   struct cw1200_txinfo *VAR_7,
   struct wsm_tx *VAR_8)
{
 bool VAR_9 = 0;

 VAR_7->txpriv.rate_id = FUNC_7(VAR_6,
  VAR_7->tx_info->control.rates, VAR_2,
  &VAR_9);
 if (VAR_7->txpriv.rate_id == VAR_0)
  return -VAR_1;

 VAR_8->flags |= VAR_7->txpriv.rate_id << 4;

 VAR_7->rate = FUNC_1(VAR_6,
  &VAR_7->tx_info->control.rates[0]),
 VAR_8->max_tx_rate = VAR_7->rate->hw_value;
 if (VAR_7->rate->flags & VAR_3) {
  if (FUNC_2(&VAR_6->ht_info))
   VAR_8->ht_tx_parameters |=
    FUNC_0(VAR_4);
  else
   VAR_8->ht_tx_parameters |=
    FUNC_0(VAR_5);
 }

 if (VAR_9) {
  FUNC_5("[TX] TX policy renew.\n");




  FUNC_8(VAR_6);
  FUNC_3(VAR_6);
  if (FUNC_6(VAR_6->workqueue,
          &VAR_6->tx_policy_upload_work) <= 0) {
   FUNC_4(VAR_6);
   FUNC_9(VAR_6);
  }
 }
 return 0;
}
