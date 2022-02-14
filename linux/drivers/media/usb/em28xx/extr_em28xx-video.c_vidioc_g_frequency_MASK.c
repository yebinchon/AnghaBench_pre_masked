
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {int frequency; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 struct em28xx* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
         struct v4l2_frequency *VAR_3)
{
 struct em28xx *VAR_4 = FUNC_0(VAR_1);
 struct em28xx_v4l2 *VAR_5 = VAR_4->v4l2;

 if (VAR_3->tuner != 0)
  return -VAR_0;

 VAR_3->frequency = VAR_5->frequency;
 return 0;
}
