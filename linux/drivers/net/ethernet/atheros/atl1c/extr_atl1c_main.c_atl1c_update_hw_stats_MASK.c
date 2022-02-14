
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {unsigned long rx_ok; unsigned long tx_ok; } ;
struct atl1c_adapter {int hw; TYPE_1__ hw_stats; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct atl1c_adapter *VAR_4)
{
 u16 VAR_5 = 0;
 unsigned long *VAR_6 = ((void*)0);
 u32 VAR_7;


 VAR_5 = VAR_0;
 VAR_6 = &VAR_4->hw_stats.rx_ok;
 while (VAR_5 <= VAR_1) {
  FUNC_0(&VAR_4->hw, VAR_5, &VAR_7);
  *VAR_6 += VAR_7;
  VAR_6++;
  VAR_5 += 4;
 }

 VAR_5 = VAR_2;
 VAR_6 = &VAR_4->hw_stats.tx_ok;
 while (VAR_5 <= VAR_3) {
  FUNC_0(&VAR_4->hw, VAR_5, &VAR_7);
  *VAR_6 += VAR_7;
  VAR_6++;
  VAR_5 += 4;
 }
}
