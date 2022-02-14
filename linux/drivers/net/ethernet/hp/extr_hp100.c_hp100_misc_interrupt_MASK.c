
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; int rx_errors; } ;
struct net_device {int base_addr; TYPE_1__ stats; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 VAR_1->stats.rx_errors++;
 VAR_1->stats.tx_errors++;
}
