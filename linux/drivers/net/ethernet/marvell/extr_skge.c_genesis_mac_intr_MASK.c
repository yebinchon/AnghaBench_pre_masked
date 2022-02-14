
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct skge_port {int link_timer; int netdev; } ;
struct skge_hw {scalar_t__ phy_type; struct net_device** dev; } ;
struct TYPE_2__ {int tx_fifo_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct skge_port*,int ,int ,int ,char*,int) ;
 int FUNC_3 (struct skge_hw*,int) ;
 int FUNC_4 (struct skge_hw*,int,int ) ;
 int FUNC_5 (struct skge_hw*,int,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct skge_hw *VAR_9, int VAR_10)
{
 struct net_device *VAR_11 = VAR_9->dev[VAR_10];
 struct skge_port *VAR_12 = FUNC_1(VAR_11);
 u16 VAR_13 = FUNC_4(VAR_9, VAR_10, VAR_2);

 FUNC_2(VAR_12, VAR_7, VAR_0, VAR_12->netdev,
       "mac interrupt status 0x%x\n", VAR_13);

 if (VAR_9->phy_type == VAR_1 && (VAR_13 & VAR_3)) {
  FUNC_3(VAR_9, VAR_10);
  FUNC_0(&VAR_12->link_timer, VAR_8 + 1);
 }

 if (VAR_13 & VAR_4) {
  FUNC_5(VAR_9, VAR_10, VAR_6, VAR_5);
  ++VAR_11->stats.tx_fifo_errors;
 }
}
