
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int collisions; int tx_fifo_errors; int tx_errors; int rx_frame_errors; int rx_over_errors; int rx_length_errors; int rx_crc_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (struct net_device*,int ) ;
 int VAR_10 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_11, void *VAR_12)
{
 struct net_device *VAR_13 = (struct net_device *) VAR_12;
 unsigned int VAR_14 = FUNC_1(VAR_13, VAR_6);
 if (VAR_10++ < 10) {
  FUNC_0(("bmac_misc_intr\n"));
 }



 if (VAR_14 & VAR_3) VAR_13->stats.rx_errors++;
 if (VAR_14 & VAR_2) VAR_13->stats.rx_crc_errors++;
 if (VAR_14 & VAR_4) VAR_13->stats.rx_length_errors++;
 if (VAR_14 & VAR_5) VAR_13->stats.rx_over_errors++;
 if (VAR_14 & VAR_1) VAR_13->stats.rx_frame_errors++;


 if (VAR_14 & VAR_7) VAR_13->stats.tx_errors++;
 if (VAR_14 & VAR_9) VAR_13->stats.tx_fifo_errors++;
 if (VAR_14 & VAR_8) VAR_13->stats.collisions++;
 return VAR_0;
}
