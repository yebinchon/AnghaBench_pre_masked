
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mii_bus {int dev; int id; scalar_t__ priv; } ;
struct hns_mdio_device {int vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hns_mdio_device*,int ,int ) ;
 scalar_t__ FUNC_1 (struct hns_mdio_device*,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct hns_mdio_device*,int ,int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,char*,int,int,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct hns_mdio_device*,int,int ,int,int) ;
 int FUNC_6 (struct mii_bus*) ;

__attribute__((used)) static int FUNC_7(struct mii_bus *VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16;
 u16 VAR_17 = 0;
 u8 VAR_18 = ((VAR_15 >> 16) & 0x1f);
 u8 VAR_19 = !!(VAR_15 & VAR_12);
 u16 VAR_20 = (u16)(VAR_15 & 0xffff);
 struct hns_mdio_device *VAR_21 = (struct hns_mdio_device *)VAR_13->priv;

 FUNC_3(&VAR_13->dev, "mdio read %s,base is %p\n",
  VAR_13->id, VAR_21->vbase);
 FUNC_3(&VAR_13->dev, "phy id=%d, is_c45=%d, devad=%d, reg=%#x!\n",
  VAR_14, VAR_19, VAR_18, VAR_20);


 VAR_16 = FUNC_6(VAR_13);
 if (VAR_16) {
  FUNC_4(&VAR_13->dev, "MDIO bus is busy\n");
  return VAR_16;
 }

 if (!VAR_19) {
  FUNC_5(VAR_21, VAR_19,
       VAR_4, VAR_14, VAR_20);
 } else {
  FUNC_2(VAR_21, VAR_3, VAR_1,
       VAR_2, VAR_20);


  FUNC_5(VAR_21, VAR_19,
       VAR_6, VAR_14, VAR_18);


  VAR_16 = FUNC_6(VAR_13);
  if (VAR_16) {
   FUNC_4(&VAR_13->dev, "MDIO bus is busy\n");
   return VAR_16;
  }

  FUNC_5(VAR_21, VAR_19,
       VAR_5, VAR_14, VAR_18);
 }



 VAR_16 = FUNC_6(VAR_13);
 if (VAR_16) {
  FUNC_4(&VAR_13->dev, "MDIO bus is busy\n");
  return VAR_16;
 }

 VAR_17 = FUNC_0(VAR_21, VAR_11, VAR_10);
 if (VAR_17) {
  FUNC_4(&VAR_13->dev, " ERROR! MDIO Read failed!\n");
  return -VAR_0;
 }


 VAR_17 = (u16)FUNC_1(VAR_21, VAR_9,
       VAR_7, VAR_8);

 return VAR_17;
}
