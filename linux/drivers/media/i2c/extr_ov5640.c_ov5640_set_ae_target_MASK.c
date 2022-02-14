
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ov5640_dev {int ae_low; int ae_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_6, int VAR_7)
{

 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_6->ae_low = VAR_7 * 23 / 25;
 VAR_6->ae_high = VAR_7 * 27 / 25;

 VAR_8 = VAR_6->ae_high << 1;
 if (VAR_8 > 255)
  VAR_8 = 255;

 VAR_9 = VAR_6->ae_low >> 1;

 VAR_10 = FUNC_0(VAR_6, VAR_0, VAR_6->ae_high);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_6, VAR_1, VAR_6->ae_low);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_6, VAR_3, VAR_6->ae_high);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_6, VAR_4, VAR_6->ae_low);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_6, VAR_2, VAR_8);
 if (VAR_10)
  return VAR_10;
 return FUNC_0(VAR_6, VAR_5, VAR_9);
}
