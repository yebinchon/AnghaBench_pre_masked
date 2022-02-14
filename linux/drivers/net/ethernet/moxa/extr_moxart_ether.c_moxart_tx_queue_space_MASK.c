
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct moxart_mac_priv_t {int tx_tail; int tx_head; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 struct moxart_mac_priv_t* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct moxart_mac_priv_t *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->tx_head, VAR_2->tx_tail, VAR_0);
}
