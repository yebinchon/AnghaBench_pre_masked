
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bcma_device*,int,int,int ,int) ;
 int FUNC_2 (struct bcma_device*,int) ;
 int FUNC_3 (struct bcma_device*,int,int) ;
 int FUNC_4 (int *,char*,int,int) ;

__attribute__((used)) static u16 FUNC_5(struct bgmac *VAR_27, u8 VAR_28, u8 VAR_29)
{
 struct bcma_device *VAR_30;
 u16 VAR_31;
 u16 VAR_32;
 u32 VAR_33;

 FUNC_0(VAR_16 != VAR_3);
 FUNC_0(VAR_14 != VAR_1);
 FUNC_0(VAR_15 != VAR_2);
 FUNC_0(VAR_17 != VAR_4);
 FUNC_0(VAR_18 != VAR_5);
 FUNC_0(VAR_20 != VAR_7);
 FUNC_0(VAR_19 != VAR_6);
 FUNC_0(VAR_21 != VAR_8);
 FUNC_0(VAR_22 != VAR_9);
 FUNC_0(VAR_23 != VAR_10);
 FUNC_0(VAR_24 != VAR_11);

 if (VAR_27->bcma.core->id.id == VAR_0) {
  VAR_30 = VAR_27->bcma.core->bus->drv_gmac_cmn.core;
  VAR_31 = VAR_12;
  VAR_32 = VAR_13;
 } else {
  VAR_30 = VAR_27->bcma.core;
  VAR_31 = VAR_25;
  VAR_32 = VAR_26;
 }

 VAR_33 = FUNC_2(VAR_30, VAR_32);
 VAR_33 &= ~VAR_21;
 VAR_33 |= VAR_28;
 FUNC_3(VAR_30, VAR_32, VAR_33);

 VAR_33 = VAR_19;
 VAR_33 |= VAR_28 << VAR_15;
 VAR_33 |= VAR_29 << VAR_18;
 FUNC_3(VAR_30, VAR_31, VAR_33);

 if (!FUNC_1(VAR_30, VAR_31, VAR_19, 0,
      1000)) {
  FUNC_4(&VAR_30->dev, "Reading PHY %d register 0x%X failed\n",
   VAR_28, VAR_29);
  return 0xffff;
 }

 return FUNC_2(VAR_30, VAR_31) & VAR_16;
}
