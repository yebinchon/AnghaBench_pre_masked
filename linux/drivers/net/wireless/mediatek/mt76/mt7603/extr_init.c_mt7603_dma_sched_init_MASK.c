
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7603_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
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
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct mt7603_dev*) ;
 int FUNC_6 (struct mt7603_dev*,int ,int ) ;
 int FUNC_7 (struct mt7603_dev*,int ,int ) ;
 int FUNC_8 (struct mt7603_dev*,int ,int) ;
 scalar_t__ FUNC_9 (struct mt7603_dev*) ;

__attribute__((used)) static void
FUNC_10(struct mt7603_dev *VAR_18)
{
 int VAR_19 = 128;
 int VAR_20;
 int VAR_21 = 1792;
 int VAR_22 = 4096 / VAR_19;
 int VAR_23 = 4096;
 int VAR_24 = 512 * 4 + VAR_21;
 int VAR_25 = 4 * VAR_21 / VAR_19;
 int VAR_26 = 0;
 int VAR_27;
 int VAR_28;
 int VAR_29;

 VAR_20 = FUNC_6(VAR_18, VAR_6,
        VAR_7);
 VAR_27 = 4 * (VAR_24 / VAR_19);
 VAR_28 = VAR_23 / VAR_19;

 FUNC_8(VAR_18, VAR_8,
  FUNC_1(VAR_9, 7) |
  FUNC_1(VAR_10, 6) |
  FUNC_1(VAR_11, 4));

 FUNC_8(VAR_18, VAR_3, 0x55555553);
 FUNC_8(VAR_18, VAR_4, 0x78555555);

 FUNC_8(VAR_18, VAR_12, 0x2b1a096e);
 FUNC_8(VAR_18, VAR_13, 0x785f4d3c);

 FUNC_8(VAR_18, VAR_5, 0xffffffff);

 FUNC_8(VAR_18, VAR_15, VAR_20 | (2 << 28));
 FUNC_8(VAR_18, VAR_16, VAR_22);

 for (VAR_29 = 0; VAR_29 <= 4; VAR_29++)
  FUNC_8(VAR_18, FUNC_3(VAR_29), VAR_22);
 VAR_26 += 5 * VAR_22;

 FUNC_8(VAR_18, FUNC_3(5), VAR_28);
 VAR_26 += VAR_28;

 FUNC_8(VAR_18, FUNC_3(7), VAR_27);
 VAR_26 += VAR_27;

 FUNC_8(VAR_18, FUNC_3(8), VAR_25);
 VAR_26 += VAR_25;

 if (FUNC_5(VAR_18))
  VAR_26 = 0;

 FUNC_8(VAR_18, VAR_14, VAR_20 - VAR_26);

 if (FUNC_5(VAR_18) && FUNC_9(VAR_18) >= VAR_0) {
  FUNC_8(VAR_18, FUNC_2(0),
   VAR_20 - VAR_27 - VAR_28);
  FUNC_8(VAR_18, FUNC_2(1), VAR_27);
  FUNC_8(VAR_18, VAR_1, 0x0080ff5f);
  FUNC_8(VAR_18, FUNC_2(2), VAR_28);
  FUNC_8(VAR_18, VAR_2, 0x00000020);
 } else {
  FUNC_8(VAR_18, FUNC_2(0), VAR_20);
  FUNC_8(VAR_18, VAR_1, 0xffff);
 }

 FUNC_8(VAR_18, VAR_17, 0);

 for (VAR_29 = 0; VAR_29 <= 15; VAR_29++)
  FUNC_8(VAR_18, FUNC_4(VAR_29), 0xfffff);

 FUNC_7(VAR_18, VAR_17, FUNC_0(6));
}
