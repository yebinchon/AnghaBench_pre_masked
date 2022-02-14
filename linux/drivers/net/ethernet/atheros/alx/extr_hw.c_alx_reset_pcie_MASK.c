
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct alx_hw {int pdev; } ;


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
 int FUNC_0 (struct alx_hw*,int,int) ;
 int FUNC_1 (struct alx_hw*) ;
 scalar_t__ FUNC_2 (struct alx_hw*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct alx_hw*,int ) ;
 int FUNC_5 (struct alx_hw*,int ,int) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int) ;

void FUNC_9(struct alx_hw *VAR_12)
{
 u8 VAR_13 = FUNC_1(VAR_12);
 u32 VAR_14;
 u16 VAR_15;


 FUNC_6(VAR_12->pdev, VAR_10, &VAR_15);
 if (!(VAR_15 & VAR_3) || (VAR_15 & VAR_11)) {
  VAR_15 = (VAR_15 | VAR_3) & ~VAR_11;
  FUNC_7(VAR_12->pdev, VAR_10, VAR_15);
 }


 VAR_14 = FUNC_4(VAR_12, VAR_9);
 FUNC_5(VAR_12, VAR_9, 0);

 VAR_14 = FUNC_4(VAR_12, VAR_4);
 FUNC_5(VAR_12, VAR_4, VAR_14 & ~VAR_5);


 VAR_14 = FUNC_4(VAR_12, VAR_6);
 VAR_14 &= ~(VAR_7 | VAR_8);
 FUNC_5(VAR_12, VAR_6, VAR_14);


 VAR_14 = FUNC_4(VAR_12, VAR_0);
 if (FUNC_3(VAR_13) && FUNC_2(VAR_12)) {
  if ((VAR_14 & VAR_2) == 0 ||
      (VAR_14 & VAR_1) == 0)
   FUNC_5(VAR_12, VAR_0,
     VAR_14 | VAR_1 |
     VAR_2);
 } else {
  if ((VAR_14 & VAR_2) == 0 ||
      (VAR_14 & VAR_1) != 0)
   FUNC_5(VAR_12, VAR_0,
     (VAR_14 & ~VAR_1) |
     VAR_2);
 }


 FUNC_0(VAR_12, 1, 1);

 FUNC_8(10);
}
