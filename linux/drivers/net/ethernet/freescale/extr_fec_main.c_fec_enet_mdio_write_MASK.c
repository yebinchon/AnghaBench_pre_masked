
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mii_bus {struct fec_enet_private* priv; } ;
struct fec_enet_private {int netdev; int mdio_done; scalar_t__ hwp; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 unsigned long FUNC_9 (int *,int ) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct mii_bus *VAR_9, int VAR_10, int VAR_11,
      u16 VAR_12)
{
 struct fec_enet_private *VAR_13 = VAR_9->priv;
 struct device *VAR_14 = &VAR_13->pdev->dev;
 unsigned long VAR_15;
 int VAR_16, VAR_17, VAR_18;
 bool VAR_19 = !!(VAR_11 & VAR_8);

 VAR_16 = FUNC_4(VAR_14);
 if (VAR_16 < 0)
  return VAR_16;
 else
  VAR_16 = 0;

 FUNC_7(&VAR_13->mdio_done);

 if (VAR_19) {
  VAR_17 = VAR_6;


  VAR_18 = (VAR_11 >> 16);
  FUNC_10(VAR_17 | VAR_3 |
         FUNC_1(VAR_10) | FUNC_2(VAR_18) |
         VAR_7 | (VAR_11 & 0xFFFF),
         VAR_13->hwp + VAR_1);


  VAR_15 = FUNC_9(&VAR_13->mdio_done,
   FUNC_8(VAR_2));
  if (VAR_15 == 0) {
   FUNC_3(VAR_13->netdev, "MDIO address write timeout\n");
   VAR_16 = -VAR_0;
   goto out;
  }
 } else {

  VAR_17 = VAR_5;
  VAR_18 = VAR_11;
 }


 FUNC_10(VAR_17 | VAR_4 |
  FUNC_1(VAR_10) | FUNC_2(VAR_18) |
  VAR_7 | FUNC_0(VAR_12),
  VAR_13->hwp + VAR_1);


 VAR_15 = FUNC_9(&VAR_13->mdio_done,
   FUNC_8(VAR_2));
 if (VAR_15 == 0) {
  FUNC_3(VAR_13->netdev, "MDIO write timeout\n");
  VAR_16 = -VAR_0;
 }

out:
 FUNC_5(VAR_14);
 FUNC_6(VAR_14);

 return VAR_16;
}
