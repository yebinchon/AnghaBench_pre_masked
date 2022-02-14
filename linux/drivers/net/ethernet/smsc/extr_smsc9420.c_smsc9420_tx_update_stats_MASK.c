
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tx_bytes; int collisions; int tx_heartbeat_errors; int tx_packets; int tx_carrier_errors; int tx_aborted_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_8, u32 VAR_9, u32 VAR_10)
{
 if (FUNC_0(VAR_9 & VAR_2)) {
  VAR_8->stats.tx_errors++;
  if (VAR_9 & (VAR_4 |
   VAR_3))
   VAR_8->stats.tx_aborted_errors++;

  if (VAR_9 & (VAR_6 | VAR_7))
   VAR_8->stats.tx_carrier_errors++;
 } else {
  VAR_8->stats.tx_packets++;
  VAR_8->stats.tx_bytes += (VAR_10 & 0x7FF);
 }

 if (FUNC_0(VAR_9 & VAR_3)) {
  VAR_8->stats.collisions += 16;
 } else {
  VAR_8->stats.collisions +=
   (VAR_9 & VAR_0) >>
   VAR_1;
 }

 if (FUNC_0(VAR_9 & VAR_5))
  VAR_8->stats.tx_heartbeat_errors++;
}
