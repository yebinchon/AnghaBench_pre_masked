
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int mdio; } ;
struct alx_priv {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifreq*) ;
 int FUNC_1 (int *,int ,int) ;
 struct alx_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct alx_priv *VAR_4 = FUNC_2(VAR_1);

 if (!FUNC_3(VAR_1))
  return -VAR_0;

 return FUNC_1(&VAR_4->hw.mdio, FUNC_0(VAR_2), VAR_3);
}
