
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct mt7603_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (void const*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct mt7603_dev*,int,int ) ;
 int FUNC_9 (struct mt7603_dev*,int ,int ,int ,int) ;
 int FUNC_10 (struct mt7603_dev*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct mt7603_dev*,int ) ;
 int FUNC_12 (struct mt7603_dev*,int ) ;
 int FUNC_13 (struct mt7603_dev*,scalar_t__,int ) ;

void FUNC_14(struct mt7603_dev *VAR_11, int VAR_12, int VAR_13,
        const u8 *VAR_14)
{
 const void *VAR_15 = VAR_14;
 u32 VAR_16 = FUNC_4(VAR_12);
 u32 VAR_17 = 0, VAR_18 = 0;
 int VAR_19;

 if (VAR_15) {
  VAR_17 = FUNC_0(VAR_0,
    FUNC_2(VAR_15 + 4));
  VAR_18 = FUNC_0(VAR_3,
    FUNC_3(VAR_15));
 }

 if (VAR_13 < 0)
  VAR_13 = 0;
 else
  VAR_17 |= VAR_2;
 VAR_17 |= FUNC_0(VAR_1, VAR_13);

 FUNC_9(VAR_11, VAR_8, VAR_9, 0, 5000);

 FUNC_10(VAR_11, VAR_16 + 0 * 4, VAR_17);
 FUNC_10(VAR_11, VAR_16 + 1 * 4, VAR_18);
 FUNC_10(VAR_11, VAR_16 + 2 * 4, VAR_4);

 FUNC_12(VAR_11, FUNC_1(3, 0));
 VAR_16 = FUNC_5(VAR_12);
 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19 += 4)
  FUNC_13(VAR_11, VAR_16 + VAR_19, 0);
 FUNC_8(VAR_11, VAR_12, VAR_10);
 FUNC_11(VAR_11, FUNC_1(3, 0));

 VAR_16 = FUNC_6(VAR_12);
 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19 += 4)
  FUNC_13(VAR_11, VAR_16 + VAR_19, 0);

 VAR_16 = FUNC_7(VAR_12);
 for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19 += 4)
  FUNC_13(VAR_11, VAR_16 + VAR_19, 0);
}
