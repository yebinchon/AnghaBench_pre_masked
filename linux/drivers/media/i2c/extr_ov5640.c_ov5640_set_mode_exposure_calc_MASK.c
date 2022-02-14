
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ov5640_mode_info {scalar_t__ id; int reg_data; } ;
struct ov5640_dev {int prev_sysclk; int ae_low; int ae_high; int prev_hts; int ae_target; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ov5640_dev*) ;
 int FUNC_1 (struct ov5640_dev*) ;
 int FUNC_2 (struct ov5640_dev*) ;
 int FUNC_3 (struct ov5640_dev*) ;
 int FUNC_4 (struct ov5640_dev*) ;
 int FUNC_5 (struct ov5640_dev*) ;
 int FUNC_6 (struct ov5640_dev*) ;
 int FUNC_7 (struct ov5640_dev*,struct ov5640_mode_info const*) ;
 int FUNC_8 (struct ov5640_dev*,int ,int*) ;
 int FUNC_9 (struct ov5640_dev*,int) ;
 int FUNC_10 (struct ov5640_dev*,int) ;
 int FUNC_11 (struct ov5640_dev*) ;
 int FUNC_12 (struct ov5640_dev*,int) ;

__attribute__((used)) static int FUNC_13(struct ov5640_dev *VAR_4,
      const struct ov5640_mode_info *VAR_5)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 u32 VAR_16;
 u8 VAR_17;
 int VAR_18;

 if (!VAR_5->reg_data)
  return -VAR_0;


 VAR_18 = FUNC_1(VAR_4);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_6 = VAR_18;
 VAR_18 = FUNC_0(VAR_4);
 if (VAR_18 < 0)
  return VAR_18;
 if (VAR_18 && VAR_5->id != VAR_2 &&
     VAR_5->id != VAR_1)
  VAR_6 *= 2;


 VAR_18 = FUNC_2(VAR_4);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_7 = VAR_18;


 VAR_18 = FUNC_8(VAR_4, VAR_3, &VAR_17);
 if (VAR_18)
  return VAR_18;


 VAR_18 = FUNC_11(VAR_4);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_7(VAR_4, VAR_5);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_6(VAR_4);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_12 = VAR_18;
 VAR_18 = FUNC_3(VAR_4);
 if (VAR_18 < 0)
  return VAR_18;
 if (VAR_18 == 0)
  return -VAR_0;
 VAR_11 = VAR_18;

 VAR_18 = FUNC_5(VAR_4);
 if (VAR_18 < 0)
  return VAR_18;
 if (VAR_18 == 0)
  return -VAR_0;
 VAR_10 = VAR_18;


 VAR_18 = FUNC_4(VAR_4);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_13 = VAR_18;

 if (VAR_13 == 60) {

  VAR_14 = VAR_10 * 100 / VAR_11 * 100 / 120;
 } else {

  VAR_14 = VAR_10 * 100 / VAR_11;
 }

 if (!VAR_4->prev_sysclk) {
  VAR_18 = FUNC_5(VAR_4);
  if (VAR_18 < 0)
   return VAR_18;
  if (VAR_18 == 0)
   return -VAR_0;
  VAR_4->prev_sysclk = VAR_18;
 }

 if (!VAR_14)
  return -VAR_0;

 VAR_15 = (int)((VAR_12 - 4) / VAR_14);


 if (VAR_17 > VAR_4->ae_low && VAR_17 < VAR_4->ae_high) {

  VAR_16 =
   VAR_7 * VAR_6 *
   VAR_10 / VAR_4->prev_sysclk *
   VAR_4->prev_hts / VAR_11 *
   VAR_4->ae_target / VAR_17;
 } else {
  VAR_16 =
   VAR_7 * VAR_6 *
   VAR_10 / VAR_4->prev_sysclk *
   VAR_4->prev_hts / VAR_11;
 }


 if (VAR_16 < (VAR_14 * 16)) {

  VAR_8 = VAR_16 / 16;
  if (VAR_8 < 1)
   VAR_8 = 1;

  VAR_9 = VAR_16 / VAR_8;
  if (VAR_9 < 16)
   VAR_9 = 16;
 } else {
  if (VAR_16 > (VAR_14 * VAR_15 * 16)) {

   VAR_8 = VAR_14 * VAR_15;
   if (!VAR_8)
    return -VAR_0;

   VAR_9 = VAR_16 / VAR_8;
  } else {

   VAR_8 =
    ((int)(VAR_16 / 16 / VAR_14))
    * VAR_14;
   if (!VAR_8)
    return -VAR_0;

   VAR_9 = VAR_16 / VAR_8;
  }
 }


 VAR_18 = FUNC_10(VAR_4, VAR_9);
 if (VAR_18)
  return VAR_18;


 if (VAR_8 > (VAR_12 - 4)) {
  VAR_12 = VAR_8 + 4;
  VAR_18 = FUNC_12(VAR_4, VAR_12);
  if (VAR_18 < 0)
   return VAR_18;
 }


 return FUNC_9(VAR_4, VAR_8);
}
