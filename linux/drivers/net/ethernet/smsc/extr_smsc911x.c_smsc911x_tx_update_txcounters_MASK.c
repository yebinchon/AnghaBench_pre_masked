
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smsc911x_data {int dummy; } ;
struct TYPE_2__ {unsigned int tx_bytes; int tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ collisions; int tx_packets; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct smsc911x_data* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (struct smsc911x_data*) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5)
{
 struct smsc911x_data *VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7;

 while ((VAR_7 = FUNC_2(VAR_6)) != 0) {
  if (FUNC_3(VAR_7 & 0x80000000)) {







   FUNC_0(VAR_6, VAR_4, "Packet tag reserved bit is high");
  } else {
   if (FUNC_3(VAR_7 & VAR_0)) {
    VAR_5->stats.tx_errors++;
   } else {
    VAR_5->stats.tx_packets++;
    VAR_5->stats.tx_bytes += (VAR_7 >> 16);
   }
   if (FUNC_3(VAR_7 & VAR_1)) {
    VAR_5->stats.collisions += 16;
    VAR_5->stats.tx_aborted_errors += 1;
   } else {
    VAR_5->stats.collisions +=
        ((VAR_7 >> 3) & 0xF);
   }
   if (FUNC_3(VAR_7 & VAR_3))
    VAR_5->stats.tx_carrier_errors += 1;
   if (FUNC_3(VAR_7 & VAR_2)) {
    VAR_5->stats.collisions++;
    VAR_5->stats.tx_aborted_errors++;
   }
  }
 }
}
