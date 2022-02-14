
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int tx_disable; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct netvsc_device *VAR_0,
        struct net_device *VAR_1)
{
 VAR_0->tx_disable = 0;
 FUNC_1();

 FUNC_0(VAR_1);
}
