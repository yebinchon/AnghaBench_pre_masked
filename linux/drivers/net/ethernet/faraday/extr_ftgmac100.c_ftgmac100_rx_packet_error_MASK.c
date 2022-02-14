
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_length_errors; int rx_crc_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftgmac100 {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct ftgmac100 *VAR_5, u32 VAR_6)
{
 struct net_device *VAR_7 = VAR_5->netdev;

 if (VAR_6 & VAR_3)
  VAR_7->stats.rx_errors++;

 if (VAR_6 & VAR_0)
  VAR_7->stats.rx_crc_errors++;

 if (VAR_6 & (VAR_1 |
        VAR_2 |
        VAR_4))
  VAR_7->stats.rx_length_errors++;
}
