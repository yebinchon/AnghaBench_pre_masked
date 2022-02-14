
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_window_errors; int tx_heartbeat_errors; int tx_carrier_errors; int tx_errors; } ;
struct net_device {long base_addr; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*,char*,unsigned char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7)
{
 long VAR_8 = VAR_7->base_addr;
 unsigned char VAR_9 = FUNC_1(VAR_8+VAR_0);
 unsigned char VAR_10 = VAR_9 & (VAR_1+VAR_4);
 if (VAR_10)
  FUNC_0(VAR_7);
 else
 {
  VAR_7->stats.tx_errors++;
  if (VAR_9 & VAR_3) VAR_7->stats.tx_carrier_errors++;
  if (VAR_9 & VAR_2) VAR_7->stats.tx_heartbeat_errors++;
  if (VAR_9 & VAR_6) VAR_7->stats.tx_window_errors++;
 }
}
