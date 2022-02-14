
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
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
 int FUNC_0 (int) ;
 int VAR_13 ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ) ;
 int FUNC_3 (struct r8152*,int ,int) ;
 int FUNC_4 (struct r8152*,int ,int ,int) ;
 int FUNC_5 (int) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_6(struct r8152 *VAR_15, bool VAR_16)
{
 u16 VAR_17, VAR_18, VAR_19;
 u32 VAR_20;

 VAR_20 = FUNC_1(VAR_15, VAR_4, VAR_8);
 VAR_17 = FUNC_2(VAR_15, VAR_5) & ~VAR_14;
 VAR_18 = FUNC_2(VAR_15, VAR_6);
 VAR_19 = FUNC_2(VAR_15, VAR_7) & ~VAR_13;

 if (VAR_16) {
  VAR_20 |= VAR_2 | VAR_3;
  VAR_17 |= VAR_0 | VAR_1 | VAR_12 | VAR_11;
  VAR_17 |= FUNC_5(1);
  VAR_18 |= VAR_9 | VAR_10;
  VAR_19 |= FUNC_0(42);
 } else {
  VAR_20 &= ~(VAR_2 | VAR_3);
  VAR_17 &= ~(VAR_0 | VAR_1 | VAR_12 |
        VAR_11);
  VAR_17 |= FUNC_5(7);
  VAR_18 &= ~(VAR_9 | VAR_10);
  VAR_19 |= FUNC_0(511);
 }

 FUNC_4(VAR_15, VAR_4, VAR_8, VAR_20);
 FUNC_3(VAR_15, VAR_5, VAR_17);
 FUNC_3(VAR_15, VAR_6, VAR_18);
 FUNC_3(VAR_15, VAR_7, VAR_19);
}
