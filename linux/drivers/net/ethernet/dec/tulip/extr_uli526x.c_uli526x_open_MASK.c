
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; } ;
struct uli526x_board_info {int cr6_data; int link_failed; int NIC_capability; int PHY_reg4; TYPE_2__ timer; TYPE_1__* pdev; int cr0_data; scalar_t__ wait_reset; scalar_t__ rx_avail_cnt; scalar_t__ tx_packet_cnt; } ;
struct net_device {int name; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 struct uli526x_board_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_9)
{
 int VAR_10;
 struct uli526x_board_info *VAR_11 = FUNC_2(VAR_9);

 FUNC_0(0, "uli526x_open", 0);


 VAR_11->cr6_data = VAR_1 | VAR_6;
 VAR_11->tx_packet_cnt = 0;
 VAR_11->rx_avail_cnt = 0;
 VAR_11->link_failed = 1;
 FUNC_3(VAR_9);
 VAR_11->wait_reset = 0;

 VAR_11->NIC_capability = 0xf;
 VAR_11->PHY_reg4 = 0x1e0;


 VAR_11->cr6_data |= VAR_5;
 VAR_11->cr0_data = VAR_0;


 FUNC_7(VAR_9);

 VAR_10 = FUNC_5(VAR_11->pdev->irq, VAR_7, VAR_3,
     VAR_9->name, VAR_9);
 if (VAR_10)
  return VAR_10;


 FUNC_4(VAR_9);


 FUNC_6(&VAR_11->timer, VAR_8, 0);
 VAR_11->timer.expires = VAR_4 + VAR_2 * 2;
 FUNC_1(&VAR_11->timer);

 return 0;
}
