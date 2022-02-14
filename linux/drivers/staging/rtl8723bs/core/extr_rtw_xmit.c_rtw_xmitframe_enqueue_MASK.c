
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xmit_frame {int dummy; } ;
struct TYPE_2__ {int core_tx_enqueue; } ;
struct adapter {TYPE_1__ tx_logs; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct adapter*,struct xmit_frame*) ;

s32 FUNC_3(struct adapter *VAR_4, struct xmit_frame *VAR_5)
{
 FUNC_0(VAR_4->tx_logs.core_tx_enqueue);
 if (FUNC_2(VAR_4, VAR_5) == VAR_0) {
  FUNC_1(VAR_3, VAR_2,
    ("rtw_xmitframe_enqueue: drop xmit pkt for classifier fail\n"));

  return VAR_0;
 }

 return VAR_1;
}
