
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int (* mdio_read ) (int ,int ,int ) ;int phy_id; int dev; scalar_t__ supports_gmii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mii_if_info*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct mii_if_info *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 if (!FUNC_0(VAR_9))
  return 0;

 VAR_12 = (*VAR_9->mdio_read) (VAR_9->dev, VAR_9->phy_id, VAR_6);
 if ((VAR_12 & VAR_2) == 0)
  return 0;

 VAR_10 = (*VAR_9->mdio_read) (VAR_9->dev, VAR_9->phy_id, VAR_5);
 VAR_11 = (*VAR_9->mdio_read) (VAR_9->dev, VAR_9->phy_id, VAR_7);
 VAR_13 = FUNC_1(VAR_10 & VAR_11);

 if (VAR_9->supports_gmii)
  VAR_14 = VAR_9->mdio_read(VAR_9->dev, VAR_9->phy_id, VAR_8);

 VAR_15 = VAR_14 & (VAR_3 | VAR_4) ? 1000 :
   (VAR_13 & (VAR_0 | VAR_1) ? 100 : 10);
 return VAR_15;
}
