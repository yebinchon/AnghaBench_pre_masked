
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_2__ {int mtu; } ;
struct alx_priv {int rxbuf_size; TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct alx_priv*) ;
 int FUNC_2 (int,int ) ;
 struct alx_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, int VAR_2)
{
 struct alx_priv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_0(VAR_2);

 VAR_1->mtu = VAR_2;
 VAR_3->hw.mtu = VAR_2;
 VAR_3->rxbuf_size = FUNC_2(VAR_4, VAR_0);
 FUNC_4(VAR_1);
 if (FUNC_5(VAR_1))
  FUNC_1(VAR_3);
 return 0;
}
