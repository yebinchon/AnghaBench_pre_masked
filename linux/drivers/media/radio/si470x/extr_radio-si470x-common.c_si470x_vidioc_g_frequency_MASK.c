
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; int type; } ;
struct si470x_device {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct si470x_device*,int *) ;
 struct si470x_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
  struct v4l2_frequency *VAR_4)
{
 struct si470x_device *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->tuner != 0)
  return -VAR_0;

 VAR_4->type = VAR_1;
 return FUNC_0(VAR_5, &VAR_4->frequency);
}
