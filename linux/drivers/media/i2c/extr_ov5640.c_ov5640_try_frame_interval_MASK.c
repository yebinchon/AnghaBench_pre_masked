
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fract {int numerator; int denominator; } ;
struct ov5640_mode_info {int dummy; } ;
struct ov5640_dev {int dummy; } ;
typedef enum ov5640_frame_rate { ____Placeholder_ov5640_frame_rate } ov5640_frame_rate ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;
 struct ov5640_mode_info* FUNC_4 (struct ov5640_dev*,int,int ,int ,int) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct ov5640_dev *VAR_4,
         struct v4l2_fract *VAR_5,
         u32 VAR_6, u32 VAR_7)
{
 const struct ov5640_mode_info *VAR_8;
 enum ov5640_frame_rate VAR_9 = VAR_1;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_10 = VAR_3[VAR_1];
 VAR_11 = VAR_3[VAR_2];

 if (VAR_5->numerator == 0) {
  VAR_5->denominator = VAR_11;
  VAR_5->numerator = 1;
  VAR_9 = VAR_2;
  goto find_mode;
 }

 VAR_13 = FUNC_3(FUNC_1(VAR_5->denominator, VAR_5->numerator),
   VAR_10, VAR_11);

 VAR_12 = VAR_10;
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_3); VAR_14++) {
  int VAR_15 = VAR_3[VAR_14];

  if (FUNC_2(VAR_15 - VAR_13) < FUNC_2(VAR_12 - VAR_13)) {
   VAR_12 = VAR_15;
   VAR_9 = VAR_14;
  }
 }

 VAR_5->numerator = 1;
 VAR_5->denominator = VAR_12;

find_mode:
 VAR_8 = FUNC_4(VAR_4, VAR_9, VAR_6, VAR_7, 0);
 return VAR_8 ? VAR_9 : -VAR_0;
}
