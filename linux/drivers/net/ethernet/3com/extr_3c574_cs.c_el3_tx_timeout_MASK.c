
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 unsigned int VAR_4 = VAR_3->base_addr;

 FUNC_1(VAR_3, "Transmit timed out!\n");
 FUNC_0(VAR_3);
 VAR_3->stats.tx_errors++;
 FUNC_2(VAR_3);

 FUNC_5(VAR_3, VAR_2);
 FUNC_4(VAR_1, VAR_4 + VAR_0);
 FUNC_3(VAR_3);
}
