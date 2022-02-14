
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
 int FUNC_0 (struct hns_mdio_device*,int ,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*,int,int,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct hns_mdio_device*,int,int,int,int) ;
 int FUNC_4 (struct mii_bus*) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_10,
     int VAR_11, int VAR_12, u16 VAR_13)
{
 int VAR_14;
 struct hns_mdio_device *VAR_15 = (struct hns_mdio_device *)VAR_10->priv;
 u8 VAR_16 = ((VAR_12 >> 16) & 0x1f);
 u8 VAR_17 = !!(VAR_12 & VAR_9);
 u16 VAR_18 = (u16)(VAR_12 & 0xffff);
 u8 VAR_19;
 u16 VAR_20;

 FUNC_1(&VAR_10->dev, "mdio write %s,base is %p\n",
  VAR_10->id, VAR_15->vbase);
 FUNC_1(&VAR_10->dev, "phy id=%d, is_c45=%d, devad=%d, reg=%#x, write data=%d\n",
  VAR_11, VAR_17, VAR_16, VAR_18, VAR_13);


 VAR_14 = FUNC_4(VAR_10);
 if (VAR_14) {
  FUNC_2(&VAR_10->dev, "MDIO bus is busy\n");
  return VAR_14;
 }

 if (!VAR_17) {
  VAR_20 = VAR_18;
  VAR_19 = VAR_3;
 } else {

  FUNC_0(VAR_15, VAR_2, VAR_0,
       VAR_1, VAR_18);

  FUNC_3(VAR_15, VAR_17,
       VAR_4, VAR_11, VAR_16);


  VAR_14 = FUNC_4(VAR_10);
  if (VAR_14) {
   FUNC_2(&VAR_10->dev, "MDIO bus is busy\n");
   return VAR_14;
  }


  VAR_20 = VAR_16;
  VAR_19 = VAR_5;
 }

 FUNC_0(VAR_15, VAR_8, VAR_6,
      VAR_7, VAR_13);

 FUNC_3(VAR_15, VAR_17, VAR_19, VAR_11, VAR_20);

 return 0;
}
