
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_packets; int rx_fifo_errors; int tx_window_errors; int collisions; int tx_heartbeat_errors; int tx_carrier_errors; } ;
struct net_device {int base_addr; TYPE_1__ stats; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 int VAR_5 = VAR_4->base_addr;

 if (VAR_3 > 5)
  FUNC_4("   Updating the statistics.\n");

 FUNC_3(VAR_1, VAR_5 + VAR_0);

 FUNC_0(6);
 VAR_4->stats.tx_carrier_errors += FUNC_1(VAR_5 + 0);
 VAR_4->stats.tx_heartbeat_errors += FUNC_1(VAR_5 + 1);
                               FUNC_1(VAR_5 + 2);
 VAR_4->stats.collisions += FUNC_1(VAR_5 + 3);
 VAR_4->stats.tx_window_errors += FUNC_1(VAR_5 + 4);
 VAR_4->stats.rx_fifo_errors += FUNC_1(VAR_5 + 5);
 VAR_4->stats.tx_packets += FUNC_1(VAR_5 + 6);
                      FUNC_1(VAR_5 + 7);
                        FUNC_1(VAR_5 + 8);
 FUNC_2(VAR_5 + 10);
 FUNC_2(VAR_5 + 12);


 FUNC_0(1);
 FUNC_3(VAR_2, VAR_5 + VAR_0);
}
