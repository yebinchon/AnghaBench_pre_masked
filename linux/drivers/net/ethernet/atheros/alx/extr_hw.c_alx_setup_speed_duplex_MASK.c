
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
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
 int FUNC_0 (int,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (struct alx_hw*) ;
 int FUNC_2 (struct alx_hw*,int ) ;
 int FUNC_3 (struct alx_hw*,int ,int) ;
 int FUNC_4 (struct alx_hw*,int ,int) ;
 int FUNC_5 (struct alx_hw*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

int FUNC_8(struct alx_hw *VAR_23, u32 VAR_24, u8 VAR_25)
{
 u16 VAR_26, VAR_27, VAR_28;
 u32 VAR_29;
 int VAR_30 = 0;

 FUNC_4(VAR_23, VAR_12, 0);
 VAR_29 = FUNC_2(VAR_23, VAR_7);
 FUNC_0(VAR_29, VAR_8, 0);

 if (VAR_24 & VAR_4) {
  VAR_26 = VAR_6;
  VAR_26 |= FUNC_6(VAR_24);

  if (VAR_25 & VAR_9) {
   if (VAR_25 & VAR_10) {
    VAR_26 |= VAR_5;
    if (!(VAR_25 & VAR_11))
     VAR_26 |= VAR_3;
   } else if (VAR_25 & VAR_11) {
    VAR_26 |= VAR_3;
   }
  }
  VAR_27 = 0;
  if (FUNC_1(VAR_23))
   VAR_27 = FUNC_7(VAR_24);

  VAR_28 = VAR_17 | VAR_14 | VAR_15;

  if (FUNC_4(VAR_23, VAR_20, VAR_26) ||
      FUNC_4(VAR_23, VAR_22, VAR_27) ||
      FUNC_4(VAR_23, VAR_21, VAR_28))
   VAR_30 = -VAR_19;
 } else {
  VAR_28 = VAR_17;
  if (VAR_24 == VAR_1 ||
      VAR_24 == VAR_0)
   VAR_28 |= VAR_18;
  if (VAR_24 == VAR_2 ||
      VAR_24 == VAR_0)
   VAR_28 |= VAR_16;

  VAR_30 = FUNC_4(VAR_23, VAR_21, VAR_28);
 }

 if (!VAR_30) {
  FUNC_4(VAR_23, VAR_12, VAR_13);
  VAR_29 |= FUNC_5(VAR_23, VAR_24);
 }

 FUNC_3(VAR_23, VAR_7, VAR_29);

 return VAR_30;
}
