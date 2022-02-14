
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct alx_hw {int dummy; } ;


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
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct alx_hw*) ;
 scalar_t__ FUNC_2 (struct alx_hw*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct alx_hw*,int ) ;
 int FUNC_5 (struct alx_hw*,int ,int) ;

void FUNC_6(struct alx_hw *VAR_20, bool VAR_21, bool VAR_22)
{
 u32 VAR_23;
 u8 VAR_24 = FUNC_1(VAR_20);

 VAR_23 = FUNC_4(VAR_20, VAR_0);

 FUNC_0(VAR_23, VAR_14,
        VAR_15);
 VAR_23 |= VAR_16 |
    VAR_7 |
    VAR_10;
 FUNC_0(VAR_23, VAR_5, VAR_4);
 FUNC_0(VAR_23, VAR_12, VAR_13);
 VAR_23 &= ~(VAR_11 |
      VAR_9 |
      VAR_6 |
      VAR_18 |
      VAR_2|
      VAR_3 |
      VAR_8 |
      VAR_1 |
      VAR_19 |
      VAR_17);
 if (FUNC_3(VAR_24) && FUNC_2(VAR_20))
  VAR_23 |= VAR_11 | VAR_9;

 if (VAR_21)
  VAR_23 |= (VAR_3 | VAR_1);
 if (VAR_22)
  VAR_23 |= (VAR_8 | VAR_1);

 FUNC_5(VAR_20, VAR_0, VAR_23);
}
