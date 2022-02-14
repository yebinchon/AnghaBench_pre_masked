
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8152 {int version; TYPE_1__* netdev; } ;
struct TYPE_2__ {int mtu; } ;


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
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;
 int FUNC_4 (struct r8152*,int ,int ,int) ;
 int FUNC_5 (struct r8152*,int ,int ,int) ;
 int FUNC_6 (struct r8152*,int) ;
 int FUNC_7 (struct r8152*) ;
 int FUNC_8 (struct r8152*) ;
 int FUNC_9 (struct r8152*,int) ;
 int FUNC_10 (struct r8152*,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct r8152 *VAR_19)
{
 u32 VAR_20;
 int VAR_21;

 FUNC_6(VAR_19, 1);

 VAR_20 = FUNC_0(VAR_19, VAR_4, VAR_7);
 VAR_20 &= ~VAR_5;
 FUNC_3(VAR_19, VAR_4, VAR_7, VAR_20);

 FUNC_7(VAR_19);
 FUNC_8(VAR_19);

 for (VAR_21 = 0; VAR_21 < 1000; VAR_21++) {
  VAR_20 = FUNC_0(VAR_19, VAR_4, VAR_7);
  if (VAR_20 & VAR_3)
   break;
  FUNC_11(1000, 2000);
 }

 VAR_20 = FUNC_2(VAR_19, VAR_4, VAR_10);
 VAR_20 |= VAR_16;
 FUNC_5(VAR_19, VAR_4, VAR_10, VAR_20);

 for (VAR_21 = 0; VAR_21 < 1000; VAR_21++) {
  VAR_20 = FUNC_0(VAR_19, VAR_4, VAR_7);
  if (VAR_20 & VAR_3)
   break;
  FUNC_11(1000, 2000);
 }

 VAR_20 = VAR_19->netdev->mtu + VAR_18 + VAR_2;
 FUNC_5(VAR_19, VAR_4, VAR_9, VAR_20);

 switch (VAR_19->version) {
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_20 = FUNC_2(VAR_19, VAR_4, VAR_11);
  VAR_20 &= ~VAR_17;
  FUNC_5(VAR_19, VAR_4, VAR_11, VAR_20);
  break;

 case 129:
 case 128:




  FUNC_5(VAR_19, VAR_4, VAR_12, 0x00ff);
  break;

 default:
  break;
 }

 FUNC_9(VAR_19, 1);

 VAR_20 = FUNC_2(VAR_19, VAR_4, VAR_6);
 VAR_20 |= VAR_0;
 FUNC_5(VAR_19, VAR_4, VAR_6, VAR_20);

 VAR_20 = FUNC_0(VAR_19, VAR_4, VAR_7);
 VAR_20 |= VAR_5 | VAR_1;
 FUNC_3(VAR_19, VAR_4, VAR_7, VAR_20);

 FUNC_10(VAR_19, 0);

 VAR_20 = FUNC_1(VAR_19, VAR_4, VAR_8);
 VAR_20 |= VAR_15 | VAR_14 | VAR_13;
 FUNC_4(VAR_19, VAR_4, VAR_8, VAR_20);
}
