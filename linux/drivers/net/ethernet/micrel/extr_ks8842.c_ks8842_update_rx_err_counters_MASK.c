
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_frame_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_3, "RX error, status: %x\n", VAR_4);

 VAR_3->stats.rx_errors++;
 if (VAR_4 & VAR_2)
  VAR_3->stats.rx_length_errors++;
 if (VAR_4 & VAR_0)
  VAR_3->stats.rx_crc_errors++;
 if (VAR_4 & VAR_1)
  VAR_3->stats.rx_frame_errors++;
}
