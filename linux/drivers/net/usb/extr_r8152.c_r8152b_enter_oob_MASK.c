
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8152 {int dummy; } ;


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
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;
 int FUNC_4 (struct r8152*,int ,int ,int) ;
 int FUNC_5 (struct r8152*,int ,int ,int) ;
 int FUNC_6 (struct r8152*) ;
 int FUNC_7 (struct r8152*,int) ;
 int FUNC_8 (struct r8152*,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct r8152 *VAR_21)
{
 u32 VAR_22;
 int VAR_23;

 VAR_22 = FUNC_0(VAR_21, VAR_3, VAR_6);
 VAR_22 &= ~VAR_4;
 FUNC_3(VAR_21, VAR_3, VAR_6, VAR_22);

 FUNC_4(VAR_21, VAR_3, VAR_9, VAR_18);
 FUNC_4(VAR_21, VAR_3, VAR_10, VAR_19);
 FUNC_4(VAR_21, VAR_3, VAR_11, VAR_20);

 FUNC_6(VAR_21);

 for (VAR_23 = 0; VAR_23 < 1000; VAR_23++) {
  VAR_22 = FUNC_0(VAR_21, VAR_3, VAR_6);
  if (VAR_22 & VAR_2)
   break;
  FUNC_9(1000, 2000);
 }

 VAR_22 = FUNC_2(VAR_21, VAR_3, VAR_12);
 VAR_22 |= VAR_16;
 FUNC_5(VAR_21, VAR_3, VAR_12, VAR_22);

 for (VAR_23 = 0; VAR_23 < 1000; VAR_23++) {
  VAR_22 = FUNC_0(VAR_21, VAR_3, VAR_6);
  if (VAR_22 & VAR_2)
   break;
  FUNC_9(1000, 2000);
 }

 FUNC_5(VAR_21, VAR_3, VAR_8, VAR_17);

 FUNC_7(VAR_21, 1);

 VAR_22 = FUNC_2(VAR_21, VAR_3, VAR_5);
 VAR_22 |= VAR_0;
 FUNC_5(VAR_21, VAR_3, VAR_5, VAR_22);

 VAR_22 = FUNC_0(VAR_21, VAR_3, VAR_6);
 VAR_22 |= VAR_4 | VAR_1;
 FUNC_3(VAR_21, VAR_3, VAR_6, VAR_22);

 FUNC_8(VAR_21, 0);

 VAR_22 = FUNC_1(VAR_21, VAR_3, VAR_7);
 VAR_22 |= VAR_15 | VAR_14 | VAR_13;
 FUNC_4(VAR_21, VAR_3, VAR_7, VAR_22);
}
