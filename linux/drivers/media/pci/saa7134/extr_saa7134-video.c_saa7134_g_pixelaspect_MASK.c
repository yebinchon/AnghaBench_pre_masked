
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct saa7134_dev {TYPE_1__* tvnorm; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct saa7134_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
     int VAR_7, struct v4l2_fract *VAR_8)
{
 struct saa7134_dev *VAR_9 = FUNC_0(VAR_5);

 if (VAR_7 != VAR_1 &&
     VAR_7 != VAR_2)
  return -VAR_0;

 if (VAR_9->tvnorm->id & VAR_3) {
  VAR_8->numerator = 11;
  VAR_8->denominator = 10;
 }
 if (VAR_9->tvnorm->id & VAR_4) {
  VAR_8->numerator = 54;
  VAR_8->denominator = 59;
 }
 return 0;
}
