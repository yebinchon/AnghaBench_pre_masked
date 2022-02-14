
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mt7603_dev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mt7603_dev*,int,int ) ;
 int FUNC_4 (struct mt7603_dev*,int ,int ) ;
 int FUNC_5 (struct mt7603_dev*,int ,int ,int ,int) ;
 int FUNC_6 (struct mt7603_dev*,int ,int ) ;
 int FUNC_7 (struct mt7603_dev*,int ) ;
 int FUNC_8 (struct mt7603_dev*,int ) ;
 int FUNC_9 (struct mt7603_dev*,scalar_t__,int) ;

void FUNC_10(struct mt7603_dev *VAR_27, int VAR_28)
{
 int VAR_29 = VAR_0 / VAR_16;
 int VAR_30 = VAR_28 / VAR_29;
 int VAR_31 = VAR_28 % VAR_29;

 int VAR_32 = VAR_17 / VAR_0;
 int VAR_33 = VAR_0 / VAR_18;
 int VAR_34 = VAR_32 + VAR_28 / VAR_33;
 int VAR_35 = (VAR_28 % VAR_33) * 2;

 int VAR_36 = VAR_19 / VAR_0;
 int VAR_37 = VAR_0 / VAR_20;
 int VAR_38 = VAR_36 + VAR_28 / VAR_37;
 int VAR_39 = VAR_28 % VAR_37;

 u32 VAR_40 = VAR_1 + VAR_28 * VAR_4;
 int VAR_41;

 FUNC_5(VAR_27, VAR_21, VAR_23, 0, 5000);

 FUNC_9(VAR_27, VAR_40 + 0 * 4,
  VAR_5 |
  VAR_6 |
  VAR_7);
 FUNC_9(VAR_27, VAR_40 + 1 * 4, 0);
 FUNC_9(VAR_27, VAR_40 + 2 * 4, 0);

 FUNC_6(VAR_27, VAR_2, VAR_3);

 FUNC_9(VAR_27, VAR_40 + 3 * 4,
  FUNC_0(VAR_11, VAR_30) |
  FUNC_0(VAR_10, VAR_31) |
  FUNC_0(VAR_12, VAR_38) |
  VAR_8 | VAR_9);
 FUNC_9(VAR_27, VAR_40 + 4 * 4,
  FUNC_0(VAR_14, VAR_34) |
  FUNC_0(VAR_13, VAR_35) |
  FUNC_0(VAR_15, VAR_39));

 FUNC_4(VAR_27, VAR_2, VAR_3);

 VAR_40 = FUNC_2(VAR_28);


 FUNC_9(VAR_27, VAR_40 + (15 * 4), 0);

 FUNC_8(VAR_27, FUNC_1(3, 0));
 for (VAR_41 = 2; VAR_41 <= 4; VAR_41++)
  FUNC_9(VAR_27, VAR_40 + (VAR_41 * 4), 0);
 FUNC_3(VAR_27, VAR_28, VAR_26);
 FUNC_7(VAR_27, FUNC_1(3, 0));

 FUNC_3(VAR_27, VAR_28, VAR_24);
 FUNC_3(VAR_27, VAR_28, VAR_25);
 FUNC_3(VAR_27, VAR_28, VAR_22);
}
