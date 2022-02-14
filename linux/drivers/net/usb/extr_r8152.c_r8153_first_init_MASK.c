
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8152 {TYPE_1__* netdev; } ;
struct TYPE_2__ {int features; int mtu; } ;


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
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;
 int FUNC_4 (struct r8152*,int ,int ,int) ;
 int FUNC_5 (struct r8152*,int ,int ,int) ;
 int FUNC_6 (struct r8152*,int) ;
 int FUNC_7 (struct r8152*) ;
 int FUNC_8 (struct r8152*) ;
 int FUNC_9 (struct r8152*) ;
 int FUNC_10 (struct r8152*,int) ;
 int FUNC_11 (struct r8152*,int) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static void FUNC_13(struct r8152 *VAR_25)
{
 u32 VAR_26;
 int VAR_27;

 FUNC_6(VAR_25, 0);
 FUNC_11(VAR_25, 1);
 FUNC_7(VAR_25);

 VAR_26 = FUNC_1(VAR_25, VAR_3, VAR_9);
 VAR_26 &= ~VAR_17;
 FUNC_4(VAR_25, VAR_3, VAR_9, VAR_26);

 FUNC_8(VAR_25);
 FUNC_9(VAR_25);

 VAR_26 = FUNC_0(VAR_25, VAR_3, VAR_8);
 VAR_26 &= ~VAR_6;
 FUNC_3(VAR_25, VAR_3, VAR_8, VAR_26);

 VAR_26 = FUNC_2(VAR_25, VAR_3, VAR_14);
 VAR_26 &= ~VAR_2;
 FUNC_5(VAR_25, VAR_3, VAR_14, VAR_26);

 for (VAR_27 = 0; VAR_27 < 1000; VAR_27++) {
  VAR_26 = FUNC_0(VAR_25, VAR_3, VAR_8);
  if (VAR_26 & VAR_1)
   break;
  FUNC_12(1000, 2000);
 }

 VAR_26 = FUNC_2(VAR_25, VAR_3, VAR_14);
 VAR_26 |= VAR_18;
 FUNC_5(VAR_25, VAR_3, VAR_14, VAR_26);

 for (VAR_27 = 0; VAR_27 < 1000; VAR_27++) {
  VAR_26 = FUNC_0(VAR_25, VAR_3, VAR_8);
  if (VAR_26 & VAR_1)
   break;
  FUNC_12(1000, 2000);
 }

 FUNC_10(VAR_25, VAR_25->netdev->features & VAR_5);

 VAR_26 = VAR_25->netdev->mtu + VAR_24 + VAR_0;
 FUNC_5(VAR_25, VAR_3, VAR_10, VAR_26);
 FUNC_3(VAR_25, VAR_3, VAR_7, VAR_4);

 VAR_26 = FUNC_2(VAR_25, VAR_3, VAR_15);
 VAR_26 |= VAR_22;
 FUNC_5(VAR_25, VAR_3, VAR_15, VAR_26);

 FUNC_8(VAR_25);


 FUNC_4(VAR_25, VAR_3, VAR_11, VAR_19);
 FUNC_5(VAR_25, VAR_3, VAR_12, VAR_20);
 FUNC_5(VAR_25, VAR_3, VAR_13, VAR_21);

 FUNC_4(VAR_25, VAR_3, VAR_16, VAR_23);
}
