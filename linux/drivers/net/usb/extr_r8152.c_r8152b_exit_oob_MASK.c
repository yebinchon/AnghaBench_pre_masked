
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct r8152 {TYPE_2__* netdev; TYPE_1__* udev; } ;
struct TYPE_4__ {int features; } ;
struct TYPE_3__ {scalar_t__ speed; } ;


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
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;
 int FUNC_4 (struct r8152*,int ,int ,int) ;
 int FUNC_5 (struct r8152*,int ,int ,int) ;
 int FUNC_6 (struct r8152*) ;
 int FUNC_7 (struct r8152*) ;
 int FUNC_8 (struct r8152*,int) ;
 int FUNC_9 (struct r8152*,int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct r8152 *VAR_37)
{
 u32 VAR_38;
 int VAR_39;

 VAR_38 = FUNC_1(VAR_37, VAR_3, VAR_10);
 VAR_38 &= ~VAR_18;
 FUNC_4(VAR_37, VAR_3, VAR_10, VAR_38);

 FUNC_9(VAR_37, 1);
 FUNC_6(VAR_37);
 FUNC_3(VAR_37, VAR_3, VAR_8, VAR_0);
 FUNC_3(VAR_37, VAR_3, VAR_7, 0x00);

 VAR_38 = FUNC_0(VAR_37, VAR_3, VAR_9);
 VAR_38 &= ~VAR_6;
 FUNC_3(VAR_37, VAR_3, VAR_9, VAR_38);

 VAR_38 = FUNC_2(VAR_37, VAR_3, VAR_15);
 VAR_38 &= ~VAR_2;
 FUNC_5(VAR_37, VAR_3, VAR_15, VAR_38);

 for (VAR_39 = 0; VAR_39 < 1000; VAR_39++) {
  VAR_38 = FUNC_0(VAR_37, VAR_3, VAR_9);
  if (VAR_38 & VAR_1)
   break;
  FUNC_10(1000, 2000);
 }

 VAR_38 = FUNC_2(VAR_37, VAR_3, VAR_15);
 VAR_38 |= VAR_19;
 FUNC_5(VAR_37, VAR_3, VAR_15, VAR_38);

 for (VAR_39 = 0; VAR_39 < 1000; VAR_39++) {
  VAR_38 = FUNC_0(VAR_37, VAR_3, VAR_9);
  if (VAR_38 & VAR_1)
   break;
  FUNC_10(1000, 2000);
 }

 FUNC_7(VAR_37);


 FUNC_4(VAR_37, VAR_3, VAR_12, VAR_21);

 if (VAR_37->udev->speed == VAR_33 ||
     VAR_37->udev->speed == VAR_34) {

  FUNC_4(VAR_37, VAR_3, VAR_13,
    VAR_22);
  FUNC_4(VAR_37, VAR_3, VAR_14,
    VAR_24);
 } else {

  FUNC_4(VAR_37, VAR_3, VAR_13,
    VAR_23);
  FUNC_4(VAR_37, VAR_3, VAR_14,
    VAR_25);
 }


 FUNC_4(VAR_37, VAR_3, VAR_17, VAR_29);

 FUNC_3(VAR_37, VAR_4, VAR_35, VAR_30);
 FUNC_4(VAR_37, VAR_4, VAR_32, VAR_26);
 FUNC_4(VAR_37, VAR_4, VAR_36,
   VAR_28 | VAR_31);

 FUNC_8(VAR_37, VAR_37->netdev->features & VAR_5);

 FUNC_5(VAR_37, VAR_3, VAR_11, VAR_20);

 VAR_38 = FUNC_2(VAR_37, VAR_3, VAR_16);
 VAR_38 |= VAR_27;
 FUNC_5(VAR_37, VAR_3, VAR_16, VAR_38);
}
