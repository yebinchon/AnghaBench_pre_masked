
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct enetc_ndev_priv {TYPE_1__* si; } ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct enetc_ndev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct enetc_ndev_priv *VAR_3 = FUNC_3(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 if (!FUNC_1(VAR_4->sa_data))
  return -VAR_0;

 FUNC_2(VAR_1->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
 FUNC_0(&VAR_3->si->hw, 0, VAR_4->sa_data);

 return 0;
}
