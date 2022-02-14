
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct stmmac_priv {int ioaddr; int dev; } ;
struct net_device {int phydev; } ;
struct ethtool_test {int flags; } ;
struct TYPE_2__ {int lb; int (* fn ) (struct stmmac_priv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 struct stmmac_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct stmmac_priv*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_9 (struct stmmac_priv*,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (struct stmmac_priv*) ;

void FUNC_11(struct net_device *VAR_5,
    struct ethtool_test *VAR_6, u64 *VAR_7)
{
 struct stmmac_priv *VAR_8 = FUNC_3(VAR_5);
 int VAR_9 = FUNC_8(VAR_8);
 int VAR_10 = FUNC_5(VAR_5);
 int VAR_11, VAR_12;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7) * VAR_9);
 VAR_4 = 0;

 if (VAR_6->flags != VAR_2) {
  FUNC_2(VAR_8->dev, "Only offline tests are supported\n");
  VAR_6->flags |= VAR_1;
  return;
 } else if (!VAR_10) {
  FUNC_2(VAR_8->dev, "You need valid Link to execute tests\n");
  VAR_6->flags |= VAR_1;
  return;
 }


 FUNC_4(VAR_5);


 FUNC_1(200);

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_12 = 0;

  switch (VAR_3[VAR_11].lb) {
  case 128:
   VAR_12 = -VAR_0;
   if (VAR_5->phydev)
    VAR_12 = FUNC_7(VAR_5->phydev, 1);
   if (!VAR_12)
    break;

  case 130:
   VAR_12 = FUNC_9(VAR_8, VAR_8->ioaddr, 1);
   break;
  case 129:
   break;
  default:
   VAR_12 = -VAR_0;
   break;
  }





  if (VAR_12) {
   FUNC_2(VAR_8->dev, "Loopback is not supported\n");
   VAR_6->flags |= VAR_1;
   break;
  }

  VAR_12 = VAR_3[VAR_11].fn(VAR_8);
  if (VAR_12 && (VAR_12 != -VAR_0))
   VAR_6->flags |= VAR_1;
  VAR_7[VAR_11] = VAR_12;

  switch (VAR_3[VAR_11].lb) {
  case 128:
   VAR_12 = -VAR_0;
   if (VAR_5->phydev)
    VAR_12 = FUNC_7(VAR_5->phydev, 0);
   if (!VAR_12)
    break;

  case 130:
   FUNC_9(VAR_8, VAR_8->ioaddr, 0);
   break;
  default:
   break;
  }
 }


 if (VAR_10)
  FUNC_6(VAR_5);
}
