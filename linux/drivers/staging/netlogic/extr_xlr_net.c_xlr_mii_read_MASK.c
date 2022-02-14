
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlr_net_priv {TYPE_1__* ndev; int mii_addr; } ;
struct mii_bus {struct xlr_net_priv* priv; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct xlr_net_priv *VAR_3 = VAR_0->priv;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->mii_addr, VAR_1, VAR_2);
 FUNC_0(&VAR_3->ndev->dev, "mii_read phy %d : %d [%x]\n",
  VAR_1, VAR_2, VAR_4);
 return VAR_4;
}
