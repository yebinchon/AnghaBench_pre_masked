
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct dmfe_board_info {int cr6_data; int NIC_capability; int PHY_reg4; scalar_t__ chip_id; int chip_revision; int dm910x_chk_mode; TYPE_2__ timer; scalar_t__ cr0_data; scalar_t__ first_in_callback; scalar_t__ wait_reset; scalar_t__ rx_avail_cnt; scalar_t__ tx_queue_cnt; scalar_t__ tx_packet_cnt; TYPE_1__* pdev; } ;
struct TYPE_4__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 struct dmfe_board_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int const,int ,int ,int ,struct net_device*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_12)
{
 struct dmfe_board_info *VAR_13 = FUNC_3(VAR_12);
 const int VAR_14 = VAR_13->pdev->irq;
 int VAR_15;

 FUNC_0(0, "dmfe_open", 0);

 VAR_15 = FUNC_5(VAR_14, VAR_10, VAR_6, VAR_12->name, VAR_12);
 if (VAR_15)
  return VAR_15;


 VAR_13->cr6_data = VAR_1 | VAR_9;
 VAR_13->tx_packet_cnt = 0;
 VAR_13->tx_queue_cnt = 0;
 VAR_13->rx_avail_cnt = 0;
 VAR_13->wait_reset = 0;

 VAR_13->first_in_callback = 0;
 VAR_13->NIC_capability = 0xf;
 VAR_13->PHY_reg4 = 0x1e0;


 if ( !VAR_8 || (VAR_13->chip_id == VAR_7) ||
  (VAR_13->chip_revision >= 0x30) ) {
      VAR_13->cr6_data |= VAR_4;
  VAR_13->cr0_data = VAR_0;
  VAR_13->dm910x_chk_mode=4;
  } else {
  VAR_13->cr6_data |= VAR_2;
  VAR_13->cr0_data = 0;
  VAR_13->dm910x_chk_mode = 1;
 }


 FUNC_2(VAR_12);


 FUNC_4(VAR_12);


 FUNC_6(&VAR_13->timer, VAR_11, 0);
 VAR_13->timer.expires = VAR_3 + VAR_5 * 2;
 FUNC_1(&VAR_13->timer);

 return 0;
}
