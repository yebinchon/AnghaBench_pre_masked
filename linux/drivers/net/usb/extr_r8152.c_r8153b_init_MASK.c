
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct r8152 {int coalesce; int flags; int udev; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ,int) ;
 int FUNC_3 (struct r8152*,int ) ;
 int FUNC_4 (struct r8152*,int ,int) ;
 int FUNC_5 (struct r8152*,int ) ;
 int FUNC_6 (struct r8152*,int) ;
 int FUNC_7 (struct r8152*,int) ;
 int FUNC_8 (struct r8152*,int) ;
 int FUNC_9 (struct r8152*,int) ;
 int FUNC_10 (struct r8152*,int) ;
 int FUNC_11 (struct r8152*,int) ;
 int FUNC_12 (struct r8152*) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct r8152 *VAR_16)
{
 u32 VAR_17;
 u16 VAR_18;
 int VAR_19;

 if (FUNC_14(VAR_10, &VAR_16->flags))
  return;

 FUNC_9(VAR_16, 0);

 for (VAR_19 = 0; VAR_19 < 500; VAR_19++) {
  if (FUNC_1(VAR_16, VAR_4, VAR_8) &
      VAR_0)
   break;
  FUNC_0(20);
 }

 VAR_18 = FUNC_5(VAR_16, 0);

 VAR_18 = FUNC_3(VAR_16, VAR_6);
 if (VAR_18 & VAR_1) {
  VAR_18 &= ~VAR_1;
  FUNC_4(VAR_16, VAR_6, VAR_18);
 }

 VAR_18 = FUNC_5(VAR_16, VAR_7);

 FUNC_7(VAR_16, 0);


 FUNC_2(VAR_16, VAR_5, VAR_13, 0x0fff);


 FUNC_2(VAR_16, VAR_5, VAR_14, 500);

 FUNC_8(VAR_16, 0);
 FUNC_10(VAR_16, 0);
 FUNC_6(VAR_16, 0);
 FUNC_11(VAR_16, 0);
 FUNC_9(VAR_16, 1);
 FUNC_15(VAR_16->udev);


 VAR_17 = FUNC_1(VAR_16, VAR_4, VAR_9);
 VAR_17 |= VAR_3;
 FUNC_2(VAR_16, VAR_4, VAR_9, VAR_17);

 FUNC_13(VAR_2, &VAR_16->flags);


 VAR_17 = FUNC_1(VAR_16, VAR_5, VAR_15);
 VAR_17 &= ~(VAR_11 | VAR_12);
 FUNC_2(VAR_16, VAR_5, VAR_15, VAR_17);

 FUNC_12(VAR_16);

 VAR_16->coalesce = 15000;
}
