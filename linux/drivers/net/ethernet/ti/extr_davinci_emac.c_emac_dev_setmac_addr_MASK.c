
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct emac_priv {int mac_addr; TYPE_1__* ndev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct emac_priv*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct emac_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct emac_priv*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, void *VAR_3)
{
 struct emac_priv *VAR_4 = FUNC_4(VAR_2);
 struct device *VAR_5 = &VAR_4->ndev->dev;
 struct sockaddr *VAR_6 = VAR_3;

 if (!FUNC_2(VAR_6->sa_data))
  return -VAR_0;


 FUNC_3(VAR_4->mac_addr, VAR_6->sa_data, VAR_2->addr_len);
 FUNC_3(VAR_2->dev_addr, VAR_6->sa_data, VAR_2->addr_len);


 if (FUNC_6(VAR_2)) {
  FUNC_1(VAR_4, VAR_1, VAR_4->mac_addr);
 }

 if (FUNC_5(VAR_4))
  FUNC_0(VAR_5, "DaVinci EMAC: emac_dev_setmac_addr %pM\n",
     VAR_4->mac_addr);

 return 0;
}
