
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct alx_hw {int rx_ctrl; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct alx_hw*) ;
 scalar_t__ FUNC_1 (struct alx_hw*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct alx_hw*,int ) ;
 int FUNC_4 (struct alx_hw*,int ) ;
 int FUNC_5 (struct alx_hw*) ;
 int FUNC_6 (struct alx_hw*,int ,int) ;
 int FUNC_7 (int) ;

int FUNC_8(struct alx_hw *VAR_24)
{
 u32 VAR_25, VAR_26;
 int VAR_27, VAR_28;
 u8 VAR_29;
 bool VAR_30;

 VAR_26 = 0;
 VAR_29 = FUNC_0(VAR_24);
 VAR_30 = FUNC_2(VAR_29) && FUNC_1(VAR_24);


 FUNC_6(VAR_24, VAR_15, 0xFFFFFFFF);
 FUNC_6(VAR_24, VAR_1, 0);
 FUNC_6(VAR_24, VAR_2, VAR_3);

 VAR_28 = FUNC_5(VAR_24);
 if (VAR_28)
  return VAR_28;


 FUNC_6(VAR_24, VAR_19, 1);


 if (VAR_30) {
  VAR_26 = FUNC_3(VAR_24, VAR_16);
  if (VAR_26 & (VAR_18 | VAR_17))
   FUNC_6(VAR_24, VAR_16,
     VAR_26 & ~(VAR_18 |
         VAR_17));
 }


 VAR_25 = FUNC_3(VAR_24, VAR_5);
 FUNC_6(VAR_24, VAR_5,
   VAR_25 | VAR_6 | VAR_7);


 FUNC_7(10);
 for (VAR_27 = 0; VAR_27 < VAR_0; VAR_27++) {
  VAR_25 = FUNC_3(VAR_24, VAR_19);
  if (VAR_25 == 0)
   break;
  FUNC_7(10);
 }
 for (; VAR_27 < VAR_0; VAR_27++) {
  VAR_25 = FUNC_3(VAR_24, VAR_5);
  if ((VAR_25 & VAR_6) == 0)
   break;
  FUNC_7(10);
 }
 if (VAR_27 == VAR_0)
  return -VAR_23;
 FUNC_7(10);

 if (VAR_30) {
  FUNC_6(VAR_24, VAR_5, VAR_25 | VAR_8);

  if (VAR_26 & (VAR_18 | VAR_17))
   FUNC_6(VAR_24, VAR_16, VAR_26);
 }

 FUNC_4(VAR_24, VAR_29);




 VAR_25 = FUNC_3(VAR_24, VAR_10);
 FUNC_6(VAR_24, VAR_10,
   (VAR_25 & ~VAR_11) |
   VAR_12);
 VAR_25 = FUNC_3(VAR_24, VAR_9);
 VAR_25 &= ~VAR_13;
 if (FUNC_2(VAR_29))
  VAR_25 &= ~VAR_14;
 FUNC_6(VAR_24, VAR_9, VAR_25);
 FUNC_7(20);


 FUNC_6(VAR_24, VAR_4, VAR_24->rx_ctrl);

 VAR_25 = FUNC_3(VAR_24, VAR_20);
 FUNC_6(VAR_24, VAR_20,
   VAR_25 | VAR_21 |
   VAR_22);

 return 0;
}
