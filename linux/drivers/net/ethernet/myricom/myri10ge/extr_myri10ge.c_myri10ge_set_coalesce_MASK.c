
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct myri10ge_priv {int intr_coal_delay_ptr; int intr_coal_delay; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;


 int FUNC_0 (int ) ;
 struct myri10ge_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_0, struct ethtool_coalesce *VAR_1)
{
 struct myri10ge_priv *VAR_2 = FUNC_1(VAR_0);

 VAR_2->intr_coal_delay = VAR_1->rx_coalesce_usecs;
 FUNC_2(FUNC_0(VAR_2->intr_coal_delay), VAR_2->intr_coal_delay_ptr);
 return 0;
}
