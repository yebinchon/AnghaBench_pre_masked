
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {scalar_t__ curr_band; } ;


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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_33)
{
 u8 VAR_34[9];
 u8 VAR_35;
 u16 VAR_36;
 u8 VAR_37;
 int VAR_38;




 VAR_36 = FUNC_1(VAR_33, VAR_0);
 if (!FUNC_2(VAR_36, VAR_1))
  return 0;
 if (VAR_33->curr_band == VAR_32) {
  VAR_36 = FUNC_1(VAR_33, VAR_17);
  VAR_34[0] = FUNC_2(VAR_36,
     VAR_19);
  VAR_34[1] = FUNC_2(VAR_36,
     VAR_18);

  VAR_36 = FUNC_1(VAR_33, VAR_20);
  VAR_34[2] = FUNC_2(VAR_36,
     VAR_22);
  VAR_34[3] = FUNC_2(VAR_36,
     VAR_21);

  VAR_36 = FUNC_1(VAR_33, VAR_23);
  VAR_34[4] = FUNC_2(VAR_36,
     VAR_25);
  VAR_34[5] = FUNC_2(VAR_36,
     VAR_24);

  VAR_36 = FUNC_1(VAR_33, VAR_26);
  VAR_34[6] = FUNC_2(VAR_36,
     VAR_27);
  VAR_34[7] = FUNC_2(VAR_36,
     VAR_28);

  VAR_36 = FUNC_1(VAR_33, VAR_29);
  VAR_34[8] = FUNC_2(VAR_36,
     VAR_31);

  VAR_37 = FUNC_2(VAR_36,
       VAR_30);
 } else {
  VAR_36 = FUNC_1(VAR_33, VAR_2);
  VAR_34[0] = FUNC_2(VAR_36,
     VAR_4);
  VAR_34[1] = FUNC_2(VAR_36,
     VAR_3);

  VAR_36 = FUNC_1(VAR_33, VAR_5);
  VAR_34[2] = FUNC_2(VAR_36,
     VAR_7);
  VAR_34[3] = FUNC_2(VAR_36,
     VAR_6);

  VAR_36 = FUNC_1(VAR_33, VAR_8);
  VAR_34[4] = FUNC_2(VAR_36,
     VAR_10);
  VAR_34[5] = FUNC_2(VAR_36,
     VAR_9);

  VAR_36 = FUNC_1(VAR_33, VAR_11);
  VAR_34[6] = FUNC_2(VAR_36,
     VAR_12);
  VAR_34[7] = FUNC_2(VAR_36,
     VAR_13);

  VAR_36 = FUNC_1(VAR_33, VAR_14);
  VAR_34[8] = FUNC_2(VAR_36,
     VAR_16);

  VAR_37 = FUNC_2(VAR_36,
       VAR_15);
 }




 if (VAR_34[4] == 0xff || VAR_37 == 0xff)
  return 0;




 VAR_35 = FUNC_0(VAR_33, 49);





 for (VAR_38 = 0; VAR_38 <= 3; VAR_38++) {
  if (VAR_35 > VAR_34[VAR_38])
   break;
 }

 if (VAR_38 == 4) {
  for (VAR_38 = 8; VAR_38 >= 5; VAR_38--) {
   if (VAR_35 < VAR_34[VAR_38])
    break;
  }
 }

 return (VAR_38 - 4) * VAR_37;
}
