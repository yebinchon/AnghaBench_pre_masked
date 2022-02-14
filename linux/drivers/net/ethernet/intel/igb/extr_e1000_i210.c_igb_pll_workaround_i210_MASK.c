
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


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
 int FUNC_0 (struct e1000_hw*,int,int*) ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*,int ,int*) ;
 int FUNC_3 (struct e1000_hw*,int ,int*) ;
 int FUNC_4 (struct e1000_hw*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int) ;

s32 FUNC_8(struct e1000_hw *VAR_20)
{
 s32 VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 u16 VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31;


 VAR_22 = FUNC_5(VAR_18);
 VAR_23 = FUNC_5(VAR_11);
 VAR_26 = VAR_23 & ~VAR_12;
 FUNC_7(VAR_11, VAR_26);


 VAR_21 = FUNC_0(VAR_20, VAR_7,
       &VAR_27);
 if (VAR_21)
  VAR_27 = VAR_8;
 VAR_30 = VAR_27 | VAR_9;
 FUNC_4(VAR_20, VAR_19, VAR_15);
 VAR_28 = VAR_17;
 for (VAR_31 = 0; VAR_31 < VAR_10; VAR_31++) {

  FUNC_2(VAR_20, VAR_16, &VAR_28);
  if ((VAR_28 & VAR_17)
      != VAR_17) {
   VAR_21 = 0;
   break;
  } else {
   VAR_21 = -VAR_6;
  }

  VAR_24 = FUNC_5(VAR_0);
  FUNC_7(VAR_0, VAR_24|VAR_4);

  VAR_25 = FUNC_5(VAR_1);
  VAR_25 |= (VAR_2 | VAR_3);
  FUNC_7(VAR_1, VAR_25);

  FUNC_7(VAR_18, 0);
  VAR_26 = (VAR_7 << 4) | (VAR_30 << 16);
  FUNC_7(VAR_5, VAR_26);

  FUNC_1(VAR_20, VAR_13, &VAR_29);
  VAR_29 |= VAR_14;
  FUNC_3(VAR_20, VAR_13, &VAR_29);
  FUNC_6(1000, 2000);
  VAR_29 &= ~VAR_14;
  FUNC_3(VAR_20, VAR_13, &VAR_29);
  VAR_26 = (VAR_7 << 4) | (VAR_27 << 16);
  FUNC_7(VAR_5, VAR_26);


  FUNC_7(VAR_18, VAR_22);
 }
 FUNC_4(VAR_20, VAR_19, 0);

 FUNC_7(VAR_11, VAR_23);
 return VAR_21;
}
