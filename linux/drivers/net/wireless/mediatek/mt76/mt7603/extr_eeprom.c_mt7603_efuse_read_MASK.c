
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mt7603_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (struct mt7603_dev*,int,int,int ,int) ;
 int FUNC_5 (struct mt7603_dev*,int) ;
 int FUNC_6 (struct mt7603_dev*,int,int) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct mt7603_dev *VAR_7, u32 VAR_8, u16 VAR_9, u8 *VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(VAR_7, VAR_8 + VAR_1);
 VAR_11 &= ~(VAR_2 |
   VAR_5);
 VAR_11 |= FUNC_0(VAR_2, VAR_9 & ~0xf);
 VAR_11 |= VAR_4;
 FUNC_6(VAR_7, VAR_8 + VAR_1, VAR_11);

 if (!FUNC_4(VAR_7, VAR_8 + VAR_1, VAR_4, 0, 1000))
  return -VAR_0;

 FUNC_8(2);

 VAR_11 = FUNC_5(VAR_7, VAR_8 + VAR_1);
 if ((VAR_11 & VAR_3) == VAR_3 ||
     FUNC_2(!(VAR_11 & VAR_6))) {
  FUNC_3(VAR_10, 0xff, 16);
  return 0;
 }

 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  VAR_11 = FUNC_5(VAR_7, VAR_8 + FUNC_1(VAR_12));
  FUNC_7(VAR_11, VAR_10 + 4 * VAR_12);
 }

 return 0;
}
