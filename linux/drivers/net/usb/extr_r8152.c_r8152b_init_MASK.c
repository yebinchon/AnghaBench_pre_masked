
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct r8152 {scalar_t__ version; int flags; } ;


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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ,int) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;
 int FUNC_4 (struct r8152*,int) ;
 int FUNC_5 (struct r8152*,int ) ;
 int FUNC_6 (struct r8152*,int ,int) ;
 int FUNC_7 (struct r8152*,int) ;
 int FUNC_8 (struct r8152*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct r8152 *VAR_23)
{
 u32 VAR_24;
 u16 VAR_25;

 if (FUNC_9(VAR_14, &VAR_23->flags))
  return;

 VAR_25 = FUNC_5(VAR_23, VAR_8);
 if (VAR_25 & VAR_0) {
  VAR_25 &= ~VAR_0;
  FUNC_6(VAR_23, VAR_8, VAR_25);
 }

 FUNC_4(VAR_23, 0);

 if (VAR_23->version == VAR_15) {
  VAR_24 = FUNC_1(VAR_23, VAR_6, VAR_11);
  VAR_24 &= ~VAR_3;
  FUNC_3(VAR_23, VAR_6, VAR_11, VAR_24);
 }

 FUNC_7(VAR_23, 0);

 VAR_24 = FUNC_1(VAR_23, VAR_6, VAR_13);
 VAR_24 |= VAR_21 | VAR_9;
 FUNC_3(VAR_23, VAR_6, VAR_13, VAR_24);
 VAR_24 = FUNC_0(VAR_23, VAR_6, VAR_12);
 VAR_24 &= ~VAR_5;
 VAR_24 |= VAR_4 | VAR_1;
 FUNC_2(VAR_23, VAR_6, VAR_12, VAR_24);
 VAR_24 = VAR_2 | VAR_20 |
     VAR_19 | VAR_18;
 FUNC_3(VAR_23, VAR_6, VAR_10, VAR_24);

 FUNC_8(VAR_23);


 VAR_24 = FUNC_1(VAR_23, VAR_7, VAR_22);
 VAR_24 &= ~(VAR_16 | VAR_17);
 FUNC_3(VAR_23, VAR_7, VAR_22, VAR_24);
}
