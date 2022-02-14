
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct skge_port {int netdev; } ;
struct skge_hw {struct net_device** dev; } ;
struct TYPE_2__ {int tx_fifo_errors; int rx_fifo_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct skge_port*,int ,int ,int ,char*,int) ;
 int FUNC_3 (struct skge_hw*,int ) ;
 int FUNC_4 (struct skge_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct skge_hw *VAR_9, int VAR_10)
{
 struct net_device *VAR_11 = VAR_9->dev[VAR_10];
 struct skge_port *VAR_12 = FUNC_1(VAR_11);
 u8 VAR_13 = FUNC_3(VAR_9, FUNC_0(VAR_10, VAR_0));

 FUNC_2(VAR_12, VAR_8, VAR_5, VAR_12->netdev,
       "mac interrupt status 0x%x\n", VAR_13);

 if (VAR_13 & VAR_3) {
  ++VAR_11->stats.rx_fifo_errors;
  FUNC_4(VAR_9, FUNC_0(VAR_10, VAR_6), VAR_1);
 }

 if (VAR_13 & VAR_4) {
  ++VAR_11->stats.tx_fifo_errors;
  FUNC_4(VAR_9, FUNC_0(VAR_10, VAR_7), VAR_2);
 }

}
