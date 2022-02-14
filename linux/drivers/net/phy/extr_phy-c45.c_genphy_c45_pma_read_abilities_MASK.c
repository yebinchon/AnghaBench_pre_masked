
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devices_in_package; } ;
struct phy_device {int supported; TYPE_1__ c45_ids; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;

int FUNC_4(struct phy_device *VAR_39)
{
 int VAR_40;

 FUNC_0(VAR_15, VAR_39->supported);
 if (VAR_39->c45_ids.devices_in_package & VAR_17) {
  VAR_40 = FUNC_3(VAR_39, VAR_18, VAR_37);
  if (VAR_40 < 0)
   return VAR_40;

  if (VAR_40 & VAR_16)
   FUNC_2(VAR_15,
      VAR_39->supported);
 }

 VAR_40 = FUNC_3(VAR_39, VAR_19, VAR_38);
 if (VAR_40 < 0)
  return VAR_40;

 FUNC_1(VAR_5,
    VAR_39->supported,
    VAR_40 & VAR_35);

 FUNC_1(VAR_4,
    VAR_39->supported,
    VAR_40 & VAR_34);

 FUNC_1(VAR_0,
    VAR_39->supported,
    VAR_40 & VAR_33);

 if (VAR_40 & VAR_36) {
  VAR_40 = FUNC_3(VAR_39, VAR_19, VAR_20);
  if (VAR_40 < 0)
   return VAR_40;

  FUNC_1(VAR_3,
     VAR_39->supported,
     VAR_40 & VAR_27);
  FUNC_1(VAR_6,
     VAR_39->supported,
     VAR_40 & VAR_28);
  FUNC_1(VAR_2,
     VAR_39->supported,
     VAR_40 & VAR_26);
  FUNC_1(VAR_1,
     VAR_39->supported,
     VAR_40 & VAR_25);
  FUNC_1(VAR_8,
     VAR_39->supported,
     VAR_40 & VAR_22);
  FUNC_1(VAR_7,
     VAR_39->supported,
     VAR_40 & VAR_21);

  FUNC_1(VAR_9,
     VAR_39->supported,
     VAR_40 & VAR_23);
  FUNC_1(VAR_10,
     VAR_39->supported,
     VAR_40 & VAR_23);

  FUNC_1(VAR_11,
     VAR_39->supported,
     VAR_40 & VAR_24);
  FUNC_1(VAR_12,
     VAR_39->supported,
     VAR_40 & VAR_24);

  if (VAR_40 & VAR_29) {
   VAR_40 = FUNC_3(VAR_39, VAR_19,
        VAR_30);
   if (VAR_40 < 0)
    return VAR_40;

   FUNC_1(VAR_13,
      VAR_39->supported,
      VAR_40 & VAR_31);

   FUNC_1(VAR_14,
      VAR_39->supported,
      VAR_40 & VAR_32);
  }
 }

 return 0;
}
