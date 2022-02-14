
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct p54_common {scalar_t__ beacon_req_id; int beacon_comp; int tx_stats_lock; TYPE_1__* tx_stats; } ;
struct TYPE_2__ {int len; } ;


 size_t FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 size_t VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct p54_common*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct p54_common *VAR_1,
           struct sk_buff *VAR_2)
{
 if (FUNC_2(VAR_2)) {
  unsigned long VAR_3;

  FUNC_5(&VAR_1->tx_stats_lock, VAR_3);
  VAR_1->tx_stats[FUNC_0(VAR_2)].len--;
  FUNC_6(&VAR_1->tx_stats_lock, VAR_3);

  if (FUNC_7(FUNC_0(VAR_2) == VAR_0)) {
   if (VAR_1->beacon_req_id == FUNC_1(VAR_2)) {

    VAR_1->beacon_req_id = 0;
   }
   FUNC_3(&VAR_1->beacon_comp);
  }
 }
 FUNC_4(VAR_1);
}
