
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bgmac {int stats_grabbed; int feature_flags; int net_dev; TYPE_1__* mii_bus; int mac_duplex; int mac_speed; int dev; int * rx_ring; int * tx_ring; } ;
typedef int buf ;
struct TYPE_2__ {int (* reset ) (TYPE_1__*) ;} ;


 int VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct bgmac*,int,int,int) ;
 int FUNC_2 (struct bgmac*) ;
 int FUNC_3 (struct bgmac*) ;
 scalar_t__ FUNC_4 (struct bgmac*) ;
 int FUNC_5 (struct bgmac*,int,int,int) ;
 int FUNC_6 (struct bgmac*,int ,int ,int ) ;
 int FUNC_7 (struct bgmac*,int *) ;
 int FUNC_8 (struct bgmac*,int *) ;
 int FUNC_9 (struct bgmac*) ;
 int FUNC_10 (struct bgmac*,int ,int ) ;
 int FUNC_11 (struct bgmac*,int ,int ,int ,int) ;
 int FUNC_12 (int ,char*,char*) ;
 scalar_t__ FUNC_13 (char*,int ,int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct bgmac *VAR_54)
{
 u32 VAR_55;
 int VAR_56;

 if (FUNC_4(VAR_54)) {
  if (!VAR_54->stats_grabbed) {

   VAR_54->stats_grabbed = 1;
  }

  for (VAR_56 = 0; VAR_56 < VAR_49; VAR_56++)
   FUNC_8(VAR_54, &VAR_54->tx_ring[VAR_56]);

  FUNC_5(VAR_54, ~0, VAR_23, 0);
  FUNC_16(1);

  for (VAR_56 = 0; VAR_56 < VAR_48; VAR_56++)
   FUNC_7(VAR_54, &VAR_54->rx_ring[VAR_56]);


 }

 if (!(VAR_54->feature_flags & VAR_43))
  FUNC_2(VAR_54);


 if (VAR_54->feature_flags & VAR_44) {
  FUNC_10(VAR_54, VAR_0,
     VAR_3);
  FUNC_11(VAR_54, VAR_0,
     VAR_4,
     VAR_4,
     1000);
 }

 if (VAR_54->feature_flags & VAR_46) {
  u8 VAR_57 = 0;
  u8 VAR_58 = VAR_9 |
        VAR_6;
  char VAR_59[4];

  if (FUNC_0("et_swtype", VAR_59, sizeof(VAR_59)) > 0) {
   if (FUNC_13(VAR_59, 0, &VAR_57))
    FUNC_12(VAR_54->dev, "Failed to parse et_swtype (%s)\n",
     VAR_59);
   VAR_57 &= 0x0f;
   VAR_57 <<= 4;
   VAR_58 = VAR_57;
  } else if (VAR_54->feature_flags & VAR_45) {
   VAR_58 = VAR_8 |
      VAR_10;
  } else if (VAR_54->feature_flags & VAR_47) {
   VAR_58 = VAR_7 |
      VAR_12;
  }
  FUNC_1(VAR_54, 1, ~(VAR_5 |
        VAR_11),
          VAR_58);
 } else if (VAR_54->feature_flags & VAR_38) {
  u32 VAR_60 = VAR_14 |
         VAR_16;
  u8 VAR_61 = 0;
  char VAR_62[4];

  if (FUNC_0("et_swtype", VAR_62, sizeof(VAR_62)) > 0) {
   if (FUNC_13(VAR_62, 0, &VAR_61))
    FUNC_12(VAR_54->dev, "Failed to parse et_swtype (%s)\n",
     VAR_62);
   VAR_60 = (VAR_61 & 0x0f) << 12;
  } else if (VAR_54->feature_flags & VAR_39) {
   VAR_60 = VAR_15 |
      VAR_18;
  }
  FUNC_1(VAR_54, 4, ~(VAR_13 |
        VAR_17),
          VAR_60);
 } else if (VAR_54->feature_flags & VAR_40) {
  FUNC_1(VAR_54, 7, ~VAR_19,
          VAR_20);
 }






 if (VAR_54->feature_flags & VAR_41)
  VAR_55 = VAR_34;
 else
  VAR_55 = VAR_33;

 FUNC_5(VAR_54,
        ~(VAR_36 |
          VAR_29 |
          VAR_32 |
          VAR_35 |
          VAR_22 |
          VAR_23 |
          VAR_21 |
          VAR_31 |
          VAR_30 |
          VAR_26 |
          VAR_37 |
          VAR_25 |
          VAR_27),
        VAR_28 |
        VAR_24 |
        VAR_21 |
        VAR_55,
        0);
 VAR_54->mac_speed = VAR_53;
 VAR_54->mac_duplex = VAR_52;

 FUNC_3(VAR_54);
 if (VAR_54->feature_flags & VAR_42)
  FUNC_6(VAR_54, VAR_2, ~0,
        VAR_1);
 else
  FUNC_10(VAR_54, VAR_51, VAR_50);
 FUNC_9(VAR_54);
 if (VAR_54->mii_bus)
  VAR_54->mii_bus->reset(VAR_54->mii_bus);

 FUNC_14(VAR_54->net_dev);
}
