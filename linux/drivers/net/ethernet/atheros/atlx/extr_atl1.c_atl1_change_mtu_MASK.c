
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_2__ {int max_frame_size; int tx_jumbo_task_th; int rx_jumbo_th; } ;
struct atl1_adapter {int rx_buffer_len; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atl1_adapter*) ;
 int FUNC_1 (struct atl1_adapter*) ;
 struct atl1_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4)
{
 struct atl1_adapter *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = VAR_4 + VAR_1 + VAR_0 + VAR_2;

 VAR_5->hw.max_frame_size = VAR_6;
 VAR_5->hw.tx_jumbo_task_th = (VAR_6 + 7) >> 3;
 VAR_5->rx_buffer_len = (VAR_6 + 7) & ~7;
 VAR_5->hw.rx_jumbo_th = VAR_5->rx_buffer_len / 8;

 VAR_3->mtu = VAR_4;
 if (FUNC_3(VAR_3)) {
  FUNC_0(VAR_5);
  FUNC_1(VAR_5);
 }

 return 0;
}
