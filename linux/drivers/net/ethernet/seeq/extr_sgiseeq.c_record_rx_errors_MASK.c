
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_errors; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_5, unsigned char VAR_6)
{
 if (VAR_6 & VAR_2 ||
     VAR_6 & VAR_4)
  VAR_5->stats.rx_over_errors++;
 if (VAR_6 & VAR_0)
  VAR_5->stats.rx_crc_errors++;
 if (VAR_6 & VAR_1)
  VAR_5->stats.rx_frame_errors++;
 if (VAR_6 & VAR_3)
  VAR_5->stats.rx_errors++;
}
