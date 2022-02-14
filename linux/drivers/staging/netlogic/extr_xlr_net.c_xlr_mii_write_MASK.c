
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct xlr_net_priv {TYPE_1__* ndev; int mii_addr; } ;
struct mii_bus {struct xlr_net_priv* priv; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int,int ,int) ;
 int FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 struct xlr_net_priv *VAR_4 = VAR_0->priv;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->mii_addr, VAR_1, VAR_2, VAR_3);
 FUNC_0(&VAR_4->ndev->dev, "mii_write phy %d : %d <- %x [%x]\n",
  VAR_1, VAR_2, VAR_3, VAR_5);
 return VAR_5;
}
