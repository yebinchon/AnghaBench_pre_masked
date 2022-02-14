
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; int denominator; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
    int VAR_5, struct v4l2_fract *VAR_6)
{
 struct cx231xx_fh *VAR_7 = VAR_4;
 struct cx231xx *VAR_8 = VAR_7->dev;
 bool VAR_9 = VAR_8->norm & VAR_2;

 if (VAR_5 != VAR_1)
  return -VAR_0;

 VAR_6->numerator = VAR_9 ? 54 : 11;
 VAR_6->denominator = VAR_9 ? 59 : 10;

 return 0;
}
