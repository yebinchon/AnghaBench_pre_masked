
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bcm_sysport_tx_ring {int index; } ;
struct bcm_sysport_priv {unsigned int per_port_num_tx_queues; struct bcm_sysport_tx_ring** ring_map; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,struct sk_buff*,int *) ;
 struct bcm_sysport_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static u16 FUNC_7(struct net_device *VAR_0, struct sk_buff *VAR_1,
        struct net_device *VAR_2)
{
 struct bcm_sysport_priv *VAR_3 = FUNC_3(VAR_0);
 u16 VAR_4 = FUNC_5(VAR_1);
 struct bcm_sysport_tx_ring *VAR_5;
 unsigned int VAR_6, VAR_7;

 if (!FUNC_4(VAR_0))
  return FUNC_2(VAR_0, VAR_1, ((void*)0));


 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = FUNC_0(VAR_4);
 VAR_5 = VAR_3->ring_map[VAR_6 + VAR_7 * VAR_3->per_port_num_tx_queues];

 if (FUNC_6(!VAR_5))
  return FUNC_2(VAR_0, VAR_1, ((void*)0));

 return VAR_5->index;
}
