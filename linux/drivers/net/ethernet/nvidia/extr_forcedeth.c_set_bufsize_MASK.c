
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
struct fe_priv {scalar_t__ rx_buf_sz; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 struct fe_priv *VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->mtu <= VAR_0)
  VAR_3->rx_buf_sz = VAR_0 + VAR_1;
 else
  VAR_3->rx_buf_sz = VAR_2->mtu + VAR_1;
}
