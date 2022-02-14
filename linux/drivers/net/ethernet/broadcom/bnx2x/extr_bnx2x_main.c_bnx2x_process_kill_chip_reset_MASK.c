
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_28, bool VAR_29)
{
 u32 VAR_30, VAR_31, VAR_32, VAR_33;
 u32 VAR_34, VAR_35;





 VAR_34 =
  VAR_18 |
  VAR_17;






 VAR_30 =
  VAR_2 |
  VAR_4 |
  VAR_3;

 VAR_32 =
  VAR_21 |
  VAR_12 |
  VAR_14 |
  VAR_20 |
  VAR_22 |
  VAR_15 |
  VAR_19 |
  VAR_16 |
  VAR_8 |
  VAR_7 |
  VAR_9 |
  VAR_10 |
  VAR_11 |
  VAR_13 |
  VAR_24 |
  VAR_25;





 VAR_35 =
  VAR_26 |
  VAR_27;


 VAR_31 = 0xffffffff;

 if (FUNC_0(VAR_28))
  VAR_33 = 0xffff;
 else if (FUNC_1(VAR_28))
  VAR_33 = 0x1ffff;
 else if (FUNC_2(VAR_28))
  VAR_33 = 0xfffff;
 else
  VAR_33 = 0x3ffffff;


 if (!VAR_29)
  VAR_33 &= ~VAR_34;
 FUNC_3(VAR_28, VAR_0 + VAR_6,
        VAR_33 & (~VAR_32));

 FUNC_3(VAR_28, VAR_0 + VAR_1,
        VAR_31 & (~VAR_30));

 FUNC_4();

 FUNC_3(VAR_28, VAR_0 + VAR_23,
        VAR_33 & (~VAR_35));

 FUNC_4();

 FUNC_3(VAR_28, VAR_0 + VAR_5, VAR_31);
}
