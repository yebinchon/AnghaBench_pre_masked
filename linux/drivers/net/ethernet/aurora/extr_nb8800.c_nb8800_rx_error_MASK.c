
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_errors; int rx_frame_errors; int rx_fifo_errors; int rx_crc_errors; int rx_length_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_4, u32 VAR_5)
{
 if (VAR_5 & VAR_3)
  VAR_4->stats.rx_length_errors++;

 if (VAR_5 & VAR_1)
  VAR_4->stats.rx_crc_errors++;

 if (VAR_5 & VAR_2)
  VAR_4->stats.rx_fifo_errors++;

 if (VAR_5 & VAR_0)
  VAR_4->stats.rx_frame_errors++;

 VAR_4->stats.rx_errors++;
}
