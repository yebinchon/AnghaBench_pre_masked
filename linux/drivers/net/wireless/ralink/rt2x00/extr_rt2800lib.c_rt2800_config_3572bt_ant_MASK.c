
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
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
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int,int,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void FUNC_7(struct rt2x00_dev *VAR_11)
{
 u32 VAR_12;
 u16 VAR_13;
 u8 VAR_14, VAR_15, VAR_16;

 VAR_12 = FUNC_2(VAR_11, VAR_2);
 if (VAR_11->curr_band == VAR_10) {
  FUNC_6(&VAR_12, VAR_3, 1);
  FUNC_6(&VAR_12, VAR_4, 1);
 } else {
  FUNC_6(&VAR_12, VAR_3, 0);
  FUNC_6(&VAR_12, VAR_4, 0);
 }
 FUNC_3(VAR_11, VAR_2, VAR_12);

 VAR_12 = FUNC_2(VAR_11, VAR_5);
 VAR_15 = FUNC_5(VAR_12, VAR_7) ? 3 : 0;
 VAR_16 = FUNC_5(VAR_12, VAR_7) ? 0 : 3;
 if (VAR_15 != FUNC_5(VAR_12, VAR_6) ||
     VAR_16 != FUNC_5(VAR_12, VAR_8)) {
  VAR_13 = FUNC_0(VAR_11, VAR_0);
  VAR_14 = FUNC_4(VAR_13, VAR_1);
  if (VAR_14 == 0 || VAR_14 > 0x40) {
   FUNC_6(&VAR_12, VAR_6, VAR_15);
   FUNC_6(&VAR_12, VAR_8, VAR_16);
   FUNC_3(VAR_11, VAR_5, VAR_12);
  } else {
   FUNC_1(VAR_11, VAR_9, 0xff,
        (VAR_15 << 2) | VAR_16, 1);
  }
 }
}
