
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct r8152 {scalar_t__ version; int coalesce; TYPE_1__* udev; int flags; } ;
struct TYPE_2__ {int speed; } ;


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
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int) ;
 int FUNC_4 (struct r8152*,int ,int ,int) ;
 int FUNC_5 (struct r8152*,int ,int ,int) ;
 int FUNC_6 (int) ;
 int VAR_48 ;
 int FUNC_7 (struct r8152*,int ) ;
 int FUNC_8 (struct r8152*,int ,int) ;
 int FUNC_9 (struct r8152*,int) ;
 int FUNC_10 (struct r8152*,int ) ;
 int FUNC_11 (struct r8152*,int) ;
 int FUNC_12 (struct r8152*,int) ;
 int FUNC_13 (struct r8152*,int) ;
 int FUNC_14 (struct r8152*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_17(struct r8152 *VAR_49)
{
 u32 VAR_50;
 u16 VAR_51;
 int VAR_52;

 if (FUNC_15(VAR_25, &VAR_49->flags))
  return;

 FUNC_12(VAR_49, 0);

 for (VAR_52 = 0; VAR_52 < 500; VAR_52++) {
  if (FUNC_2(VAR_49, VAR_16, VAR_21) &
      VAR_1)
   break;
  FUNC_0(20);
 }

 VAR_51 = FUNC_10(VAR_49, 0);

 if (VAR_49->version == VAR_26 || VAR_49->version == VAR_27 ||
     VAR_49->version == VAR_28)
  FUNC_3(VAR_49, VAR_19, VAR_3 | VAR_0 | VAR_10);

 VAR_51 = FUNC_7(VAR_49, VAR_18);
 if (VAR_51 & VAR_2) {
  VAR_51 &= ~VAR_2;
  FUNC_8(VAR_49, VAR_18, VAR_51);
 }

 VAR_51 = FUNC_10(VAR_49, VAR_20);

 FUNC_13(VAR_49, 0);

 if (VAR_49->version == VAR_27) {
  VAR_50 = FUNC_2(VAR_49, VAR_17, VAR_44);
  VAR_50 &= ~VAR_48;
  VAR_50 |= FUNC_6(96);
  FUNC_5(VAR_49, VAR_17, VAR_44, VAR_50);

  VAR_50 = FUNC_1(VAR_49, VAR_17, VAR_45);
  VAR_50 |= VAR_36 | VAR_37;
  FUNC_4(VAR_49, VAR_17, VAR_45, VAR_50);
 } else if (VAR_49->version == VAR_28) {
  VAR_50 = FUNC_1(VAR_49, VAR_16, VAR_22);
  VAR_50 &= ~VAR_9;
  FUNC_4(VAR_49, VAR_16, VAR_22, VAR_50);

  VAR_50 = FUNC_1(VAR_49, VAR_17, VAR_41);
  if (FUNC_2(VAR_49, VAR_17, VAR_39) == 0)
   VAR_50 &= ~VAR_8;
  else
   VAR_50 |= VAR_8;
  FUNC_4(VAR_49, VAR_17, VAR_41, VAR_50);
 } else if (VAR_49->version == VAR_29) {
  VAR_50 = FUNC_1(VAR_49, VAR_17, VAR_41);
  if (FUNC_2(VAR_49, VAR_17, VAR_39) == 0)
   VAR_50 &= ~VAR_8;
  else
   VAR_50 |= VAR_8;
  FUNC_4(VAR_49, VAR_17, VAR_41, VAR_50);
 }

 VAR_50 = FUNC_1(VAR_49, VAR_17, VAR_42);
 VAR_50 |= VAR_11;
 FUNC_4(VAR_49, VAR_17, VAR_42, VAR_50);

 VAR_50 = FUNC_2(VAR_49, VAR_17, VAR_47);
 VAR_50 &= ~VAR_35;
 FUNC_5(VAR_49, VAR_17, VAR_47, VAR_50);

 VAR_50 = FUNC_2(VAR_49, VAR_16, VAR_23);
 VAR_50 &= ~VAR_13;
 FUNC_5(VAR_49, VAR_16, VAR_23, VAR_50);

 VAR_50 = VAR_12 | VAR_24;
 if (VAR_49->version == VAR_27 && VAR_49->udev->speed < 129)
  VAR_50 |= VAR_14;
 else
  VAR_50 |= VAR_15;
 FUNC_4(VAR_49, VAR_17, VAR_43, VAR_50);

 VAR_50 = FUNC_2(VAR_49, VAR_17, VAR_38);
 VAR_50 &= ~VAR_33;
 VAR_50 |= VAR_34 | VAR_32;
 FUNC_5(VAR_49, VAR_17, VAR_38, VAR_50);

 FUNC_5(VAR_49, VAR_17, VAR_40, 0x0001);

 FUNC_11(VAR_49, 0);
 FUNC_12(VAR_49, 1);
 FUNC_9(VAR_49, 0);
 FUNC_16(VAR_49->udev);


 VAR_50 = FUNC_2(VAR_49, VAR_17, VAR_46);
 VAR_50 &= ~(VAR_30 | VAR_31);
 if (FUNC_15(VAR_7, &VAR_49->flags))
  VAR_50 |= VAR_30;

 FUNC_5(VAR_49, VAR_17, VAR_46, VAR_50);

 FUNC_14(VAR_49);

 switch (VAR_49->udev->speed) {
 case 129:
 case 128:
  VAR_49->coalesce = VAR_6;
  break;
 case 130:
  VAR_49->coalesce = VAR_4;
  break;
 default:
  VAR_49->coalesce = VAR_5;
  break;
 }
}
