
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int rx_errors; int rx_over_errors; int rx_crc_errors; int tx_errors; int tx_aborted_errors; } ;
struct net_device {int base_addr; TYPE_1__ stats; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 int VAR_7 = VAR_6->base_addr;
 u_short VAR_8;







 FUNC_3(VAR_3);
 VAR_8 = FUNC_1(VAR_2) & 0x0fff;
 VAR_6->stats.rx_errors += VAR_8;
 VAR_6->stats.rx_over_errors += VAR_8;
 VAR_8 = FUNC_0(VAR_1);
 VAR_6->stats.rx_errors += VAR_8;
 VAR_6->stats.rx_crc_errors += VAR_8;
 VAR_8 = FUNC_0(VAR_0);
 VAR_6->stats.tx_errors += VAR_8;
 VAR_6->stats.tx_aborted_errors += VAR_8;
 FUNC_3(VAR_4);
}
