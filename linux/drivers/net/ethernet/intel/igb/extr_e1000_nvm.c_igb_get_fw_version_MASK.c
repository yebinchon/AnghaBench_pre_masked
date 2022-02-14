
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_3__ nvm; TYPE_1__ mac; } ;
struct e1000_fw_version {int eep_major; int eep_minor; int eep_build; int or_valid; int or_major; int or_build; int or_patch; int etrack_id; } ;


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






 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,struct e1000_fw_version*) ;
 int FUNC_2 (struct e1000_fw_version*,int ,int) ;
 int FUNC_3 (struct e1000_hw*,int,int,int*) ;
 int FUNC_4 (struct e1000_hw*,int,int,int*) ;
 int FUNC_5 (struct e1000_hw*,int,int,int*) ;
 int FUNC_6 (struct e1000_hw*,int,int,int*) ;
 int FUNC_7 (struct e1000_hw*,int,int,int*) ;
 int FUNC_8 (struct e1000_hw*,int,int,int*) ;
 int FUNC_9 (struct e1000_hw*,int,int,int*) ;
 int FUNC_10 (struct e1000_hw*,int,int,int*) ;

void FUNC_11(struct e1000_hw *VAR_18, struct e1000_fw_version *VAR_19)
{
 u16 VAR_20, VAR_21, VAR_22, VAR_23;
 u8 VAR_24, VAR_25, VAR_26, VAR_27;
 u16 VAR_28, VAR_29, VAR_30;

 FUNC_2(VAR_19, 0, sizeof(struct e1000_fw_version));




 VAR_18->nvm.ops.read(VAR_18, VAR_4, 1, &VAR_22);
 switch (VAR_18->mac.type) {
 case 129:
  FUNC_1(VAR_18, VAR_19);
  return;
 case 133:
 case 132:
 case 131:



  if ((VAR_22 & VAR_11) != VAR_6) {
   VAR_18->nvm.ops.read(VAR_18, VAR_16, 1, &VAR_23);
   VAR_19->eep_major = (VAR_23 & VAR_11)
           >> VAR_12;
   VAR_19->eep_minor = (VAR_23 & VAR_13)
           >> VAR_14;
   VAR_19->eep_build = (VAR_23 & VAR_10);
   goto etrack_id;
  }
  break;
 case 130:
  if (!(FUNC_0(VAR_18))) {
   FUNC_1(VAR_18, VAR_19);
   return;
  }

 case 128:

  VAR_18->nvm.ops.read(VAR_18, VAR_2, 1, &VAR_30);
  if ((VAR_30 != 0x0) &&
      (VAR_30 != VAR_17)) {

   VAR_18->nvm.ops.read(VAR_18, (VAR_1 + VAR_30
      + 1), 1, &VAR_28);
   VAR_18->nvm.ops.read(VAR_18, (VAR_1 + VAR_30),
      1, &VAR_29);


   if ((VAR_28 && VAR_29) &&
       ((VAR_28 != VAR_17) &&
        (VAR_29 != VAR_17))) {

    VAR_19->or_valid = 1;
    VAR_19->or_major =
     VAR_29 >> VAR_3;
    VAR_19->or_build =
     (VAR_29 << VAR_3)
     | (VAR_28 >> VAR_3);
    VAR_19->or_patch =
     VAR_28 & VAR_0;
   }
  }
  break;
 default:
  return;
 }
 VAR_18->nvm.ops.read(VAR_18, VAR_16, 1, &VAR_23);
 VAR_19->eep_major = (VAR_23 & VAR_11)
         >> VAR_12;


 if ((VAR_23 & VAR_15) == 0x0) {
  VAR_21 = (VAR_23 & VAR_0);
 } else {
  VAR_21 = (VAR_23 & VAR_13)
    >> VAR_14;
 }



 VAR_24 = VAR_21 / VAR_8;
 VAR_25 = VAR_24 * VAR_9;
 VAR_26 = VAR_21 % VAR_8;
 VAR_27 = VAR_25 + VAR_26;
 VAR_19->eep_minor = VAR_27;

etrack_id:
 if ((VAR_22 & VAR_11) == VAR_6) {
  VAR_18->nvm.ops.read(VAR_18, VAR_7, 1, &VAR_21);
  VAR_18->nvm.ops.read(VAR_18, (VAR_7 + 1), 1, &VAR_20);
  VAR_19->etrack_id = (VAR_20 << VAR_5)
   | VAR_21;
 }
}
