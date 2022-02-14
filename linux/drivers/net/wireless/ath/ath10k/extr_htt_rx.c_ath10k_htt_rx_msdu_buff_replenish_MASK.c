
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fill_level; int fill_cnt; int lock; int refill_retry_timer; } ;
struct ath10k_htt {TYPE_1__ rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k_htt*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ath10k_htt *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 FUNC_4(&VAR_5->rx_ring.lock);
 VAR_7 = VAR_5->rx_ring.fill_level - VAR_5->rx_ring.fill_cnt;
 VAR_8 = FUNC_1(VAR_0, VAR_7);
 VAR_7 -= VAR_8;
 VAR_6 = FUNC_0(VAR_5, VAR_8);
 if (VAR_6 == -VAR_1) {






  FUNC_2(&VAR_5->rx_ring.refill_retry_timer, VAR_4 +
     FUNC_3(VAR_3));
 } else if (VAR_7 > 0) {
  FUNC_2(&VAR_5->rx_ring.refill_retry_timer, VAR_4 +
     FUNC_3(VAR_2));
 }
 FUNC_5(&VAR_5->rx_ring.lock);
}
