
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sky2_port {int dummy; } ;
struct sky2_hw {struct net_device** dev; } ;
struct TYPE_2__ {int tx_fifo_errors; int rx_fifo_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_10 ;
 int FUNC_1 (struct sky2_hw*,unsigned int,int ) ;
 int VAR_11 ;
 struct sky2_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sky2_port*,int ,struct net_device*,char*,int) ;
 int FUNC_4 (struct sky2_hw*,int ) ;
 int FUNC_5 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct sky2_hw *VAR_12, unsigned VAR_13)
{
 struct net_device *VAR_14 = VAR_12->dev[VAR_13];
 struct sky2_port *VAR_15 = FUNC_2(VAR_14);
 u8 VAR_16 = FUNC_4(VAR_12, FUNC_0(VAR_13, VAR_0));

 FUNC_3(VAR_15, VAR_11, VAR_14, "mac interrupt status 0x%x\n", VAR_16);

 if (VAR_16 & VAR_3)
  FUNC_1(VAR_12, VAR_13, VAR_7);

 if (VAR_16 & VAR_5)
  FUNC_1(VAR_12, VAR_13, VAR_8);

 if (VAR_16 & VAR_4) {
  ++VAR_14->stats.rx_fifo_errors;
  FUNC_5(VAR_12, FUNC_0(VAR_13, VAR_9), VAR_1);
 }

 if (VAR_16 & VAR_6) {
  ++VAR_14->stats.tx_fifo_errors;
  FUNC_5(VAR_12, FUNC_0(VAR_13, VAR_10), VAR_2);
 }
}
