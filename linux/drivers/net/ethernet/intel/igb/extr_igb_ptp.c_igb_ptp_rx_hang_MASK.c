
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {unsigned long last_rx_ptp_check; unsigned long last_rx_timestamp; TYPE_1__* pdev; int rx_hwtstamp_cleared; struct e1000_hw hw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;

void FUNC_4(struct igb_adapter *VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8 = FUNC_1(VAR_1);
 unsigned long VAR_9;


 if (VAR_7->mac.type != VAR_4)
  return;




 if (!(VAR_8 & VAR_2)) {
  VAR_6->last_rx_ptp_check = VAR_5;
  return;
 }


 VAR_9 = VAR_6->last_rx_ptp_check;
 if (FUNC_2(VAR_6->last_rx_timestamp, VAR_9))
  VAR_9 = VAR_6->last_rx_timestamp;


 if (FUNC_3(VAR_9 + 5 * VAR_3)) {
  FUNC_1(VAR_0);
  VAR_6->last_rx_ptp_check = VAR_5;
  VAR_6->rx_hwtstamp_cleared++;
  FUNC_0(&VAR_6->pdev->dev, "clearing Rx timestamp hang\n");
 }
}
