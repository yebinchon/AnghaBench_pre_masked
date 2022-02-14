
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int dummy; } ;
struct r8152 {int tx_qlen; struct net_device* netdev; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct r8152 *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;

 VAR_3->tx_qlen = VAR_2 / (VAR_4->mtu + VAR_1 + VAR_0 +
        sizeof(struct tx_desc));
}
