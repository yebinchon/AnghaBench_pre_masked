
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int advertising; int (* mdio_read ) (int ,int ,int ) ;int full_duplex; int dev; int phy_id; scalar_t__ supports_gmii; scalar_t__ force_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct mii_if_info*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;

unsigned int FUNC_9 (struct mii_if_info *VAR_8,
         unsigned int VAR_9,
         unsigned int VAR_10)
{
 unsigned int VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;


 VAR_11 = FUNC_4(VAR_8->dev) ? 1 : 0;
 VAR_12 = (unsigned int) FUNC_0(VAR_8);




 if ((!VAR_10) && (VAR_11 == VAR_12))
  return 0;


 if (!VAR_12) {
  FUNC_3(VAR_8->dev);
  if (VAR_9)
   FUNC_2(VAR_8->dev, "link down\n");
  return 0;
 }




 FUNC_5(VAR_8->dev);

 if (VAR_8->force_media) {
  if (VAR_9)
   FUNC_2(VAR_8->dev, "link up\n");
  return 0;
 }


 if ((!VAR_10) && (VAR_8->advertising))
  VAR_13 = VAR_8->advertising;
 else {
  VAR_13 = VAR_8->mdio_read(VAR_8->dev, VAR_8->phy_id, VAR_5);
  VAR_8->advertising = VAR_13;
 }
 VAR_14 = VAR_8->mdio_read(VAR_8->dev, VAR_8->phy_id, VAR_6);
 if (VAR_8->supports_gmii)
  VAR_17 = VAR_8->mdio_read(VAR_8->dev, VAR_8->phy_id, VAR_7);


 VAR_15 = FUNC_1(VAR_14 & VAR_13);
 VAR_16 = (VAR_15 & VAR_2) ? 1 : 0;
 if (VAR_17 & VAR_3)
  VAR_16 = 1;

 if (VAR_9)
  FUNC_2(VAR_8->dev, "link up, %uMbps, %s-duplex, lpa 0x%04X\n",
       VAR_17 & (VAR_3 | VAR_4) ? 1000 :
       VAR_15 & (VAR_0 | VAR_1) ?
       100 : 10,
       VAR_16 ? "full" : "half",
       VAR_14);

 if ((VAR_10) || (VAR_8->full_duplex != VAR_16)) {
  VAR_8->full_duplex = VAR_16;
  return 1;
 }

 return 0;
}
