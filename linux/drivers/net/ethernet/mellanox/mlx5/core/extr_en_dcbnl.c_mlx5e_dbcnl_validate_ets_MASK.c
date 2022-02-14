
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ieee_ets {scalar_t__* prio_tc; scalar_t__* tc_tsa; scalar_t__* tc_tx_bw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4,
        struct ieee_ets *VAR_5,
        bool VAR_6)
{
 bool VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_5->prio_tc[VAR_9] >= VAR_3) {
   FUNC_0(VAR_4,
       "Failed to validate ETS: priority value greater than max(%d)\n",
        VAR_3);
   return -VAR_0;
  }
 }


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_5->tc_tsa[VAR_9] == VAR_2) {
   VAR_7 = 1;
   VAR_8 += VAR_5->tc_tx_bw[VAR_9];
  }
 }

 if (VAR_7 && VAR_8 != 100) {
  if (VAR_8 || (!VAR_8 && !VAR_6))
   FUNC_0(VAR_4,
       "Failed to validate ETS: BW sum is illegal\n");
  return -VAR_0;
 }
 return 0;
}
