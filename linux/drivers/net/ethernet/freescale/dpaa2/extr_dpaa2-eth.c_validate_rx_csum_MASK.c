
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int ip_summed; } ;
struct dpaa2_eth_priv {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct dpaa2_eth_priv *VAR_4,
        u32 VAR_5,
        struct sk_buff *VAR_6)
{
 FUNC_0(VAR_6);


 if (!(VAR_4->net_dev->features & VAR_3))
  return;


 if (!((VAR_5 & VAR_1) &&
       (VAR_5 & VAR_2)))
  return;


 VAR_6->ip_summed = VAR_0;
}
