
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; } ;
struct net_device {int dummy; } ;
struct ef4_tx_queue {int dummy; } ;
struct ef4_nic {unsigned int n_tx_channels; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ef4_tx_queue*,struct sk_buff*) ;
 struct ef4_tx_queue* FUNC_2 (struct ef4_nic*,unsigned int,unsigned int) ;
 struct ef4_nic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 unsigned int FUNC_5 (struct sk_buff*) ;

netdev_tx_t FUNC_6(struct sk_buff *VAR_3,
    struct net_device *VAR_4)
{
 struct ef4_nic *VAR_5 = FUNC_3(VAR_4);
 struct ef4_tx_queue *VAR_6;
 unsigned VAR_7, VAR_8;

 FUNC_0(!FUNC_4(VAR_4));

 VAR_7 = FUNC_5(VAR_3);
 VAR_8 = VAR_3->ip_summed == VAR_0 ? VAR_2 : 0;
 if (VAR_7 >= VAR_5->n_tx_channels) {
  VAR_7 -= VAR_5->n_tx_channels;
  VAR_8 |= VAR_1;
 }
 VAR_6 = FUNC_2(VAR_5, VAR_7, VAR_8);

 return FUNC_1(VAR_6, VAR_3);
}
