
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct vivid_dev* FUNC_0 (struct file*) ;
 int FUNC_1 (struct vivid_dev*) ;

int FUNC_2(struct file *VAR_2, void *VAR_3,
    int VAR_4, struct v4l2_fract *VAR_5)
{
 struct vivid_dev *VAR_6 = FUNC_0(VAR_2);

 if (VAR_4 != VAR_1)
  return -VAR_0;

 switch (FUNC_1(VAR_6)) {
 case 129:
  VAR_5->numerator = 11;
  VAR_5->denominator = 10;
  break;
 case 128:
  VAR_5->numerator = 54;
  VAR_5->denominator = 59;
  break;
 default:
  break;
 }
 return 0;
}
