
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int full_duplex; int force_media; int advertising; scalar_t__ supports_gmii; } ;
struct TYPE_3__ {void* speed_duplex; } ;
struct r8152 {int flags; TYPE_2__ mii; TYPE_1__ ups_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct r8152*,int ) ;
 int FUNC_2 (struct r8152*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct r8152 *VAR_35, u8 VAR_36, u32 VAR_37, u8 VAR_38,
        u32 VAR_39)
{
 u16 VAR_40;
 int VAR_41 = 0;

 if (VAR_36 == VAR_6) {
  if (VAR_38 != VAR_15 && VAR_38 != VAR_14)
   return -VAR_16;

  switch (VAR_37) {
  case 130:
   VAR_40 = VAR_11;
   if (VAR_38 == VAR_14) {
    VAR_40 |= VAR_9;
    VAR_35->ups_info.speed_duplex = VAR_19;
   } else {
    VAR_35->ups_info.speed_duplex = VAR_20;
   }
   break;
  case 129:
   VAR_40 = VAR_12;
   if (VAR_38 == VAR_14) {
    VAR_40 |= VAR_9;
    VAR_35->ups_info.speed_duplex = VAR_17;
   } else {
    VAR_35->ups_info.speed_duplex = VAR_18;
   }
   break;
  case 128:
   if (VAR_35->mii.supports_gmii) {
    VAR_40 = VAR_13 | VAR_9;
    VAR_35->ups_info.speed_duplex = VAR_24;
    break;
   }

  default:
   VAR_41 = -VAR_16;
   goto out;
  }

  if (VAR_38 == VAR_14)
   VAR_35->mii.full_duplex = 1;
  else
   VAR_35->mii.full_duplex = 0;

  VAR_35->mii.force_media = 1;
 } else {
  u16 VAR_42, VAR_43;
  u32 VAR_44;

  VAR_44 = VAR_34 | VAR_33 |
     VAR_32 | VAR_31;

  if (VAR_35->mii.supports_gmii)
   VAR_44 |= VAR_30;

  if (!(VAR_39 & VAR_44))
   return -VAR_16;

  VAR_42 = FUNC_1(VAR_35, VAR_21);
  VAR_43 = VAR_42 & ~(VAR_5 | VAR_4 |
    VAR_3 | VAR_2);
  if (VAR_39 & VAR_34) {
   VAR_43 |= VAR_5;
   VAR_35->ups_info.speed_duplex = VAR_28;
  }
  if (VAR_39 & VAR_33) {
   VAR_43 |= VAR_4;
   VAR_35->ups_info.speed_duplex = VAR_27;
  }

  if (VAR_39 & VAR_32) {
   VAR_43 |= VAR_3;
   VAR_35->ups_info.speed_duplex = VAR_26;
  }
  if (VAR_39 & VAR_31) {
   VAR_43 |= VAR_2;
   VAR_35->ups_info.speed_duplex = VAR_25;
  }

  if (VAR_42 != VAR_43) {
   FUNC_2(VAR_35, VAR_21, VAR_43);
   VAR_35->mii.advertising = VAR_43;
  }

  if (VAR_35->mii.supports_gmii) {
   u16 VAR_45;

   VAR_45 = FUNC_1(VAR_35, VAR_23);
   VAR_43 = VAR_45 & ~(VAR_0 |
     VAR_1);

   if (VAR_39 & VAR_30) {
    VAR_43 |= VAR_0;
    VAR_35->ups_info.speed_duplex = VAR_24;
   }

   if (VAR_45 != VAR_43)
    FUNC_2(VAR_35, VAR_23, VAR_43);
  }

  VAR_40 = VAR_7 | VAR_8;

  VAR_35->mii.force_media = 0;
 }

 if (FUNC_3(VAR_29, &VAR_35->flags))
  VAR_40 |= VAR_10;

 FUNC_2(VAR_35, VAR_22, VAR_40);

 if (VAR_40 & VAR_10) {
  int VAR_46;

  for (VAR_46 = 0; VAR_46 < 50; VAR_46++) {
   FUNC_0(20);
   if ((FUNC_1(VAR_35, VAR_22) & VAR_10) == 0)
    break;
  }
 }

out:
 return VAR_41;
}
