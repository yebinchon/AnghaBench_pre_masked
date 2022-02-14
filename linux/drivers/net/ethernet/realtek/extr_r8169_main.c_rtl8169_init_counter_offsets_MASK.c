
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inited; int tx_aborted; int tx_multi_collision; int tx_errors; } ;
struct rtl8169_private {TYPE_1__ tc_offset; struct rtl8169_counters* counters; } ;
struct rtl8169_counters {int tx_aborted; int tx_multi_collision; int tx_errors; } ;


 scalar_t__ FUNC_0 (struct rtl8169_private*) ;
 scalar_t__ FUNC_1 (struct rtl8169_private*) ;

__attribute__((used)) static bool FUNC_2(struct rtl8169_private *VAR_0)
{
 struct rtl8169_counters *VAR_1 = VAR_0->counters;
 bool VAR_2 = 0;
 if (VAR_0->tc_offset.inited)
  return 1;


 if (FUNC_0(VAR_0))
  VAR_2 = 1;

 if (FUNC_1(VAR_0))
  VAR_2 = 1;

 VAR_0->tc_offset.tx_errors = VAR_1->tx_errors;
 VAR_0->tc_offset.tx_multi_collision = VAR_1->tx_multi_collision;
 VAR_0->tc_offset.tx_aborted = VAR_1->tx_aborted;
 VAR_0->tc_offset.inited = 1;

 return VAR_2;
}
