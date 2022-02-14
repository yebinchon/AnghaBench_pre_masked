
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sky2_hw*,int ) ;
 int FUNC_2 (struct sky2_hw*,int ,int ) ;
 int FUNC_3 (struct sky2_hw*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct sky2_hw *VAR_18)
{
 if (VAR_18->chip_id == VAR_3 && VAR_18->chip_rev > VAR_4)
  FUNC_3(VAR_18, VAR_2, 0);
 else

  FUNC_3(VAR_18, VAR_2,
       VAR_15 | VAR_12 |
       VAR_10 | VAR_16 |
       VAR_13 | VAR_11);


 if ( (FUNC_1(VAR_18, VAR_0) & VAR_17) &&
      FUNC_0(VAR_18->pdev, VAR_5))
  FUNC_3(VAR_18, VAR_1,
       (VAR_6 | VAR_8 |
        VAR_7 | VAR_9));


 FUNC_2(VAR_18, VAR_0, VAR_14);
}
