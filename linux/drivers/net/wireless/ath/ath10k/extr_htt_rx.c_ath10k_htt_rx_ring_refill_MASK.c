
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; scalar_t__ fill_cnt; scalar_t__ fill_level; } ;
struct ath10k_htt {TYPE_2__ rx_ring; } ;
struct TYPE_3__ {scalar_t__ dev_type; } ;
struct ath10k {TYPE_1__ bus_param; struct ath10k_htt htt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath10k_htt*,scalar_t__) ;
 int FUNC_1 (struct ath10k_htt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ath10k *VAR_1)
{
 struct ath10k_htt *VAR_2 = &VAR_1->htt;
 int VAR_3;

 if (VAR_1->bus_param.dev_type == VAR_0)
  return 0;

 FUNC_2(&VAR_2->rx_ring.lock);
 VAR_3 = FUNC_0(VAR_2, (VAR_2->rx_ring.fill_level -
           VAR_2->rx_ring.fill_cnt));

 if (VAR_3)
  FUNC_1(VAR_2);

 FUNC_3(&VAR_2->rx_ring.lock);

 return VAR_3;
}
