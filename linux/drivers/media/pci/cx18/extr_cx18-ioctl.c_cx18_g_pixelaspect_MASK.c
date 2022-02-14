
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct file {int dummy; } ;
struct cx18 {scalar_t__ is_50hz; } ;
struct TYPE_2__ {struct cx18* cx; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
         int VAR_4, struct v4l2_fract *VAR_5)
{
 struct cx18 *VAR_6 = FUNC_0(VAR_3)->cx;

 if (VAR_4 != VAR_1)
  return -VAR_0;

 VAR_5->numerator = VAR_6->is_50hz ? 54 : 11;
 VAR_5->denominator = VAR_6->is_50hz ? 59 : 10;
 return 0;
}
