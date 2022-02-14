
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {struct bcma_device* core; } ;
struct bgmac {TYPE_4__ bcma; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct bcma_device {int dev; TYPE_3__* bus; TYPE_1__ id; } ;
struct TYPE_6__ {struct bcma_device* core; } ;
struct TYPE_7__ {TYPE_2__ drv_gmac_cmn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct bcma_device*,int,int,int ,int) ;
 int FUNC_1 (struct bcma_device*,int) ;
 int FUNC_2 (struct bcma_device*,int,int) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct bgmac *VAR_13, u8 VAR_14, u8 VAR_15,
          u16 VAR_16)
{
 struct bcma_device *VAR_17;
 u16 VAR_18;
 u16 VAR_19;
 u32 VAR_20;

 if (VAR_13->bcma.core->id.id == VAR_0) {
  VAR_17 = VAR_13->bcma.core->bus->drv_gmac_cmn.core;
  VAR_18 = VAR_1;
  VAR_19 = VAR_2;
 } else {
  VAR_17 = VAR_13->bcma.core;
  VAR_18 = VAR_10;
  VAR_19 = VAR_11;
 }

 VAR_20 = FUNC_1(VAR_17, VAR_19);
 VAR_20 &= ~VAR_9;
 VAR_20 |= VAR_14;
 FUNC_2(VAR_17, VAR_19, VAR_20);

 FUNC_2(VAR_13->bcma.core, VAR_3, VAR_4);
 if (FUNC_1(VAR_13->bcma.core, VAR_3) & VAR_4)
  FUNC_4(&VAR_17->dev, "Error setting MDIO int\n");

 VAR_20 = VAR_7;
 VAR_20 |= VAR_8;
 VAR_20 |= VAR_14 << VAR_5;
 VAR_20 |= VAR_15 << VAR_6;
 VAR_20 |= VAR_16;
 FUNC_2(VAR_17, VAR_18, VAR_20);

 if (!FUNC_0(VAR_17, VAR_18, VAR_7, 0,
      1000)) {
  FUNC_3(&VAR_17->dev, "Writing to PHY %d register 0x%X failed\n",
   VAR_14, VAR_15);
  return -VAR_12;
 }

 return 0;
}
