
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct fec_enet_private* priv; } ;
struct fec_enet_private {scalar_t__ hwp; int netdev; int mdio_done; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 unsigned long FUNC_10 (int *,int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct mii_bus *VAR_10, int VAR_11, int VAR_12)
{
 struct fec_enet_private *VAR_13 = VAR_10->priv;
 struct device *VAR_14 = &VAR_13->pdev->dev;
 unsigned long VAR_15;
 int VAR_16 = 0, VAR_17, VAR_18, VAR_19;
 bool VAR_20 = !!(VAR_12 & VAR_9);

 VAR_16 = FUNC_4(VAR_14);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_8(&VAR_13->mdio_done);

 if (VAR_20) {
  VAR_17 = VAR_7;


  VAR_18 = (VAR_12 >> 16);
  FUNC_11(VAR_17 | VAR_3 |
         FUNC_1(VAR_11) | FUNC_2(VAR_18) |
         VAR_8 | (VAR_12 & 0xFFFF),
         VAR_13->hwp + VAR_1);


  VAR_15 = FUNC_10(&VAR_13->mdio_done,
    FUNC_9(VAR_2));
  if (VAR_15 == 0) {
   FUNC_3(VAR_13->netdev, "MDIO address write timeout\n");
   VAR_16 = -VAR_0;
   goto out;
  }

  VAR_19 = VAR_5;

 } else {

  VAR_19 = VAR_4;
  VAR_17 = VAR_6;
  VAR_18 = VAR_12;
 }


 FUNC_11(VAR_17 | VAR_19 |
  FUNC_1(VAR_11) | FUNC_2(VAR_18) |
  VAR_8, VAR_13->hwp + VAR_1);


 VAR_15 = FUNC_10(&VAR_13->mdio_done,
   FUNC_9(VAR_2));
 if (VAR_15 == 0) {
  FUNC_3(VAR_13->netdev, "MDIO read timeout\n");
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_16 = FUNC_0(FUNC_7(VAR_13->hwp + VAR_1));

out:
 FUNC_5(VAR_14);
 FUNC_6(VAR_14);

 return VAR_16;
}
