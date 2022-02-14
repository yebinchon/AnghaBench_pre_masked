
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; int denominator; } ;
struct file {int dummy; } ;
struct cx23885_dev {int tvnorm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cx23885_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    int VAR_5, struct v4l2_fract *VAR_6)
{
 struct cx23885_dev *VAR_7 = FUNC_0(VAR_3);
 bool VAR_8 = VAR_7->tvnorm & VAR_2;

 if (VAR_5 != VAR_1)
  return -VAR_0;

 VAR_6->numerator = VAR_8 ? 54 : 11;
 VAR_6->denominator = VAR_8 ? 59 : 10;

 return 0;
}
