
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_local {int send_underrun; int send_cmd; } ;
struct TYPE_2__ {int rx_missed_errors; int collisions; int tx_aborted_errors; int tx_window_errors; int tx_heartbeat_errors; int tx_carrier_errors; int tx_errors; int tx_packets; } ;
struct net_device {int base_addr; TYPE_1__ stats; } ;
typedef int irqreturn_t ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct net_device*) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_local*,int ,struct net_device*,char*,...) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_13 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_14, void *VAR_15)
{
 struct net_device *VAR_16 = VAR_15;
 struct net_local *VAR_17;
 int VAR_18, VAR_19;

 VAR_18 = VAR_16->base_addr;
 VAR_17 = FUNC_1(VAR_16);
 while ((VAR_19 = FUNC_5(FUNC_4(VAR_16->base_addr + VAR_2)))) {
  FUNC_2(VAR_17, VAR_12, VAR_16, "status=%04x\n", VAR_19);
  switch(VAR_19 & VAR_1) {
  case 131:

   FUNC_0(VAR_16);
   break;
  case 129:
   VAR_16->stats.tx_packets++;
   FUNC_3(VAR_16);
   if ((VAR_19 & VAR_9) == 0)
    VAR_16->stats.tx_errors++;
   if (VAR_19 & VAR_8)
    VAR_16->stats.tx_carrier_errors++;
   if (VAR_19 & VAR_10)
    VAR_16->stats.tx_heartbeat_errors++;
   if (VAR_19 & VAR_7)
    VAR_16->stats.tx_window_errors++;
   if (VAR_19 & VAR_4)
    VAR_16->stats.tx_aborted_errors++;
   break;
  case 132:
   if (VAR_19 & VAR_3) {





    FUNC_3(VAR_16);
   }
   if (VAR_19 & VAR_11) {
    FUNC_2(VAR_17, VAR_13, VAR_16, "transmit underrun\n");
                                VAR_17->send_underrun++;
                                if (VAR_17->send_underrun == 3) VAR_17->send_cmd = VAR_5;
                                else if (VAR_17->send_underrun == 6) VAR_17->send_cmd = VAR_6;
                        }
   break;
  case 130:
   VAR_16->stats.rx_missed_errors += (VAR_19 >> 6);
   break;
  case 128:
   VAR_16->stats.collisions += (VAR_19 >> 6);
   break;
  }
 }
 return VAR_0;
}
