
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ieee_ets {scalar_t__* tc_tsa; int* prio_tc; scalar_t__* tc_rx_bw; scalar_t__* tc_tx_bw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct ieee_ets *VAR_4)
{
 u8 VAR_5 = 0;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4->tc_tx_bw[VAR_6] || VAR_4->tc_rx_bw[VAR_6])
   return -VAR_0;
  if (VAR_4->tc_tsa[VAR_6] != VAR_2)
   return -VAR_0;
  if (VAR_4->prio_tc[VAR_6] > VAR_5)
   VAR_5 = VAR_4->prio_tc[VAR_6];
 }


 if (VAR_5)
  VAR_5++;

 if (VAR_5 > VAR_1)
  return -VAR_0;


 if (VAR_5 != FUNC_1(VAR_3)) {
  int VAR_7 = FUNC_0(VAR_3, VAR_5);
  if (VAR_7)
   return VAR_7;
 }


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_2(VAR_3, VAR_6, VAR_4->prio_tc[VAR_6]);

 return 0;
}
