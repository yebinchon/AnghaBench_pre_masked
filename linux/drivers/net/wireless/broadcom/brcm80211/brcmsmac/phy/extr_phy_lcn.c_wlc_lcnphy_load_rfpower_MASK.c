
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct phytbl_info {int tbl_width; int tbl_len; int* tbl_ptr; scalar_t__ tbl_offset; int tbl_id; } ;
struct brcms_phy {int dummy; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct brcms_phy*,struct phytbl_info*) ;
 int FUNC_4 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void FUNC_5(struct brcms_phy *VAR_4)
{
 struct phytbl_info VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 u8 VAR_9;
 u8 VAR_10 = 1;
 s16 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_5.tbl_id = VAR_0;
 VAR_5.tbl_width = 32;
 VAR_5.tbl_len = 1;

 for (VAR_9 = 0; VAR_9 < 128; VAR_9++) {
  VAR_5.tbl_ptr = &VAR_7;
  VAR_5.tbl_offset = VAR_2 + VAR_9;
  FUNC_3(VAR_4, &VAR_5);
  VAR_7 = VAR_7 >> 20;

  VAR_5.tbl_ptr = &VAR_8;
  VAR_5.tbl_offset = VAR_1 + VAR_9;
  FUNC_3(VAR_4, &VAR_5);

  FUNC_0((s32) (VAR_7), 0, &VAR_12, &VAR_15);
  FUNC_0((s32) (1 << 6), 0, &VAR_13, &VAR_16);

  if (VAR_15 < VAR_16) {
   VAR_13 = FUNC_1(VAR_13, VAR_16 - VAR_15);
   VAR_14 = VAR_15;
  } else {
   VAR_12 = FUNC_1(VAR_12, VAR_15 - VAR_16);
   VAR_14 = VAR_16;
  }
  VAR_11 = FUNC_2(VAR_12, VAR_13);

  if (VAR_14 >= 4)
   VAR_17 = VAR_14 - 4;
  else
   VAR_17 = 4 - VAR_14;

  VAR_6 = (((VAR_9 << VAR_17) + (5 * VAR_11) +
   (1 << (VAR_10 + VAR_17 - 3))) >> (VAR_10 +
              VAR_17 - 2));

  VAR_5.tbl_ptr = &VAR_6;
  VAR_5.tbl_offset = VAR_3 + VAR_9;
  FUNC_4(VAR_4, &VAR_5);
 }
}
