
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct sky2_hw*,int ) ;
 int FUNC_1 (struct sky2_hw*,int ,int ) ;
 int FUNC_2 (struct sky2_hw*,int ) ;
 int FUNC_3 (struct sky2_hw*,int ,int ) ;
 int FUNC_4 (struct sky2_hw*,int ,int ) ;
 int FUNC_5 (struct sky2_hw*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct sky2_hw *VAR_28)
{

 FUNC_5(VAR_28, VAR_1,
      VAR_12 | VAR_14 | VAR_13 | VAR_15);


 FUNC_4(VAR_28, VAR_3, VAR_19);

 if (VAR_28->chip_id == VAR_5 && VAR_28->chip_rev > VAR_6)

  FUNC_5(VAR_28, VAR_4,
       VAR_26 | VAR_22 |
       VAR_20 | VAR_27 |
       VAR_23 | VAR_21);
 else
  FUNC_5(VAR_28, VAR_4, 0);

 if (VAR_28->flags & VAR_18) {
  u32 VAR_29;

  FUNC_1(VAR_28, VAR_9, 0);

  VAR_29 = FUNC_0(VAR_28, VAR_10);

  VAR_29 &= VAR_16;
  FUNC_1(VAR_28, VAR_10, VAR_29);

  VAR_29 = FUNC_0(VAR_28, VAR_11);

  VAR_29 &= VAR_17;
  FUNC_1(VAR_28, VAR_11, VAR_29);

  FUNC_1(VAR_28, VAR_8, 0);

  FUNC_3(VAR_28, VAR_0, VAR_24);


  VAR_29 = FUNC_2(VAR_28, VAR_2);
  VAR_29 |= VAR_7;
  FUNC_4(VAR_28, VAR_2, VAR_29);

  FUNC_2(VAR_28, VAR_2);
 }


 FUNC_3(VAR_28, VAR_0, VAR_25);
}
