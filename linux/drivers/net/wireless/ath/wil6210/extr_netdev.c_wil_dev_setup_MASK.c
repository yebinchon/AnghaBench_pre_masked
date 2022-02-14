
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int max_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 FUNC_0(VAR_2);
 VAR_2->max_mtu = VAR_1;
 VAR_2->tx_queue_len = VAR_0;
}
